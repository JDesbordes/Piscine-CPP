#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

int main(void)
{
	std::string hello = "HI THIS IS BRAIN";
	std::string *spoint = &hello;
	std::string& sref = hello;
	std::cout << *spoint << std::endl << sref << std::endl;
	return (0);
}
