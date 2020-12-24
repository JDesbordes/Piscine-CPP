#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	setType("cure");
}

Cure::Cure( const Cure & src )
{
	setType(src.getType());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
		AMateria::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void	Cure::use(ICharacter& target)
{
	AMateria::use(target);std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
	
}

/* ************************************************************************** */