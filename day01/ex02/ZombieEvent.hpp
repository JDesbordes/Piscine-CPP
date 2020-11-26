/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:45 by jacens            #+#    #+#             */
/*   Updated: 2020/11/26 12:09:02 by jacens           ###   ########lyon.fr   */
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
