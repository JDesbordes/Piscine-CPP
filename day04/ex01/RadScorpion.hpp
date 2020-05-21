/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:03:12 by jacens            #+#    #+#             */
/*   Updated: 2020/03/06 15:03:13 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	std::string Type;
	int			HP;

	public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &copied);
	RadScorpion& operator=(const RadScorpion &copied);
	virtual void takeDamage(int);
};

#endif
