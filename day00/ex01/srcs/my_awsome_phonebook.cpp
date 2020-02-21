/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awsome_phonebook.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:46:35 by jacens            #+#    #+#             */
/*   Updated: 2020/02/21 02:01:47 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static Contact	add_contact(void)
{
	Contact	contact;
	std::string	mystr;
	
	// Nom
	std::cout << "First Name:" << '\n';
	getline (std::cin, mystr);
	contact.setFirstName(mystr);

	// Prenom
	std::cout << "Last Name:" << '\n';
	getline (std::cin, mystr);
	contact.setLastName(mystr);

	// Pseudo
	std::cout << "Nickname:" << '\n';
	getline (std::cin, mystr);
	contact.setNickname(mystr);

	// Login
	std::cout << "Login:" << '\n';
	getline (std::cin, mystr);
	contact.setLogin(mystr);

	// Code Postal
	std::cout << "Postal adress:" << '\n';
	getline (std::cin, mystr);
	contact.setPostAddr(mystr);

	// Email
	std::cout << "Email adress:" << '\n';
	getline (std::cin, mystr);
	contact.setEmail(mystr);

	// Telephone
	std::cout << "Phone number:" << '\n';
	getline (std::cin, mystr);
	contact.setPhone(mystr);

	// Date
	std::cout << "Birthday date" << '\n';
	getline (std::cin, mystr);
	contact.setBirthday(mystr);

	// Repas
	std::cout << "Favorite meal" << '\n';
	getline (std::cin, mystr);
	contact.setMeal(mystr);

	// Couleur
	std::cout << "Underwear color:" << '\n';
	getline (std::cin, mystr);
	contact.setColor(mystr);
	    	 	 		 	 		 	 	 	    
	// Secret
	std::cout << "Darkest secret:" << '\n';
	getline (std::cin, mystr);
	contact.setSecret(mystr);
	return (contact);
}

static void	print_str(int len, std::string mystr)
{
	int		sp = 11;

	while (len < --sp)
		std::cout << " ";
	if (len > 10)
	{
		for (std::string::size_type i=0; i<9; ++i)
    		std::cout << mystr[i];
		std::cout << ".";
	}
	else
		std::cout << mystr;
}

static void	search_contact(Contact *contacts, int i)
{
	int			j = -1;
	int			len = 0;
	std::string	mystr;
	Contact		contact;

	std::cout << "_____________________________________________\n" ;
	std::cout << "|     index" << "|" << "    Prénom" << "|" << "       Nom" << "|" << "    pseudo" << "|\n" ;
	std::cout << "=============================================\n" ;
	while (++j <= i)
	{
		contact = contacts[j];
		std::cout << "|         " << j + 1;
		std::cout << "|";
		mystr = contact.getFirstName();
		len = mystr.length();
		print_str(len, mystr);
		std::cout << "|";
		mystr = contact.getLastName();
		len = mystr.length();
		print_str(len, mystr);
		std::cout << "|";
		mystr = contact.getNickname();
		len = mystr.length();
		print_str(len, mystr);
		std::cout << "|\n";
	}
	if (j == 0)
		std::cout << "|          " << "|" << "          " << "|" << "          " << "|" << "          " << "|\n" ;
	std::cout << "_____________________________________________\n" ;
}

int			main(void)
{
	std::string	mystr;
	std::locale	loc;
	Contact		contacts[8];
	int			i = -1;

	while (1)
	{
		std::cout << "Waiting your request sir: (Add // Search // Exit)" << '\n' << "Minishell->";
		getline (std::cin, mystr);
		for (std::string::size_type i=0; i<mystr.length(); ++i)
    		mystr[i] = std::toupper(mystr[i],loc);
		if (mystr.compare("ADD") == 0)
		{
			if (i >= 7)
				std::cout << "To more contact for this old badly phone..." << '\n';
			else
				contacts[++i] = add_contact();
		}
		else if (mystr.compare("SEARCH") == 0)
			search_contact(contacts, i);
		else if (mystr.compare("EXIT") == 0)
			return (1);
	}
	return (1);
}