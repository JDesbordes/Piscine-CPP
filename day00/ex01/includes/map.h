/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:02:19 by jacens            #+#    #+#             */
/*   Updated: 2020/02/22 12:03:42 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
public:
  	std::string getFirstName() const {
		  return this->first_name;
	}

    void setFirstName(std::string value);

	std::string getLastName() const {
		  return this->last_name;
	}

    void setLastName(std::string value);

	std::string getNickname() const {
		  return this->nickname;
	}

    void setNickname(std::string value);

	std::string getLogin() const {
		  return this->login;
	}

    void setLogin(std::string value);

	std::string getPostAddr() const {
		  return this->postal_address;
	}

    void setPostAddr(std::string value);

	std::string getEmail() const {
		  return this->email_address;
	}

    void setEmail(std::string value);

	std::string getPhone() const {
		  return this->phone_number;
	}

    void setPhone(std::string value);

	std::string getBirthday() const {
		  return this->birthday_date;
	}

    void setBirthday(std::string value);

	std::string getMeal() const {
		  return this->favorite_meal;
	}

    void setMeal(std::string value);

	std::string getColor() const {
		  return this->underwear_color;
	}

    void setColor(std::string value);

	std::string getSecret() const {
		  return this->darkest_secret;
	}
	
    void setSecret(std::string value);

private: 
	std::string first_name, last_name, nickname, login, postal_address,
	email_address, phone_number, birthday_date, favorite_meal,
	underwear_color, darkest_secret;
};

inline void Contact::setFirstName(std::string value)
{
    this->first_name = value;
}

inline void Contact::setLastName(std::string value)
{
    this->last_name = value;
}

inline void Contact::setNickname(std::string value)
{
    this->nickname = value;
}

inline void Contact::setLogin(std::string value)
{
    this->login = value;
}

inline void Contact::setPostAddr(std::string value)
{
    this->postal_address = value;
}

inline void Contact::setEmail(std::string value)
{
    this->email_address = value;
}

inline void Contact::setPhone(std::string value)
{
    this->phone_number = value;
}

inline void Contact::setBirthday(std::string value)
{
    this->birthday_date = value;
}

inline void Contact::setMeal(std::string value)
{
    this->favorite_meal = value;
}

inline void Contact::setColor(std::string value)
{
    this->underwear_color = value;
}

inline void Contact::setSecret(std::string value)
{
    this->darkest_secret = value;
}

#endif