#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(), NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setName("SUP3R-TP");
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setMelee_attack_damage(60);
}

SuperTrap::SuperTrap(std::string name): ClapTrap(), NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(60);
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
