# include "Bureaucrat.hpp"
# include "Form.hpp"

int main2()
{
	Bureaucrat* bob = new Bureaucrat("bob", 150);
	Bureaucrat* jimmy = new Bureaucrat("jimmy", 1);
	Form* form;

	try
	{
		form = new Form("B_24", 150, 80);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	try
	{
		form = new Form("B_23", 160, 70);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	try
	{
		form = new Form("B_22", 0, 70);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	try
	{
		form = new Form("B_21", 80, 0);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	try
	{
		form = new Form("B_20", 70, 151);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	std::cout << *form << std::endl;
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

	bob->signForm(form);
	jimmy->signForm(form);
	std::cout << *form << std::endl;

	delete (bob);
	delete (jimmy);
	delete(form);
	return (0);
}

int main()
{
	main2();
	while (1)
	{ }
	return 1;
}
