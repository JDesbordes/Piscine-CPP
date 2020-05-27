/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:27:14 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	int i;
	std::srand(std::time(nullptr));
	std::cout << "How many Z's do you want ?\n";
	std::cin >> i;
	ZombieHorde* hey;
	hey = new ZombieHorde(i);
	hey->announce();
	delete(hey);
  	return (0);
}
