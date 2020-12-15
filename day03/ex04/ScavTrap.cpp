#include "ScavTrap.hpp"

void ScavTrap::challengNewcomer(std::string const & target)
{
	if (getEnergy_points() < 25)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	setEnergy_points(getEnergy_points() - 25);
	switch(std::rand() % 5)
	{
		case 0:
			std::cout << "SC4V-TP challenges " << target << " to a kickboxing match !" << std::endl;
			break;
		case 1:
			std::cout << "SC4V-TP challenges " << target << " to a marathon !" << std::endl;
			break;
		case 2:
			std::cout << "SC4V-TP challenges " << target << " to a rock-paper-scissors !" << std::endl;
			break;
		case 3:
			std::cout << "SC4V-TP challenges " << target << " to a football game !" << std::endl;
			break;
		case 4:
			std::cout << "SC4V-TP challenges " << target << " to a food fight !" << std::endl;
			break;
		default :
			std::cout << "HOW?" << std::endl;
	}
}

ScavTrap::ScavTrap()
{
	std::cout << "SC4V-TRAP Online" << std::endl;
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(50);
	setMax_energy_points(50);
	setLevel(1);
	setName("SC4V-TP");
	setMelee_attack_damage(20);
	setRanged_attack_damage(15);
	setArmor_damage_reduction(3);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TRAP Online" << std::endl;
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(50);
	setMax_energy_points(50);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(20);
	setRanged_attack_damage(15);
	setArmor_damage_reduction(3);
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "SC4V-TRAP Online" << std::endl;
	setHit_points(src.getHit_points());
  	setMax_hit_points(src.getMax_hit_points());
	setEnergy_points(src.getEnergy_points());
	setMax_energy_points(src.getMax_energy_points());
	setLevel(src.getLevel());
	setName(src.getName());
	setMelee_attack_damage(src.getMelee_attack_damage());
	setRanged_attack_damage(src.getRanged_attack_damage());
	setArmor_damage_reduction(src.getArmor_damage_reduction());
}

ScavTrap::~ScavTrap()
{
	std::cout << "Connection lost :(" << std::endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
