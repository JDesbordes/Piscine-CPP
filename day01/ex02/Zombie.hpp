/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:49:53 by jacens            #+#    #+#             */
/*   Updated: 2020/02/27 15:25:57 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	public:
	void setValZomb(std::string name, std::string type);
	std::string getNameZomb();
	std::string getTypeZomb();
	void advert(int i);

	private: 
		std::string name, type;
};

#endif