#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	std::cout << "* teleports from space *" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/* ************************************************************************** */