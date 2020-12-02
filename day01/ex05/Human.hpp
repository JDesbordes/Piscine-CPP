/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:14:06 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 12:49:14 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human
{

	public :
	std::string identify();
	const Brain brain;
	Human();
	const Brain& getBrain() const;
};

#endif