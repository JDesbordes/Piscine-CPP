/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/08 08:49:12 by nepage-l     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/13 21:32:49 by nepage-l    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
	return ((float)(value / roundf((1 << Fixed::bit))));
}

int Fixed::toInt(void) const
{
	return (value >> Fixed::bit);
}

int  Fixed::getRawBits() const
{
	return (value);
}

void  Fixed::setRawBits(int const raw)
{
  	value = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::bit;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << Fixed::bit));
}

Fixed::Fixed(const Fixed &o)
{
	puts("Copy constructor called");
	value = o.getRawBits();
};

Fixed::Fixed()
{
	puts("Default constructor called");
	value = 0;
};

Fixed::~Fixed()
{
	puts("Destructor called");
};

bool Fixed::operator<(const Fixed& b)
{
	return(toFloat() < b.toFloat());
}

bool Fixed::operator>(const Fixed& b)
{
	return(toFloat() > b.toFloat());
}

bool Fixed::operator>=(const Fixed& b)
{
	return(toFloat() >= b.toFloat());
}

bool Fixed::operator<=(const Fixed& b)
{
	return(toFloat() <= b.toFloat());
}

bool Fixed::operator==(const Fixed& b)
{
	return(toFloat() == b.toFloat());
}

bool Fixed::operator!=(const Fixed& b)
{
	return(toFloat() != b.toFloat());
}

void Fixed::operator=(const Fixed &copied)
{
	puts("Assignation operator called");
	value = copied.getRawBits();
}

Fixed Fixed::operator*(const Fixed& b)
{
	return (Fixed(toFloat() * b.toFloat()));
}

Fixed Fixed::operator+(const Fixed& b)
{
	return (Fixed(toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(const Fixed& b)
{
	return (Fixed(toFloat() - b.toFloat()));
}

Fixed Fixed::operator/(const Fixed& b)
{
	return (Fixed(toFloat() / b.toFloat()));
}

Fixed Fixed::operator++()
{
	value += 1;
	return *this;
}

Fixed Fixed::operator--()
{
	value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	value += 1;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	value += 1;
	return temp;
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	return(a.toFloat() > b.toFloat() ? a : b);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	return(a.toFloat() < b.toFloat() ? a : b);
}

Fixed max(Fixed& a, Fixed& b)
{
	return(a.toFloat() > b.toFloat() ? a : b);
}

Fixed min(Fixed& a, Fixed& b)
{
	return(a.toFloat() < b.toFloat() ? a : b);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
