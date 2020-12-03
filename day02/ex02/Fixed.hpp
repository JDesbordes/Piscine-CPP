#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include <cmath>

class Fixed
{

  public :
  	Fixed ();
  	Fixed(const int width);
  	Fixed(const float width);
	Fixed(const Fixed &copied);
	~Fixed();
	void operator=(const Fixed &copied);
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	bool operator<(const Fixed& b);
	bool operator>(const Fixed& b);
	bool operator>=(const Fixed& b);
	bool operator<=(const Fixed& b);
	bool operator==(const Fixed& b);
	bool operator!=(const Fixed& b);
	Fixed operator*(const Fixed& b);
	Fixed operator+(const Fixed& b);
	Fixed operator-(const Fixed& b);
	Fixed operator/(const Fixed& b);

	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed min(const Fixed& a, const Fixed& b);

	float toFloat(void) const;
	int toInt(void) const;

  	int getRawBits() const;
  	void setRawBits(int const raw);

  private :
	static const int bit = 8;
	int value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

Fixed max(Fixed& a, Fixed& b);
Fixed min(Fixed& a, Fixed& b);

#endif
