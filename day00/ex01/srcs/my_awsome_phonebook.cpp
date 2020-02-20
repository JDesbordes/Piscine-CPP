/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awsome_phonebook.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:46:35 by jacens            #+#    #+#             */
/*   Updated: 2020/02/20 18:04:44 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static Contact	add_contact(void)
{
	Contact	contact;
	string	mystr;
	
	// Nom
	cout << "First Name:" << '\n';
	getline (cin, mystr);
	contact.setFirstName(mystr);
	// Prenom
	cout << "Last Name:" << '\n';
	getline (cin, mystr);
	contact.setLastName(mystr);
	// Pseudo
	cout << "Nickname:" << '\n';
	getline (cin, mystr);
	contact.setNickname(mystr);
	// Login
	cout << "Login:" << '\n';
	getline (cin, mystr);
	contact.setLogin(mystr);
	// Code Postal
	cout << "Postal adress:" << '\n';
	getline (cin, mystr);
	contact.setPostAddr(mystr);
	// Email
	cout << "Email adress:" << '\n';
	getline (cin, mystr);
	contact.setEmail(mystr);
	// Telephone
	cout << "Phone number:" << '\n';
	getline (cin, mystr);
	contact.setPhone(mystr);
	// Date
	cout << "Birthday date" << '\n';
	getline (cin, mystr);
	contact.setBirthday(mystr);
	// Repas
	cout << "Favorite meal" << '\n';
	getline (cin, mystr);
	contact.setMeal(mystr);
	// Couleur
	cout << "Underwear color:" << '\n';
	getline (cin, mystr);
	contact.setColor(mystr);
	// Secret
	cout << "Darkest secret:" << '\n';
	getline (cin, mystr);
	contact.setSecret(mystr);
	return (contact);
}

static void	search_contact(void)
{
	cout << "SEARCH" << '\n';
}

int			main(void)
{
	string	mystr;
	Contact	*contact;
	int		i = -1;

	while (1)
	{
		getline (cin, mystr);
		if (mystr.compare("ADD") == 0)
		{
			if (i >= 7)
				cout << "To more contact for this old badly phone..." << '\n';
			else
				contact[++i] = add_contact();
		}
		else if (mystr.compare("SEARCH") == 0)
			search_contact();
		else if (mystr.compare("EXIT") == 0)
			return (1);
	}
	return (1);
}