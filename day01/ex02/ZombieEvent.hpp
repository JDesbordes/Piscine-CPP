/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:45 by jdesbord          #+#    #+#             */
/*   Updated: 2020/02/15 16:20:49 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieEvent_EVENT_H
# define ZombieEvent_EVENT_H
#include "Zombie.hpp"

class ZombieEvent
{

  public :

  Zombie* newZombie(std::string name);
  ZombieEvent();
  int get_ZombieEvent();
  int setZombieType();

  std::string type;
  Zombie *zombi;
};

#endif
