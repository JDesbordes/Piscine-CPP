#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

  public :
  	FragTrap();
  	FragTrap(std::string name);
  	FragTrap(const FragTrap &src);
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif
