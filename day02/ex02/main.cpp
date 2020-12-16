#include "Fixed.hpp"

int main(void)
{
	Fixed a(4);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;
	c = a;
	puts("---Test---");
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     ++a       : " << ++a << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     a++       : " << a++ << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "      b        : " << b << std::endl;
	std::cout << "     a>b       : " << (a > b) << std::endl;
	std::cout << "     a<b       : " << (a < b) << std::endl;
	std::cout << "     a>=b      : " << (a >= b) << std::endl;
	std::cout << "     a<=b      : " << (a <= b) << std::endl;
	std::cout << "     a==b      : " << (a == b) << std::endl;
	std::cout << "     a!=b      : " << (a != b) << std::endl;
	std::cout << "     a-b       : " << a - b << std::endl;
	std::cout << "     a+b       : " << a + b << std::endl;
	std::cout << "     a*b       : " << a * b << std::endl;
	std::cout << "     b/a       : " << b / a << std::endl;
	std::cout << "     a++       : " << a++ << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     ++a       : " << ++a << std::endl;
	std::cout << "     a--       : " << a-- << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     --a       : " << --a << std::endl;
	std::cout << "   max(a,b)    : " << Fixed::max( a, b ) << std::endl;
	std::cout << "   min(a,b)    : " << Fixed::min( a, b ) << std::endl;
	std::cout << "max((F)a,(F)b) : " << Fixed::max( (const Fixed)a, (const Fixed)b ) << std::endl;
	std::cout << "min((F)a,(F)b) : " << Fixed::min( (const Fixed)a, (const Fixed)b ) << std::endl;
	return 0;
}