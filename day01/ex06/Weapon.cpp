#include "Weapon.hpp"

int		Weapon::setType(std::string str)
{
	type = str;
	return (1);
}

std::string	Weapon::getType() const
{
	return(type);
}

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::Weapon()
{
	type = "Bare fists";
}
