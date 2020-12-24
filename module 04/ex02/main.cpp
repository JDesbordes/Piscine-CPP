#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main2()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	TacticalMarine *b = new TacticalMarine();
	AssaultTerminator *j = new AssaultTerminator();
	ISpaceMarine* bib = new TacticalMarine(*b);
	ISpaceMarine* beb = new AssaultTerminator(*j);
	ISpaceMarine* jon;
	ISpaceMarine* jun;
	jon = jim;
	jun = bob;
	std::cout << std::endl;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bib);
	vlc->push(beb);
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
	delete j;
	delete b;
	return 0;
}

int main()
{
	main2();
	while (1)
	{ }
	return 1;
}
