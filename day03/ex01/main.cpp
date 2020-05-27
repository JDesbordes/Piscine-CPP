/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:47:38 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap a("CL4P-TP");
	ScavTrap b("SC4V-TP");
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
  	return (0);
}
