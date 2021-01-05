#include "Form.hpp"

Form::Form(std::string const &_name, int const _exeGrade, int const _signGrade): name(_name), signGrade(_signGrade), exeGrade(_exeGrade)
{
	if (_signGrade > 150 || _exeGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _exeGrade < 1)
		throw Form::GradeTooHighException();
	this->_signed = false;
}

Form::Form( Form const & src ): name(src.name), signGrade(src.signGrade), exeGrade(src.exeGrade)
{
	static_cast<void>(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){};


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &		Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		if (signGrade > 150 || exeGrade > 150)
			throw Form::GradeTooLowException();
		if (signGrade < 1 || exeGrade < 1)
			throw Form::GradeTooHighException();
		std::string& str = const_cast<std::string&>(this->name);
		str = rhs.getName();
		this->_signed = rhs.getIsSigned();
		int& n = const_cast<int&>(this->signGrade);
		n = rhs.getSignGrade();
		n = const_cast<int&>(this->exeGrade);
		n = rhs.getExeGrade();
		this->target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " Requires grade " << i.getSignGrade() << " to sign, grade " <<
		i.getExeGrade() << " to execute and " << ((i.getIsSigned()) ? "is signed." : "isn't signed");
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::setTarget(std::string t)
{
	target = t;
}

bool Form::getIsSigned() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (signGrade);
}

int Form::getExeGrade() const
{
	return (exeGrade);
}

std::string Form::getName() const
{
	return (name);
}

std::string Form::getTarget() const
{
	return (target);
}

void 	Form::beSigned(Bureaucrat *b)
{
	if (b->getGrade() < getSignGrade())
	{
		_signed = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw Form::NotSignedException();
	if (executor.getGrade() > exeGrade)
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw ()
{
       return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw ()
{
       return ("grade is too low");
}

const char* Form::NotSignedException::what() const throw ()
{
       return ("form is not signed");
}
/* ************************************************************************** */