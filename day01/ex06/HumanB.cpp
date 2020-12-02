/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 14:15:09 by jdesbord         ###   ########lyon.fr   */
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