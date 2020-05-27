/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:12:33 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setName("SUP3R-TP");
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::SuperTrap(std::string name): NinjaTrap(), FragTrap()
{
	std::cout << "IM SUPER ALIVE!!" << std::endl;
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setName(name);
	setMelee_attack_damage(NinjaTrap::getMelee_attack_damage());
}

SuperTrap::~SuperTrap()
{
	std::cout << "I'M SUPER DEAD I'M SUPER DEAD OHMYGOD I'M SUPER DEAD!" << std::endl;
}
