#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class ClapTrap
{

  public :
  	ClapTrap();
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap &src);
	virtual ~ClapTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//setters
	void setHit_points(unsigned int i);
	void setMax_hit_points(unsigned int i);
	virtual void setEnergy_points(unsigned int i);
	virtual void setMax_energy_points(unsigned int i);
	void setLevel(unsigned int i);
	virtual void setMelee_attack_damage(int i);
	void setRanged_attack_damage(int i);
	void setArmor_damage_reduction(int i);
	void setName(std::string name);
	//get
	unsigned int getHit_points() const;
	unsigned int getMax_hit_points() const;
	virtual unsigned int getEnergy_points() const;
	virtual unsigned int getMax_energy_points() const;
	unsigned int getLevel() const;
	virtual int getMelee_attack_damage() const;
	int getRanged_attack_damage() const;
	int getArmor_damage_reduction() const;
	std::string getName() const;
	void operator=( ClapTrap const & rhs );

  private :
  	unsigned int Hit_points;
  	unsigned int Max_hit_points;
	unsigned int Energy_points;
	unsigned int Max_energy_points;
	unsigned int Level;
	std::string Name;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
};

#endif