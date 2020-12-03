
#include "HumanB.hpp"

int		HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
	return (1);
}

int		HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->type << "\n";
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