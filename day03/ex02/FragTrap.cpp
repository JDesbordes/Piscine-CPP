#include "FragTrap.hpp"

void FragTrap::vaulthunter_dot_exe(std::string const & target)
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
			std::cout << "This time it'll be awesome, I promise!" << std::endl << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
			std::cout << "FR4G-TP " << getName() << " uses Miniontrap on " << target << " causing " << 5 << " * " << 5 << " points of damage!" << std::endl;
			break;
		case 1:
			std::cout << "You can't just program this level of excitement!" << std::endl << "It's the only way to stop the voices!" << std::endl;
			std::cout << "FR4G-TP " << getName() << " uses Meat Unicycle on " << target << " causing " << 50 << " points of damage!" << std::endl;
			break;
		case 2:
			std::cout << "I'm pulling tricks outta my hat!" << std::endl << "You can call me Gundalf!" << std::endl;
			std::cout << "FR4G-TP " << getName() << " uses Gun Wizard on " << target << " causing " << 48 << " points of damage!" << std::endl;
			break;
		case 3:
			std::cout << "Running the sequencer!" << std::endl << "Some days, you just can't get rid of an obscure pop-culture reference." << std::endl;
			std::cout << "FR4G-TP " << getName() << " uses Clap-in-the-Box on " << target << " causing " << -50 << " points of damage!" << std::endl;
			break;
		case 4:
			std::cout << "F to the R to the 4 to the G to the WHAAT!" << std::endl << "It's time for my free grenade giveaway!" << std::endl;
			std::cout << "FR4G-TP " << getName() << " uses Torgue Fiesta on " << target << " causing " << 99 << " points of damage!" << std::endl;
			break;
		default :
			std::cout << "HOW?" << std::endl;
	}
}

FragTrap::FragTrap()
{
	std::cout << "IM ALIVE!!" << std::endl;
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(100);
	setMax_energy_points(100);
	setLevel(1);
	setName("CL4P-TP");
	setMelee_attack_damage(30);
	setRanged_attack_damage(20);
	setArmor_damage_reduction(5);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "IM ALIVE!!" << std::endl;
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(100);
	setMax_energy_points(100);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(30);
	setRanged_attack_damage(20);
	setArmor_damage_reduction(5);
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "IM ALIVE!!" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}