#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	(void)src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/* ************************************************************************** */