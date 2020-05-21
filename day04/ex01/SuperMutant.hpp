/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:03:27 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 15:03:28 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	std::string Type;
	int			HP;

	public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &copied);
	SuperMutant& operator=(const SuperMutant &copied);
	virtual void takeDamage(int);
};

#endif
