/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/15 14:26:58 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/16 12:31:19 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieHorde
{

  public :

	int amount;
	Zombie *horde;
	void announce();
	ZombieHorde(int n);
	ZombieHorde();
	~ZombieHorde();
};

#endif
