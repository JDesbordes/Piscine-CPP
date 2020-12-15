#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Take two bullets, then call me in the morning." << std::endl;
	std::cout << "SC4V-TP " << Name << " attacks " << target << " at range, causing " << Ranged_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Meet professor punch!" << std::endl;
	std::cout << "SC4V-TP " << Name << " melee attacks " << target << " causing " << Melee_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SAVE ME!!" << std::endl;
	Hit_points -= amount - Armor_damage_reduction;
	if (Hit_points < 0)
		Hit_points = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "I'm Back" << std::endl;
	Hit_points += amount;
	if (Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
}

void ScavTrap::challengNewcomer(std::string const & target)
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
	Name = "SC4V-TP";
	Hit_points = 100;
  	Max_hit_points = 100;
	Energy_points = 50;
	Max_energy_points = 50;
	Level = 1;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TRAP Online" << std::endl;
	Hit_points = 100;
  	Max_hit_points = 100;
	Energy_points = 50;
	Max_energy_points = 50;
	Level = 1;
	Name = name;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "SC4V-TRAP Online" << std::endl;
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

ScavTrap::~ScavTrap()
{
	std::cout << "Connection lost :(" << std::endl;
}


int ScavTrap::get_Hit_points() const
{
	return (Hit_points);
}

int ScavTrap::get_Max_hit_points() const
{
	return (Max_hit_points);
}

int ScavTrap::get_Energy_points() const
{
	return (Energy_points);
}

int ScavTrap::get_Max_energy_points() const
{
	return (Max_energy_points);
}

int ScavTrap::get_Level() const
{
	return (Level);
}

std::string ScavTrap::get_Name() const
{
	return (Name);
}

int ScavTrap::get_Melee_attack_damage() const
{
	return (Melee_attack_damage);
}

int ScavTrap::get_Ranged_attack_damage() const
{
	return (Ranged_attack_damage);
}

int ScavTrap::get_Armor_damage_reduction() const
{
	return (Armor_damage_reduction);
}

void	ScavTrap::operator=(const ScavTrap &copied)
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
