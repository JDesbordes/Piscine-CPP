#include "MairePlayer.hpp"

MairePlayer::MairePlayer()
{
	std::cout << "Bwark bwark. Gneu gneu." << std::endl;
}

MairePlayer::MairePlayer(std::string name) : Victim(name)
{
	std::cout << "Bwark bwark. Gneu gneu." << std::endl;
}

MairePlayer::~Peon()
{
	std::cout << "Pacman to op..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a nice character!" << std::endl;
}

MairiePlayer & operator=(const MairiePlayer &rhs)
{
	if (this == &rhs)
		return (*this);
	Victim::operator=(rhs);
	return (*this);
}