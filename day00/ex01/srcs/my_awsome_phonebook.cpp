/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awsome_phonebook.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:46:35 by jacens            #+#    #+#             */
/*   Updated: 2020/02/21 03:20:58 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static Contact	add_contact(void)
{
	Contact	contact;
	std::string	mystr;
	
	// Nom
	std::cout << "\n\033[1;32m   ---   ADD CONTACT   ---\033[0m\n\n";
	std::cout << "\033[0;32mFirst Name\033[0m:       ";
	getline (std::cin, mystr);
	contact.setFirstName(mystr);

	// Prenom
	std::cout << "\033[0;32mLast Name\033[0m:        ";
	getline (std::cin, mystr);
	contact.setLastName(mystr);

	// Pseudo
	std::cout << "\033[0;32mNickname\033[0m:         ";
	getline (std::cin, mystr);
	contact.setNickname(mystr);

	// Login
	std::cout << "\033[0;32mLogin\033[0m:            ";
	getline (std::cin, mystr);
	contact.setLogin(mystr);

	// Code Postal
	std::cout << "\033[0;32mPostal adress\033[0m:    ";
	getline (std::cin, mystr);
	contact.setPostAddr(mystr);

	// Email
	std::cout << "\033[0;32mEmail adress\033[0m:     ";
	getline (std::cin, mystr);
	contact.setEmail(mystr);

	// Telephone
	std::cout << "\033[0;32mPhone number\033[0m:     ";
	getline (std::cin, mystr);
	contact.setPhone(mystr);

	// Date
	std::cout << "\033[0;32mBirthday date\033[0m:    ";
	getline (std::cin, mystr);
	contact.setBirthday(mystr);

	// Repas
	std::cout << "\033[0;32mFavorite meal\033[0m:    ";
	getline (std::cin, mystr);
	contact.setMeal(mystr);

	// Couleur
	std::cout << "\033[0;32mUnderwear color\033[0m:  ";
	getline (std::cin, mystr);
	contact.setColor(mystr);
	    	 	 		 	 		 	 	 	    
	// Secret
	std::cout << "\033[0;32mDarkest secret\033[0m:   ";
	getline (std::cin, mystr);
	contact.setSecret(mystr);
	std::cout << '\n';
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

	std::cout << "\n\033[1;33m   ---   SEARCH   ---\033[0m\n\n";
	std::cout << "_____________________________________________\n" ;
	std::cout << "|     \033[0;36mindex\033[0m" << "|" << "    \033[0;36mPrénom\033[0m" << "|" << "       \033[0;36mNom\033[0m" << "|" << "    \033[0;36mpseudo\033[0m" << "|\n" ;
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
		std::cout << "|          " << "|" << "          " << "|" << "          " << "|" << "          " << "|\n_____________________________________________\n" ;
	else
	{
		std::cout << "_____________________________________________\n\n" ;
		std::cout << "\033[1;34mSelect an index ? \033[0m:" << "\n\033[0;35mNumber : \033[0m";
		std::cin >> j;
		if (std::cin.fail())
		{
			std::cin.clear();
      		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\n\033[0;31mYour select is not an int.\033[0m\n";
		}
		else if (j - 1 > i)
			std::cout << "\n\033[0;31mIndex " << j << " not exist.\033[0m\n\n";
		else
		{
			contact = contacts[j - 1];
			std::cout << "\n\033[0;32mOK for selecting \033[0m" << j << "\n\n";
			mystr = contact.getFirstName();
			std::cout << "\033[0;36mFirst Name \033[0m:      " << mystr << "\n";
			mystr = contact.getLastName();
			std::cout << "\033[0;36mLast Name \033[0m:       " << mystr << "\n";
			mystr = contact.getNickname();
			std::cout << "\033[0;36mNickname \033[0m:        " << mystr << "\n";
			mystr = contact.getLogin();
			std::cout << "\033[0;36mLogin \033[0m:           " << mystr << "\n";
			mystr = contact.getPostAddr();
			std::cout << "\033[0;36mPostal adress \033[0m:   " << mystr << "\n";
			mystr = contact.getEmail();
			std::cout << "\033[0;36mEmail \033[0m:           " << mystr << "\n";
			mystr = contact.getPhone();
			std::cout << "\033[0;36mPhone number \033[0m:    " << mystr << "\n";
			mystr = contact.getBirthday();
			std::cout << "\033[0;36mBirthday date \033[0m:   " << mystr << "\n";
			mystr = contact.getMeal();
			std::cout << "\033[0;36mFavorite meal \033[0m:   " << mystr << "\n";
			mystr = contact.getColor();
			std::cout << "\033[0;36mUnderwear color \033[0m: " << mystr << "\n";
			mystr = contact.getSecret();
			std::cout << "\033[0;36mDarkest secret \033[0m:  " << mystr << "\n";
		}	
	}
}

int			main(void)
{
	std::string	mystr;
	std::locale	loc;
	Contact		contacts[8];
	int			i = -1;

	while (1)
	{
		std::cout << "\033[1;34mWaiting your request sir:\033[0m (\033[1;32mAdd\033[0m // \033[1;33mSearch\033[0m // \033[1;31mExit\033[0m)" << '\n' << "\033[1;35mMinishell\033[0m-> ";
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
		{
			std::cout << "\n\033[1;31m   ---   EXIT   ---\033[0m\n\n";
			return (1);
		}
		std::cout << "\n";
	}
	return (1);
}