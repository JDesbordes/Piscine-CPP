#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class ScavTrap
{

  public :
  	ScavTrap();
  	ScavTrap(std::string name);
  	ScavTrap(const ScavTrap &src);
	virtual ~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengNewcomer(std::string const & target);
	unsigned int get_Hit_points() const;
  	unsigned int get_Max_hit_points() const;
	unsigned int get_Energy_points() const;
	unsigned int get_Max_energy_points() const;
	unsigned int get_Level() const;
	std::string get_Name() const;
	int get_Melee_attack_damage() const;
	int get_Ranged_attack_damage() const;
	int get_Armor_damage_reduction() const;
	void operator=( ScavTrap const & rhs );

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
