#include "MairiePlayer.hpp"

MairiePlayer::MairiePlayer()
{
	std::cout << "Bwark bwark. Gneu gneu." << std::endl;
}

MairiePlayer::MairiePlayer(std::string name) : Victim(name)
{
	std::cout << "Bwark bwark. Gneu gneu." << std::endl;
}

MairiePlayer::~MairiePlayer()
{
	std::cout << "Pacman to op..." << std::endl;
}

void MairiePlayer::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a nice character!" << std::endl;
}

MairiePlayer & MairiePlayer::operator=(const MairiePlayer &rhs)
{
	if (this != &rhs)
		Victim::operator=(rhs);
	return (*this);
}