#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : name("bob")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = g;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.getName())
{
	grade = src.grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (this == &rhs) return(*this);
	this->~Bureaucrat();
	return *new(this) Bureaucrat(rhs);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= 1;
}
void Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += 1;
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
       					return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
       return ("grade is too low");
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/* ************************************************************************** */