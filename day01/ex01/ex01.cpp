/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:12:19 by jdesbord          #+#    #+#             */
/*   Updated: 2020/02/15 14:12:44 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

void	memoryLeak()
{
    std::string* panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete(panthere);
}
