#include "whatever.hpp"

int main(void) {
	int a = 2;
	int b = 3;
	// double d1(-5.2), d2(5.2);
	// int i1(2), i2(5);
	// char c1("marie"), c2("pacman");
	// const int ci1(2), ci2(-5);
	// const double cd1(-2.5), cd2(-5.6);
	// const char cc1("marie"), cc2("pacman");
	// const char * cp1("marie"), cp2("pacman");

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string d = "chaine2";
	std::string c = "chaine1";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}