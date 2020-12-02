/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:52 by jdesbord          #+#    #+#             */
/*   Updated: 2020/02/15 16:19:49 by jdesbord         ###   ########lyon.fr   */
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
