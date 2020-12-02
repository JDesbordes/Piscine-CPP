/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 14:27:27 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

int		HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << "\n";
	return (1);
}

HumanA::HumanA(std::string str, Weapon& weap) : weapon(weap)
{
	name = str;
	weapon = weap;
}

