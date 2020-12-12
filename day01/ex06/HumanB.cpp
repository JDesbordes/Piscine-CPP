#include "HumanB.hpp"

int		HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
	return (1);
}

int		HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with his " << weapon->type << std::endl;
	else
		std::cout << name << " attacks with his ... nothing?" << std::endl;
	return (1);
}

HumanB::HumanB(std::string str)
{
	name = str;
	//weapon = Weapon();
}

HumanB::HumanB()
{
	name = "John Doe";
	//weapon = Weapon();
}