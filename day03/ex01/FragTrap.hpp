#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstring>
# include <ctime>
# include <bitset>
# include <cmath>

class FragTrap
{

  public :
  	FragTrap();
  	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	int get_Hit_points() const;
  	int get_Max_hit_points() const;
	int get_Energy_points() const;
	int get_Max_energy_points() const;
	int get_Level() const;
	std::string get_Name() const;
	int get_Melee_attack_damage() const;
	int get_Ranged_attack_damage() const;
	int get_Armor_damage_reduction() const;
	void operator=( FragTrap const & rhs );

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
