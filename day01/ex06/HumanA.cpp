
#include "HumanA.hpp"

int		HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
	return (1);
}

HumanA::HumanA(std::string str, Weapon& weap) : weapon(weap)
{
	name = str;
	weapon = weap;
}

