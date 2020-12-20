#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "MairiePlayer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer bib("Gandalf", "the Grey");

	std::cout << bib << bib.getName() << " " << bib.getTitle() << " uses Doppelganger" << std::endl;
	bib = robert;
	std::cout << bib;

	Victim jim("Jimmy");
	Peon joe("Joe");
	MairiePlayer bob("Bob");

	std::cout << robert << jim << joe << bob;

	std::cout << "Rober polymorph" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);

	// std::cout << "Victim get polymorphed" << std::endl;
	// jim.getPolymorphed();
	// joe.getPolymorphed();
	// bob.getPolymorphed();
	
	return 0;
}