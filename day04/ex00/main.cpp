#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Sorcerer bib("Gandalf", "the Grey");
	std::cout << bib << bib.getName() << " " << bib.getTitle() << " uses Doppelganger" << std::endl;
	bib = robert;
	std::cout << bib;
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}