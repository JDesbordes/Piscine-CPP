/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:14:09 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 14:28:14 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

	public :
	std::string name;
	Weapon *weapon;
	HumanB(std::string str);
	HumanB();
	int		setWeapon(Weapon& weap);
	int		attack();
};

#endif
