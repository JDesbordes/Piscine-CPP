/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:24:52 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 11:43:43 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


int main()
{
	std::string cmd;
	std::string color;
	std::string magic;
  	puts("Welcome to Fairy World");
  	while (1)
  	{
  	  puts("Create a poney !");
  	  puts("Choose 'stack' or 'heap' or 'exit' : ");
  	  std::cin >> cmd;
  	  if (!cmd.compare("stack"))
  	  {
			puts("Choose color :");
			std::cin >> color;
			puts("Choose magic kawaii <3 :");
  			std::cin >> magic;
			ponyOnTheStack(color, magic);
  	  }
  	  else if (!cmd.compare("heap"))
  	  {
			puts("Choose color :");
			std::cin >> color;
			puts("Choose magic kawaii <3 :");
  			std::cin >> magic;
			ponyOnTheHeap(color, magic);
  	  }
  	 else if (!cmd.compare("exit"))
  	    exit(EXIT_SUCCESS);
  	 else
  	    puts("Command error");
  	}
  	return (0);
}
