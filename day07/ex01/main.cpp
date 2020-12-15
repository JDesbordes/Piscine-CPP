#include "iter.hpp"

void plusone(int &val)
{
	val += 10;
}

int main(void)
{
	int ble[] = {1,2,3};

	::iter(ble, 3, plusone);
	std::cout << ble[0] << ", " << ble[1] << ", " << ble[2] << std::endl;

	return(0);
}
