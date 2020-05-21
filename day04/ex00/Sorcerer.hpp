/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:50:17 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 14:50:50 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>
# include "Victim.hpp"

class Sorcerer
{
	private :
	std::string Name;
	std::string Title;

	protected:
	Sorcerer();
	Sorcerer(const Sorcerer &copied);

	public :
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	void polymorph(Victim const &a) const;
	void setName(std::string name);
	void setTitle(std::string title);
	void operator=(const Sorcerer &copied);
	std::string getName() const;
	std::string getTitle() const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
