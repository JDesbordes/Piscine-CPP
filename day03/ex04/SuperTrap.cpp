#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setName("SUP3R-TP");
	setEnergy_points(NinjaTrap::getEnergy_points());
	setMax_energy_points(NinjaTrap::getMax_energy_points());
	setLevel(1);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::SuperTrap(std::string name): NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setEnergy_points(NinjaTrap::getEnergy_points());
	setMax_energy_points(NinjaTrap::getMax_energy_points());
	setName(name);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	(void)src;
	std::cout << "IM SUPER ALIVE!!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "I'M SUPER DEAD I'M SUPER DEAD OHMYGOD I'M SUPER DEAD!" << std::endl;
}

SuperTrap &		SuperTrap::operator=( SuperTrap const & rhs )
{
	(void)rhs;
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	return *this;
}
