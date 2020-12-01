/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:46:45 by jdesbord          #+#    #+#             */
/*   Updated: 2020/11/30 09:33:11 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int target) const = 0;
	virtual int push(ISpaceMarine* newbie) = 0;
};
#endif