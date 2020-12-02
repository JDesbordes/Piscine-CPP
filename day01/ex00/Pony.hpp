/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by jdesbord          #+#    #+#             */
/*   Updated: 2020/02/15 14:25:58 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>

void ponyOnTheStack(std::string color, std::string magic);
void ponyOnTheHeap(std::string color, std::string magic);

class Pony
{
  // Attributs

  public :

  Pony(std::string color, std::string magic);
  static int stat;
  // Geteurs
  int get_pony();
  // Seteurs
  int set_pony();



  private :

  std::string color;
  std::string magic;
};

#endif
