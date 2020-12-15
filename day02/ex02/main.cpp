#include "Fixed.hpp"

int main(void)
{
	Fixed a(4);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;
	c = a;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << b / a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( (const Fixed)a, (const Fixed)b ) << std::endl;
	std::cout << Fixed::min( (const Fixed)a, (const Fixed)b ) << std::endl;
	return 0;
}