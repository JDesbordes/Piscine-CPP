#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

  public :
  	ScavTrap();
  	ScavTrap(std::string name);
	~ScavTrap();
	void challengNewcomer(std::string const & target);
};

#endif
