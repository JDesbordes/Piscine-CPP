#include "Array.hpp"
#include <vector>

int main2(void)
{
	Array<std::string> strarr(2);
	Array<int> ble(6);
	Array<int> ble2;
	int * a = new int();
	std::cout<<*a<<std::endl;
	std::cout<<ble[5]<<std::endl;
	delete(a);

	strarr[0] = "first";
	strarr[1] = "second";
	const Array<std::string> strconst(strarr);
	//strconst[0] = "nope"; // can't change const
	std::cout << strconst[0] << std::endl;
	unsigned int i(0);
	while (i < 6)
	{
		ble[i] = static_cast<int>(i);
		std::cout <<i << " = " << ble[i] << std::endl;
		i++;
	}
	Array<int> blu = ble;
	i = 0;
	while (i < 6)
	{
		std::cout <<"----------------------------------------------------------------------"<< std::endl;
		std::cout <<i << " blu = " << blu[i] << std::endl;
		std::cout <<i << " ble = " << ble[i] << std::endl;
		i++;
	}
	i = 0;
	while (i < 6)
	{
		blu[i] = static_cast<int>(i) + 2;
		std::cout <<"----------------------------------------------------------------------"<< std::endl;
		std::cout <<i << " blu = " << blu[i] << std::endl;
		std::cout <<i << " ble = " << ble[i] << std::endl;
		i++;
	}
	i = 0;
	while (i < 3)
	{
		try
		{
			std::cout <<i << " str = " << strarr[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Exception " << e.what() << std::endl;
		}
		i++;
	}
	
	return (0);
}

int main()
{
	main2();
	/*while (1)
	{

	}*/
}