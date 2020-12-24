#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
	return ((float)(value / roundf((1 << Fixed::bit))));
}

int Fixed::toInt(void) const
{
	
	return ((int)((value) >> Fixed::bit));
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

Fixed::Fixed(const Fixed &copied)
{
	puts("Copy constructor called");
	value = copied.getRawBits();

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

void Fixed::operator=(const Fixed &copied)
{
	puts("Assignation operator called");
	value = copied.getRawBits();
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
