#include "PresidentialPardonForm.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void 	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/* ************************************************************************** */