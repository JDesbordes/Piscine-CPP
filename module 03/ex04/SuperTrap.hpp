#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{

  public :
  	SuperTrap();
  	SuperTrap(std::string name);
  	SuperTrap(const SuperTrap &src);
	SuperTrap & operator=( SuperTrap const & rhs );
	virtual ~SuperTrap();
};

#endif
