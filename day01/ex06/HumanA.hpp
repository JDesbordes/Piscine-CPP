/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:40:31 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 14:27:04 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

	public :
	std::string name;
	Weapon &weapon;
	HumanA(std::string str, Weapon& weap);
	int attack();
};

#endif
