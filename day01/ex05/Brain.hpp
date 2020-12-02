/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/16 15:14:09 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/16 18:02:09 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <sstream>

class Brain
{
  public :
	const void *id;
	std::string identify() const;
	Brain();
};

#endif