#include "Bureaucrat.hpp"

int main2()
{
	Bureaucrat* bob = new Bureaucrat("bob", 150);
	Bureaucrat* jimmy = new Bureaucrat("jimmy", 1);

	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;

	try
	{
		bob->incrementGrade();
		jimmy->incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;

	try
	{
		jimmy->decrementGrade();
		bob->decrementGrade();
		bob->decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;

	Bureaucrat* tooHigh;
    Bureaucrat* tooLow;
    try
    {
        tooHigh = new Bureaucrat("TooHigh", 0);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    
    try
    {
        tooLow = new Bureaucrat("TooLow", 151);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

	delete (bob);
	delete (jimmy);
	return (0);
}

int main()
{
	main2();
	/*while (1)
	{
		
	}*/
	return 1;
}
