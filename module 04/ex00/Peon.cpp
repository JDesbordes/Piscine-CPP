#include "Peon.hpp"

Peon::Peon()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=(const Peon &rhs)
{
	if (this != &rhs)
		Victim::operator=(rhs);
	return (*this);
}