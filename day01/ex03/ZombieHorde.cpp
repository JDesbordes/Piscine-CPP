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
