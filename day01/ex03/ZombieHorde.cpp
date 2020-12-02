/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/15 18:21:09 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/16 12:33:07 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "ZombieHorde.hpp"

void	ZombieHorde::announce()
{
	int i = 0;

	while(i < this->amount)
	{
		horde[i].announce();
		i++;
	}
}

ZombieHorde::ZombieHorde(int n)
{
	int i;
	horde = new Zombie[n];
	this->amount = n;
	i = 0;
	while(i < n)
	{
		horde[i].namer();
		i++;
	}
}

ZombieHorde::ZombieHorde()
{
	horde = new Zombie;
	this->amount = 1;
	horde->namer();
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
}
