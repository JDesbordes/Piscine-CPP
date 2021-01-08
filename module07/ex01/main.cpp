#include "iter.hpp"

class Awesome
{

	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

	private:
	int _n;
};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

void print2(int &val)
{
	std::cout << val << std::endl;
}

void plusten(int &val)
{
	val += 10;
}

int main(void)
{
	int ble[] = {1,2,3};
	int const ble2[] = {1,2,3};
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter(tab, 5, print); //not const with const
	iter(tab2, 5, print); //not const with const

	iter(ble, 3, plusten); //not const with not const
	std::cout << ble[0] << ", " << ble[1] << ", " << ble[2] << std::endl;

	iter(ble2, 3, print); //const with const

	iter(ble2, 3, print2); //const with not const
	std::cout << ble2[0] << ", " << ble2[1] << ", " << ble2[2] << std::endl;

	return(0);
}
