
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

	public :
	std::string name;
	Weapon *weapon;
	HumanB(std::string str);
	HumanB();
	int		setWeapon(Weapon& weap);
	int		attack();
};

#endif
