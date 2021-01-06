#include "whatever.hpp"

int main(void) {
	int a = 2;
	int b = 3;
	double d1(-5.2), d2(5.2);
	const int ci1(2), ci2(-5);
	const double cd1(-2.5), cd2(-5.6);
	const std::string cc1("chaine2"), cc2("chaine1");
	std::string d("chaine2"), c("chaine1");

	std::cout << "--- INT ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::cout << "--- STRING ---" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << "--- DOUBLE ---" << std::endl;
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
	::swap(d1, d2);
	std::cout << "after swap d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl << std::endl;

	std::cout << "--- CONST DOUBLE ---" << std::endl;
	std::cout << "cd1 = " << cd1 << ", cd2 = " << cd2 << std::endl;
	::swap(cd1, cd2);
	std::cout << "cd1 = " << cd1 << ", cd2 = " << cd2 << std::endl;
	std::cout << "min( cd1, cd2 ) = " << ::min( cd1, cd2 ) << std::endl;
	std::cout << "max( cd1, cd2 ) = " << ::max( cd1, cd2 ) << std::endl << std::endl;

	std::cout << "--- CONST STRING ---" << std::endl;
	std::cout << "cc1 = " << cc1 << ", cc2 = " << cc2 << std::endl;
	::swap(cc1, cc2);
	std::cout << "after swap cc1 = " << cc1 << ", cc2 = " << cc2 << std::endl;
	std::cout << "min( cc1, cc2 ) = " << ::min( cc1, cc2 ) << std::endl;
	std::cout << "max( cc1, cc2 ) = " << ::max( cc1, cc2 ) << std::endl << std::endl;

	std::cout << "--- CONST INT ---" << std::endl;
	std::cout << "ci1 = " << ci1 << ", ci2 = " << ci2 << std::endl;
	::swap(ci1, ci2);
	std::cout << "after swap ci1 = " << ci1 << ", ci2 = " << ci2 << std::endl;
	std::cout << "min( ci1, ci2 ) = " << ::min( ci1, ci2 ) << std::endl;
	std::cout << "max( ci1, ci2 ) = " << ::max( ci1, ci2 ) << std::endl;
	
	return 0;
}