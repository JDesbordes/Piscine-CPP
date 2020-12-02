/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/16 14:29:10 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/16 15:12:49 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

int main(void)
{
	std::string hello = "HI THIS IS BRAIN";
	std::string *spoint = &hello;
	std::string& sref = hello;
	std::cout << *spoint << std::endl << sref << std::endl;
	return (0);
}
