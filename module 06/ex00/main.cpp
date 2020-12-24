#include "Scalarc.hpp"


int main(int ac, char *av[])
{

	if (ac != 2)
		return (-1);
	Scalarc converted(av[1]);
	
	try
	{
		std::cout << "char: " << converted.convertToChar() << "\'" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: " << converted.convertToInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "float: " << converted.convertToFloat() << ((converted.convertToFloat() == static_cast <int>(converted.convertToFloat())) ? ".0" : "") << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "double: " << converted.convertToDouble(converted.getBase(), 0) << ((converted.convertToDouble(converted.getBase(), 0)  == static_cast <int>(converted.convertToDouble(converted.getBase(), 0))) ? ".0" : "") << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}