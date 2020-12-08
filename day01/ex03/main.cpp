#include "ZombieHorde.hpp"

int main()
{
	int i;
	std::srand(std::time(nullptr));
	std::cout << "How many Z's do you want ?\n";
	std::cin >> i;
	ZombieHorde* hey;
	hey = new ZombieHorde(i);
	hey->announce();
	delete(hey);
  	return (0);
}
