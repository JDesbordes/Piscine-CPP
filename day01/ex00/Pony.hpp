/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:51:36 by jacens            #+#    #+#             */
/*   Updated: 2020/02/22 17:26:07 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

void		ponyOnTheStack();
void		ponyOnTheHeap();

class Pony
{
	public:
		Pony();
		~Pony();

		void setVal(std::string name, std::string old, std::string color, std::string size);

		std::string getName() const {
			return this->name;
		}

		void setName(std::string value);

		std::string getOld() const {
			return this->years_old;
		}
		void setOld(std::string value);

		std::string getColor() const {
			return this->color;
		}
		void setColor(std::string value);

		std::string getSize() const {
			return this->size;
		}
		void setSize(std::string value);

	private: 
		std::string name, years_old, color, size;
};

inline void Pony::setVal(std::string name, std::string old, std::string size, std::string color)
{
    name.empty() ? 0 : this->name = name;
    old.empty() ? 0 : this->years_old = old;
    color.empty() ? 0 : this->color = color;
    size.empty() ? 0 : this->size = size;
}

inline void Pony::setName(std::string value)
{
    this->name = value;
}

inline void Pony::setOld(std::string value)
{
    this->years_old = value;
}

inline void Pony::setColor(std::string value)
{
    this->color = value;
}

inline void Pony::setSize(std::string value)
{
    this->size = value;
}

inline Pony::Pony()
{
	std::cout << "pony created" << std::endl;
}

inline Pony::~Pony()
{
	std::cout << "pony destroyed" << std::endl;
}

#endif