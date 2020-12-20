#include "MairePlayer.hpp"

MairePlayer::MairePlayer()
{
	try
	{
		throw 20;
	}
	catch(int a) {
		std::cout << "Some random Marie player called " << Name << " just appeared!" << std::endl;
   	}
}

MairePlayer::MairePlayer(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

MairePlayer::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

MairiePlayer & operator=(const MairiePlayer &rhs)
{
	if (this == &rhs)
		return (*this);
	Victim::operator=(rhs);
	return (*this);
}