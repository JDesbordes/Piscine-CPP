#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria( const AMateria & src )
{
	setType(src.getType());
	this->_xp = src.getXP();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_xp = rhs.getXP();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/* ************************************************************************** */