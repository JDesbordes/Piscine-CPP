#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main2()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	std::cout << std::endl;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	std::cout << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	delete vlc;
	return 0;
}

int main()
{
	main2();
	while (1)
	{ }
	return 1;
}
