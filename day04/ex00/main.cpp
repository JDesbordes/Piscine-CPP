#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "MairiePlayer.hpp"

int main2()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer bib("Gandalf", "the Grey");

	std::cout << bib << bib.getName() << " " << bib.getTitle() << " uses Doppelganger" << std::endl;
	bib = robert;
	std::cout << bib;
	std::cout << &bib << " <= bib | robert => " << &robert << std::endl;

	Victim jim("Jimmy");
	Peon joe("Joe");
	MairiePlayer bob("Bob");

	std::cout << robert << jim << joe << bob;

	std::cout << "--- Rober polymorph ---" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);

	std::cout << "--- Victim get polymorphed ---" << std::endl;
	jim.getPolymorphed();
	joe.getPolymorphed();
	bob.getPolymorphed();
	std::cout << "---  ---" << std::endl;
	
	return 0;
}

int main()
{
	main2();
	while (1)
	{ }
	return 1;
}