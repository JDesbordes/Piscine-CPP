/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:49:06 by jacens            #+#    #+#             */
/*   Updated: 2020/02/27 15:27:55 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setValZomb(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

std::string Zombie::getNameZomb()
{
	return this->name;
}

std::string Zombie::getTypeZomb()
{
	return this->type;
}

void Zombie::advert(int i)
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	if (i == 0)
		std::cout << "Braiiiiiiinnnssss ...\n";
	if (i == 1)
		std::cout << "HMMMMmmm ...\n";
	if (i == 2)
		std::cout << "Me want eat... hungry zomb...\n";
}
