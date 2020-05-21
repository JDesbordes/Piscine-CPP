/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:06:21 by jacens            #+#    #+#             */
/*   Updated: 2020/02/27 15:26:33 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string ft_alea_name(int i)
{
	if (i == 0)
		return ("Albert");
	if (i == 1)
		return ("Sacha");
	if (i == 2)
		return ("Jérémy");
	if (i == 3)
		return ("Léon");
	if (i == 4)
		return ("Mathias");
	if (i == 5)
		return ("Mona");
	if (i == 6)
		return ("Malia");
	if (i == 7)
		return ("Loéline");
	if (i == 8)
		return ("Julie");
	return ("Léana");
}

std::string ft_alea_tpe(int i)
{
	if (i == 0)
		return ("violent");
	if (i == 1)
		return ("agressif");
	if (i == 2)
		return ("passif");
	if (i == 3)
		return ("joueur");
	if (i == 4)
		return ("rapide");
	return ("lent");
}

int main()
{
	Zombie	first;
	
	first.setValZomb("Timmy", "mourant");
	first.advert(0);
	return (0);
}