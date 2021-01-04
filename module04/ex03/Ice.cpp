#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
{
	setType("ice");
}

Ice::Ice( const Ice & src )
{
	setType(src.getType());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
		AMateria::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */