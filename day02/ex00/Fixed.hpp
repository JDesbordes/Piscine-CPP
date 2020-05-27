/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacens <jacens@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:23:35 by jacens            #+#    #+#             */
/*   Updated: 2020/05/27 15:57:45 by jacens           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <fstream>

class Fixed
{
	private :
	int value;
	static const int fract_bits = 8;

	public :
	Fixed();
	Fixed(const Fixed &copied);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	void operator=(const Fixed &copied);
};

#endif
