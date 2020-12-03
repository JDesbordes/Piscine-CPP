#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copied): AWeapon(copied)
{
	
}

PlasmaRifle::~PlasmaRifle()
{
	
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &copied)
{
	setName(copied.getName());
	setAPCost(copied.getAPCost());
	setDamage(copied.getDamage());
	return (*this);
}