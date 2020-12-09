#include "Form.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " Requires grade " << i.getSignGrade() << " to sign, grade " <<
		i.getExeGrade() << " to execute and " << ((i.getIsSigned()) ? "is signed." : "isn't signed");
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

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

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

Form::GradeTooHighException::GradeTooHighException() throw(){};

const char* Form::GradeTooHighException::what() const throw () {
       return ("grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() throw(){};


const char* Form::GradeTooLowException::what() const throw () {
       return ("grade is too low");
}

/* ************************************************************************** */