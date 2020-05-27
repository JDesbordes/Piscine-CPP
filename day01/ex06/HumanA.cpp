/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

int		HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon->type << "\n";
	return (1);
}

HumanA::HumanA(std::string str, Weapon& weap)
{
	name = str;
	weapon = &weap;
}

HumanA::HumanA()
{
	name = "John Doe";
	weapon = new Weapon();
}
