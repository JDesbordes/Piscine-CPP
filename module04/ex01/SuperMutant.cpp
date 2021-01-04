#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copied) : Enemy(copied)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void	SuperMutant::takeDamage(int i)
{
	Enemy::takeDamage(i > 3 ? i - 3 : 0);
}

SuperMutant& SuperMutant::operator=(const SuperMutant &copied)
{
	setHP(copied.getHP());
	setType(copied.getType());
	return (*this);
}
