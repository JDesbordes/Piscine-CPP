# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* bob = new Bureaucrat;
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
	delete (bob);
	delete (jimmy);
	return (0);
}