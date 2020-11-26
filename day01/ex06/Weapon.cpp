/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:58:52 by jacens            #+#    #+#             */
/*   Updated: 2020/11/26 21:09:08 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

int		Weapon::setType(std::string str)
{
	type = str;
	return (1);
}

std::string	Weapon::getType()
{
	return (type);
}

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::Weapon()
{
	type = "Bare fists";
}
