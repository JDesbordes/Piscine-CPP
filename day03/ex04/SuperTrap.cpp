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

SuperTrap::SuperTrap(const SuperTrap &src)
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setEnergy_points(src.getEnergy_points());
	setMax_energy_points(src.getMax_energy_points());
	setLevel(src.getLevel());
	setName(src.getName());
	setMelee_attack_damage(src.getMelee_attack_damage());
}

SuperTrap::~SuperTrap()
{
	std::cout << "I'M SUPER DEAD I'M SUPER DEAD OHMYGOD I'M SUPER DEAD!" << std::endl;
}

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
