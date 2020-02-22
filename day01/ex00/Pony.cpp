/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:51:11 by jacens            #+#    #+#             */
/*   Updated: 2020/02/22 14:43:43 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheStack()
{
	Pony stack;

	stack.setName("stackoverflop");
	stack.setOld("99");
	stack.setSize("2m");
	stack.setColor("green");
	std::cout << "name = " << stack.getName() << '\n';
	std::cout << "old = " << stack.getOld() << '\n';
	std::cout << "size = " << stack.getSize() << '\n';
	std::cout << "color = " << stack.getColor() << '\n';
}

void		ponyOnTheHeap()
{
	Pony *heap = new Pony;

	heap[0].setVal("hyp", "12", "30bras et demi", "yellow");
	std::cout << "name = " << heap[0].getName() << '\n';
	std::cout << "old = " << heap[0].getOld() << '\n';
	std::cout << "size = " << heap[0].getSize() << '\n';
	std::cout << "color = " << heap[0].getColor() << '\n';
	delete heap;
}
