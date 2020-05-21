/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:00:03 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 15:00:04 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	Name = name;
	APCost = apcost;
	Damage = damage;
}

AWeapon::AWeapon(AWeapon const &copied)
{
	Name = copied.getName();
	APCost = copied.getAPCost();
	Damage = copied.getDamage();
}

AWeapon::~AWeapon()
{
	
}

std::string AWeapon::getName() const
{
	return(Name);
}

int AWeapon::getAPCost() const
{
	return APCost;
}

int AWeapon::getDamage() const
{
	return Damage;
}

void AWeapon::setName(std::string name)
{
	Name = name;
}

void AWeapon::setAPCost(int cost)
{
	APCost = cost;
}

void AWeapon::setDamage(int dmg)
{
	Damage = dmg;
}

AWeapon& AWeapon::operator=(const AWeapon &copied)
{
	Name = copied.getName();
	APCost = copied.getAPCost();
	Damage = copied.getDamage();
	return (*this);
}
