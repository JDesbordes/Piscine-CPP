#include "ZeusSpear.hpp"

ZeusSpear::ZeusSpear(): AWeapon("Zeus Spear", 1, 5000)
{

}

ZeusSpear::ZeusSpear(ZeusSpear const &copied): AWeapon(copied)
{
	
}

ZeusSpear::~ZeusSpear()
{
	
}

void ZeusSpear::attack() const
{
	std::cout << "* thunder song *" << std::endl;
}

ZeusSpear& ZeusSpear::operator=(const ZeusSpear &copied)
{
	setName(copied.getName());
	setAPCost(copied.getAPCost());
	setDamage(copied.getDamage());
	return (*this);
}