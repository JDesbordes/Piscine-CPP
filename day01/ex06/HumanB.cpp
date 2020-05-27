/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

int		HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
	return (1);
}

int		HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->type << "\n";
	return (1);
}

HumanB::HumanB(std::string str)
{
	name = str;
	//weapon = Weapon();
}

HumanB::HumanB()
{
	name = "John Doe";
	//weapon = Weapon();
}