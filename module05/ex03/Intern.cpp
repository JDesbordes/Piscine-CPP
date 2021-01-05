#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	static_cast<void>(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	static_cast<void>(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	static_cast<void>(i);
	o << "Intern address -> " << &i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

static Form* newPresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target));}
static Form* newRobotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target));}
static Form* newShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target));}

Form*					Intern::makeForm(std::string type, std::string name)
{
	int i = 0;
	typedef Form* (*marker)(std::string const & target);
	typedef struct {std::string name; marker create; } nameForms;
	nameForms	formslist[]=
	{
		{"presidential pardon", &newPresidentialPardonForm},
		{"robotomy request", &newRobotomyRequestForm},
		{"shrubbery creation", &newShrubberyCreationForm}
	};
	int arraysize = (sizeof(formslist)/sizeof(*formslist));
	while (i < arraysize)
	{
		if (formslist[i].name == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			Form* value = formslist[i].create(name);
			return (value);
		}
		i++;
	}
	std::cout << type << " is of unknown form type" << std::endl;
	return (NULL);
}


/* ************************************************************************** */