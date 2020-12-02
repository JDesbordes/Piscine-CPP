/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesbord <jdesbord@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:19:32 by jdesbord          #+#    #+#             */
/*   Updated: 2020/12/02 12:49:21 by jdesbord         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

std::string Human::identify()
{
	return(brain.identify());
}

const Brain& Human::getBrain() const
{
	return(this->brain);
}

Human::Human()
{
	
}