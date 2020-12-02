/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by jdesbord          #+#    #+#             */
/*   Updated: 2020/02/15 19:14:53 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

class Zombie
{

  public :

  void announce();
  Zombie(std::string name, std::string type);
  Zombie();
  int get_Zombie();
  int set_Zombie();
  std::string type;
  std::string name;
};

#endif
