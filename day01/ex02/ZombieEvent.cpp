/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:52 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <unistd.h>

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zombi;

    zombi = new Zombie(name, type);
    return (zombi);
}

int     ZombieEvent::setZombieType()
{
    std::string type;
	puts("\nNew type of zombie :");
  	std::cin >> type;
    this->type = type;
  	return (1);
}

ZombieEvent::ZombieEvent()
{
    std::string name;

    puts("\nNew name of zombie :");
    std::cin >> name;
    setZombieType();
    zombi = newZombie(name);
    zombi->announce();
};
