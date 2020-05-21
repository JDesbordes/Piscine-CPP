/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:02:33 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 15:02:34 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copied): AWeapon(copied)
{
	
}

PlasmaRifle::~PlasmaRifle()
{
	
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &copied)
{
	setName(copied.getName());
	setAPCost(copied.getAPCost());
	setDamage(copied.getDamage());
	return (*this);
}