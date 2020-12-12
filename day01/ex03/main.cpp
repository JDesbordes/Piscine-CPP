#include "ZombieHorde.hpp"

int main()
{
	int i(-1);
	std::srand(std::time(NULL));
	std::cout << "How many Z's do you want ?\n";
	std::cin >> i;
	while (i < 0)
	{
		std::cout << "Your number is negative, retry an other one plz my nugga\n";
		std::cin >> i;
	}
	ZombieHorde* hey;
	hey = new ZombieHorde(i);
	hey->announce();
	delete(hey);
  	return (0);
}
