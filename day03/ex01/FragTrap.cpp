#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "get off my lawn!" << std::endl;
	std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " << Ranged_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ready for the PUNCHline?!" << std::endl;
	std::cout << "FR4G-TP " << Name << " melee attacks " << target << " causing " << Melee_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "Protect me Squire" << std::endl;
	Hit_points -= amount - Armor_damage_reduction;
	if (Hit_points < 0)
		Hit_points = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "Here you go, chum!" << std::endl;
	Hit_points += amount;
	if (Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (Energy_points < 25)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	Energy_points -= 25;
	switch(std::rand() % 5)
	{
		case 0:
			std::cout << "This time it'll be awesome, I promise!" << std::endl << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
			std::cout << "FR4G-TP " << Name << " uses Miniontrap on " << target << " causing " << 5 << " * " << 5 << " points of damage!" << std::endl;
			break;
		case 1:
			std::cout << "You can't just program this level of excitement!" << std::endl << "It's the only way to stop the voices!" << std::endl;
			std::cout << "FR4G-TP " << Name << " uses Meat Unicycle on " << target << " causing " << 50 << " points of damage!" << std::endl;
			break;
		case 2:
			std::cout << "I'm pulling tricks outta my hat!" << std::endl << "You can call me Gundalf!" << std::endl;
			std::cout << "FR4G-TP " << Name << " uses Gun Wizard on " << target << " causing " << 48 << " points of damage!" << std::endl;
			break;
		case 3:
			std::cout << "Running the sequencer!" << std::endl << "Some days, you just can't get rid of an obscure pop-culture reference." << std::endl;
			std::cout << "FR4G-TP " << Name << " uses Clap-in-the-Box on " << target << " causing " << -50 << " points of damage!" << std::endl;
			break;
		case 4:
			std::cout << "F to the R to the 4 to the G to the WHAAT!" << std::endl << "It's time for my free grenade giveaway!" << std::endl;
			std::cout << "FR4G-TP " << Name << " uses Torgue Fiesta on " << target << " causing " << 99 << " points of damage!" << std::endl;
			break;
		default :
			std::cout << "HOW?" << std::endl;
	}
}

FragTrap::FragTrap()
{
	std::cout << "IM ALIVE!!" << std::endl;
	Hit_points = 100;
  	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Name = "CL4P-TP";
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "IM ALIVE!!" << std::endl;
	Hit_points = 100;
  	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Name = name;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "IM ALIVE!!" << std::endl;
	Hit_points = src.get_Hit_points();
  	Max_hit_points = src.get_Max_hit_points();
	Energy_points = src.get_Energy_points();
	Max_energy_points = src.get_Max_hit_points();
	Level = src.get_Level();
	Name = src.get_Name();
	Melee_attack_damage = src.get_Melee_attack_damage();
	Ranged_attack_damage = src.get_Ranged_attack_damage();
	Armor_damage_reduction = src.get_Armor_damage_reduction();
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

int FragTrap::get_Hit_points() const
{
	return (Hit_points);
}

int FragTrap::get_Max_hit_points() const
{
	return (Max_hit_points);
}

int FragTrap::get_Energy_points() const
{
	return (Energy_points);
}

int FragTrap::get_Max_energy_points() const
{
	return (Max_energy_points);
}

int FragTrap::get_Level() const
{
	return (Level);
}

std::string FragTrap::get_Name() const
{
	return (Name);
}

int FragTrap::get_Melee_attack_damage() const
{
	return (Melee_attack_damage);
}

int FragTrap::get_Ranged_attack_damage() const
{
	return (Ranged_attack_damage);
}

int FragTrap::get_Armor_damage_reduction() const
{
	return (Armor_damage_reduction);
}

void	FragTrap::operator=(const FragTrap &copied)
{
	Hit_points = copied.get_Hit_points();
  	Max_hit_points = copied.get_Hit_points();
	Energy_points = copied.get_Energy_points();
	Max_energy_points = copied.get_Max_energy_points();
	Level = copied.get_Level();
	Name = copied.get_Name();
	Melee_attack_damage = copied.get_Melee_attack_damage();
	Ranged_attack_damage = copied.get_Ranged_attack_damage();
	Armor_damage_reduction = copied.get_Armor_damage_reduction();
}
