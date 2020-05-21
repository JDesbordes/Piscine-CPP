/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:50:05 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 14:50:55 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class Victim
{
	private :
	std::string Name;

	protected :
	Victim();

	public :
	Victim(std::string name);
	~Victim();
	virtual void getPolymorphed() const;
	void setName(std::string name);
	std::string getName() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif