/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:02:19 by jacens            #+#    #+#             */
/*   Updated: 2020/02/20 17:03:24 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <iostream>
# include <string>
using namespace std;

class Contact
{
public:
  	string getFirstName() const {
		  return this->first_name;
	}

    void setFirstName(string value);

	string getLastName() const {
		  return this->last_name;
	}

    void setLastName(string value);

	string getNickname() const {
		  return this->nickname;
	}

    void setNickname(string value);

	string getLogin() const {
		  return this->login;
	}

    void setLogin(string value);

	string getPostAddr() const {
		  return this->postal_address;
	}

    void setPostAddr(string value);

	string getEmail() const {
		  return this->email_address;
	}

    void setEmail(string value);

	string getPhone() const {
		  return this->phone_number;
	}

    void setPhone(string value);

	string getBirthday() const {
		  return this->birthday_date;
	}

    void setBirthday(string value);

	string getMeal() const {
		  return this->favorite_meal;
	}

    void setMeal(string value);

	string getColor() const {
		  return this->underwear_color;
	}

    void setColor(string value);

	string getSecret() const {
		  return this->darkest_secret;
	}
	
    void setSecret(string value);

private: 
	string first_name, last_name, nickname, login, postal_address,
	email_address, phone_number, birthday_date, favorite_meal,
	underwear_color, darkest_secret;
};

inline void Contact::setFirstName(string value)
{
    this->first_name = value;
}

inline void Contact::setLastName(string value)
{
    this->last_name = value;
}

inline void Contact::setNickname(string value)
{
    this->nickname = value;
}

inline void Contact::setLogin(string value)
{
    this->login = value;
}

inline void Contact::setPostAddr(string value)
{
    this->postal_address = value;
}

inline void Contact::setEmail(string value)
{
    this->email_address = value;
}

inline void Contact::setPhone(string value)
{
    this->phone_number = value;
}

inline void Contact::setBirthday(string value)
{
    this->birthday_date = value;
}

inline void Contact::setMeal(string value)
{
    this->favorite_meal = value;
}

inline void Contact::setColor(string value)
{
    this->underwear_color = value;
}

inline void Contact::setSecret(string value)
{
    this->darkest_secret = value;
}

#endif