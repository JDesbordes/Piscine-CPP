#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &copied): AWeapon(copied)
{
	
}

PowerFist::~PowerFist()
{
	
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist& PowerFist::operator=(const PowerFist &copied)
{
	setName(copied.getName());
	setAPCost(copied.getAPCost());
	setDamage(copied.getDamage());
	return (*this);
}
