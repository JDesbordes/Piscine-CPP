#include "ClapTrap.hpp"

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Get off my lawn!" << std::endl;
	std::cout << "CL4P-TP " << Name << " attacks " << target << " at range, causing " << Ranged_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ready for the PUNCHline?!" << std::endl;
	std::cout << "CL4P-TP " << Name << " melee attacks " << target << " causing " << Melee_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Protect me Squire" << std::endl;
	Hit_points -= amount - Armor_damage_reduction;
	if (Hit_points < 0)
		Hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Here you go, chum!" << std::endl;
	Hit_points += amount;
	if (Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
}

void ClapTrap::setHit_points(int i)
{
	Hit_points = i;
}
void ClapTrap::setMax_hit_points(int i)
{
	Max_hit_points = i;
}
void ClapTrap::setEnergy_points(int i)
{
	Energy_points = i;
}
void ClapTrap::setMax_energy_points(int i)
{
	Max_energy_points = i;
}
void ClapTrap::setLevel(int i)
{
	Level = i;
}
void ClapTrap::setMelee_attack_damage(int i)
{
	Melee_attack_damage = i;
}
void ClapTrap::setRanged_attack_damage(int i)
{
	Ranged_attack_damage = i;
}
void ClapTrap::setArmor_damage_reduction(int i)
{
	Armor_damage_reduction = i;
}
void ClapTrap::setName(std::string name)
{
	Name = name;
}

int ClapTrap::getHit_points()
{
	return (Hit_points);
}
int ClapTrap::getMax_hit_points()
{
	return (Max_hit_points);
}
int ClapTrap::getEnergy_points()
{
	return (Energy_points);
}
int ClapTrap::getMax_energy_points()
{
	return (Max_energy_points);
}
int ClapTrap::getLevel()
{
	return (Level);
}
int ClapTrap::getMelee_attack_damage()
{
	return (Melee_attack_damage);
}
int ClapTrap::getRanged_attack_damage()
{
	return (Ranged_attack_damage);
}
int ClapTrap::getArmor_damage_reduction()
{
	return (Armor_damage_reduction);
}
std::string ClapTrap::getName()
{
	return (Name);
}

ClapTrap::ClapTrap()
{
	std::cout << "Factory new ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Decommissioning ClapTrap" << std::endl;
}
