#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
	grade = 150;
	name = "bob";
}

Bureaucrat::Bureaucrat(std::string n, int g)
{
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = g;
	name = n;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	grade = src.grade;
	name = src.name;
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
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->grade = rhs.getGrade();
	}
	return *this;
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

Bureaucrat::GradeTooHighException::GradeTooHighException() throw(){};

const char* Bureaucrat::GradeTooHighException::what() const throw () {
       return ("grade is too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw(){};


const char* Bureaucrat::GradeTooLowException::what() const throw () {
       return ("grade is too low");
}


std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/* ************************************************************************** */