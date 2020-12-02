/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/15 14:27:14 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/16 14:22:03 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
