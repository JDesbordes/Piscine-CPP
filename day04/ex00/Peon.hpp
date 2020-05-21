/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:49:52 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 14:50:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: virtual public Victim
{
	private :
	std::string Name;

	protected :
	Peon();

	public :
	Peon(std::string name);
	~Peon();
	void getPolymorphed() const;
};

#endif
