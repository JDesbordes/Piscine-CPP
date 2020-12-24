#include "Scalarc.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalarc::Scalarc()
{
	options = 0;
}

Scalarc::Scalarc( const Scalarc & src )
{
	this->notint = false;
	this->base = src.getBase();
	this->converted = src.getConverted();
}

Scalarc::Scalarc(char *str)
{
	options = 0;
	this->notint = false;
	this->base = str;
	this->converted = convertToDouble(str, 1);
	//std::cout << this->converted << std::endl;
	//std::cout << "Float limits -> max : " << std::numeric_limits<float>::max() << " min : " << std::numeric_limits<float>::min() << std::endl;
	//std::cout << "Double limits -> max : " << std::numeric_limits<double>::max() << " min : " << std::numeric_limits<double>::min() << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalarc::~Scalarc()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalarc &				Scalarc::operator=( Scalarc const & rhs )
{
	if ( this != &rhs )
	{
		this->base = rhs.getBase();
		this->converted = rhs.getConverted();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Scalarc const & i )
{
	o << "Value = " << i.getConverted();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

double	Scalarc::getConverted() const
{
	return (converted);
}

char	*Scalarc::getBase() const
{
	return (base);
}

double Scalarc::convertToDouble(char *str, int i)
{
	double ret = 0;
	if (!std::strcmp(str, "nan") || !std::strcmp(str, "nanf"))
		options = 1;
	else if (!std::strcmp(str, "-inf") || !std::strcmp(str, "-inff"))
		options = 2;
	else if (!std::strcmp(str, "+inf") || !std::strcmp(str, "+inff"))
		options = 3;
	else if (std::strlen(str) == 3 && str[0] == '\'' && str[2] == '\'' && std::isprint(str[1]))
	{
		ret = (double)str[1];
	}
	else
	{
		if ((str[0] == '-' || str[0] == '+') ? !std::isdigit(str[1]) :  !std::isdigit(str[0]))
		{
			notint = true;
		}
		ret = std::atof(str);
		if (notint == true && i != 1)
			throw Scalarc::ImpossibleConversionException();
		if (ret != 0 && i != 1 && !((ret <= std::numeric_limits<double>::max() && ret >= std::numeric_limits<double>::min()) ||
			(ret >= -std::numeric_limits<double>::max() && ret <= -std::numeric_limits<double>::min())))
		{
			throw Scalarc::ImpossibleConversionException();
		}
	}
	if (options == 2)
		return (-std::numeric_limits<double>::infinity());
	if (options == 3)
		return (std::numeric_limits<double>::infinity());
	if (options == 1)
		return (std::numeric_limits<double>::signaling_NaN());
	return (ret);
}

float	Scalarc::convertToFloat()
{
	if (options == 2)
		return (-std::numeric_limits<float>::infinity());
	else if (options == 3)
		return (std::numeric_limits<float>::infinity());
	else if (options == 1)
		return (std::numeric_limits<float>::signaling_NaN());
	if (notint == true)
		throw Scalarc::ImpossibleConversionException();
	if (this->converted == 0 || (this->converted <= std::numeric_limits<float>::max() && this->converted >= std::numeric_limits<float>::min()) ||
		(this->converted >= -std::numeric_limits<float>::max() && this->converted <= -std::numeric_limits<float>::min()))
	{
		return (static_cast <float>(this->converted));
	}
	else
	{
		throw Scalarc::ImpossibleConversionException();
	}
}

char	Scalarc::convertToChar()
{
	if (notint == true)
		throw Scalarc::ImpossibleConversionException();
	if (this->converted <= std::numeric_limits<unsigned char>::max() && this->converted >= std::numeric_limits<unsigned char>::min())
	{
		if (std::isprint(static_cast <char>(this->converted)))
		{
			std::cout << "\'";
			return (static_cast <char>(this->converted));
		}
		else
			throw Scalarc::NonDisplayableException();
	}
	else
	{
		throw Scalarc::ImpossibleConversionException();
	}
}

int		Scalarc::convertToInt()
{
	if (notint == true)
		throw Scalarc::ImpossibleConversionException();
	if (this->converted <= std::numeric_limits<int>::max() && this->converted >= std::numeric_limits<int>::min())
	{
		if (options == 2)
			throw Scalarc::ImpossibleConversionException();
		return (static_cast <int>(this->converted));
	}
	else
	{
		throw Scalarc::ImpossibleConversionException();
	}
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/
Scalarc::NonDisplayableException::NonDisplayableException() throw(){};

const char* Scalarc::NonDisplayableException::what() const throw () {
       return ("Non displayable");
}

Scalarc::ImpossibleConversionException::ImpossibleConversionException() throw(){};


const char* Scalarc::ImpossibleConversionException::what() const throw () {
       return ("impossible");
}


/* ************************************************************************** */