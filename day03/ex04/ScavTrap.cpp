/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:47:54 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

void ScavTrap::challengNewcomer(std::string const & target)
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
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(50);
	setMax_energy_points(50);
	setLevel(1);
	setName("SC4V-TP");
	setMelee_attack_damage(20);
	setRanged_attack_damage(15);
	setArmor_damage_reduction(3);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TRAP Online" << std::endl;
	setHit_points(100);
  	setMax_hit_points(100);
	setEnergy_points(50);
	setMax_energy_points(50);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(20);
	setRanged_attack_damage(15);
	setArmor_damage_reduction(3);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Connection lost :(" << std::endl;
}
