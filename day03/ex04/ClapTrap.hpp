#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include <cmath>

class ClapTrap
{

  public :
  	ClapTrap();
	ClapTrap(const ClapTrap &src);
	~ClapTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//setters
	void setHit_points(int i);
	void setMax_hit_points(int i);
	void setEnergy_points(int i);
	void setMax_energy_points(int i);
	void setLevel(int i);
	void setMelee_attack_damage(int i);
	void setRanged_attack_damage(int i);
	void setArmor_damage_reduction(int i);
	void setName(std::string name);
	//get
	int getHit_points() const;
	int getMax_hit_points() const;
	int getEnergy_points() const;
	int getMax_energy_points() const;
	int getLevel() const;
	int getMelee_attack_damage() const;
	int getRanged_attack_damage() const;
	int getArmor_damage_reduction() const;
	std::string getName() const;
	void operator=( ClapTrap const & rhs );

  private :
  	int Hit_points;
  	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	std::string Name;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
};

#endif