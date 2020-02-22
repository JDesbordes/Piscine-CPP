/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:51:36 by jacens            #+#    #+#             */
/*   Updated: 2020/02/22 11:56:53 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

class Pony
{
public:
	std::string gettName() const {
		  return this->name;
	}

    void settName(std::string value);

	std::string getOld() const {
		  return this->years_old;
	}
    void setOld(std::string value);

	std::string getColor() const {
		  return this->color;
	}
    void setOld(std::string value);

	std::string getFirstName() const {
		  return this->first_name;
	}
    void setFirstName(std::string value);

private: 
	std::string name, years_old, color, size;
};
#endif