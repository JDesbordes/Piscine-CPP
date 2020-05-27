/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 03:52:47 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


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
	int getHit_points();
	int getMax_hit_points();
	int getEnergy_points();
	int getMax_energy_points();
	int getLevel();
	int getMelee_attack_damage();
	int getRanged_attack_damage();
	int getArmor_damage_reduction();
	std::string getName();

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