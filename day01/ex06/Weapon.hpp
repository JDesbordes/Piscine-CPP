/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:42:02 by jdesbord          #+#    #+#             */
/*   Updated: 2020/11/26 21:16:47 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <sstream>

class Weapon
{

	public :
	std::string type;
	Weapon();
	Weapon(std::string str);
	int	setType(std::string str);
	std::string	getType();
};

#endif
