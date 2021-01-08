#include "span.hpp"

int main()
{
	Span sp = Span(5);


	std::cout << "trying whithout value" << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	// std::cout << std::endl;
	// Span sp2 = Span(15);
	// try
	// {
	// 	sp2.addNumber(5);
	// 	sp2.addNumber(3);
	// 	sp2.addNumber(17);
	// 	sp2.addNumber(0);
	// 	sp2.addNumber(-17);
	// 	sp2.addNumber(9);
	// 	sp2.addNumber(11);
	// 	std::cout << sp2.shortestSpan() << std::endl;
	// 	std::cout << sp2.longestSpan() << std::endl;	
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "Exception " << e.what() << std::endl;
	// }

	// std::cout << std::endl;
	// std::cout << "trying max size" << std::endl;
	// Span sp3 = Span(10000);
	// try
	// {
	// 	for (int i = 0; i < 999999; i++)
	// 		sp3.addNumber(i);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "Exception " << e.what() << std::endl;
	// }

	// try
	// {
	// 	std::cout << sp3.shortestSpan() << std::endl;
	// 	std::cout << sp3.longestSpan() << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << "Exception " << e.what() << std::endl;
	// }

	std::cout << std::endl;
	Span sp4 = Span(15);
	try
	{
		sp4.addNumber(INT_MIN);
		sp4.addNumber(INT_MAX);
		std::cout << sp4.longestSpan() << std::endl;	
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;	
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
}