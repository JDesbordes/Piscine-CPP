#include "easyfind.hpp"

int main()
{
	std::vector<int> myvector;
	for (int i = 0; i < 5; i++)
	{
		myvector.push_back(5 - i);
	}
	try
	{
		std::cout << easyfind(myvector, 3) << " found in container" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main2()
{
	main();
	/*while(1)
	{

	}*/
	return (1);
}