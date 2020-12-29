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
	if (amount < Hit_points)
		Hit_points -= amount;
	else
		Hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Here you go, chum!" << std::endl;
	if (amount < Max_hit_points - Hit_points)
		Hit_points += amount;
	else
		Hit_points = Max_hit_points;
}

void ClapTrap::setHit_points(unsigned int i)
{
	Hit_points = i;
}
void ClapTrap::setMax_hit_points(unsigned int i)
{
	Max_hit_points = i;
}
void ClapTrap::setEnergy_points(unsigned int i)
{
	Energy_points = i;
}
void ClapTrap::setMax_energy_points(unsigned int i)
{
	Max_energy_points = i;
}
void ClapTrap::setLevel(unsigned int i)
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

unsigned int ClapTrap::getHit_points() const
{
	return (Hit_points);
}
unsigned int ClapTrap::getMax_hit_points() const
{
	return (Max_hit_points);
}
unsigned int ClapTrap::getEnergy_points() const
{
	return (Energy_points);
}
unsigned int ClapTrap::getMax_energy_points() const
{
	return (Max_energy_points);
}
unsigned int ClapTrap::getLevel() const
{
	return (Level);
}
int ClapTrap::getMelee_attack_damage() const
{
	return (Melee_attack_damage);
}
int ClapTrap::getRanged_attack_damage() const
{
	return (Ranged_attack_damage);
}
int ClapTrap::getArmor_damage_reduction() const
{
	return (Armor_damage_reduction);
}
std::string ClapTrap::getName() const
{
	return (Name);
}

ClapTrap::ClapTrap()
{
	std::cout << "Factory new ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
	std::cout << "Factory new ClapTrap" << std::endl;
	setName(n);
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Factory new ClapTrap" << std::endl;
	Hit_points = src.getHit_points();
  	Max_hit_points = src.getHit_points();
	Energy_points = src.getEnergy_points();
	Max_energy_points = src.getMax_energy_points();
	Level = src.getLevel();
	Name = src.getName();
	Melee_attack_damage = src.getMelee_attack_damage();
	Ranged_attack_damage = src.getRanged_attack_damage();
	Armor_damage_reduction = src.getArmor_damage_reduction();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Decommissioning ClapTrap" << std::endl;
}

void	ClapTrap::operator=(const ClapTrap &copied)
{
	std::cout << "Factory new ClapTrap" << std::endl;
	Hit_points = copied.getHit_points();
  	Max_hit_points = copied.getHit_points();
	Energy_points = copied.getEnergy_points();
	Max_energy_points = copied.getMax_energy_points();
	Level = copied.getLevel();
	Name = copied.getName();
	Melee_attack_damage = copied.getMelee_attack_damage();
	Ranged_attack_damage = copied.getRanged_attack_damage();
	Armor_damage_reduction = copied.getArmor_damage_reduction();
}
