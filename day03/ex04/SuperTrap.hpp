/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 05:07:13 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{

  public :
  	SuperTrap();
  	SuperTrap(std::string name);
	~SuperTrap();
};

#endif
