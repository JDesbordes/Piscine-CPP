/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:03:06 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 15:03:07 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copied) : Enemy(copied)
{
	std::cout << "* click click click *" << std::endl;
}

void	RadScorpion::takeDamage(int i)
{
	Enemy::takeDamage(i > 3 ? i - 3 : 0);
}

RadScorpion& RadScorpion::operator=(const RadScorpion &copied)
{
	setHP(copied.getHP());
	setType(copied.getType());
	return (*this);
}
