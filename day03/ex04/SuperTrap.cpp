#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setName("SUP3R-TP");
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::SuperTrap(std::string name): NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::~SuperTrap()
{
	std::cout << "I'M SUPER DEAD I'M SUPER DEAD OHMYGOD I'M SUPER DEAD!" << std::endl;
}
