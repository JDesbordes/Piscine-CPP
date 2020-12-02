/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdesbord <jdesbord@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/16 15:15:13 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/18 10:04:09 by jdesbord    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::ostringstream ss;
	ss << id;
	return(ss.str());
}

Brain::Brain()
{
	id = (const void *)this;
}