#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

  public :
  	NinjaTrap();
  	NinjaTrap(std::string name);
	~NinjaTrap();
	void ninjaShoebox(std::string const & target);
};

#endif
