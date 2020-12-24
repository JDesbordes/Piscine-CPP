#include "SheetOfPaper.hpp"

SheetOfPaper::SheetOfPaper(): Enemy(800, "Sheet Of Paper")
{
	std::cout << "Gaaah. Going to make you be ecolo!" << std::endl;
}

SheetOfPaper::~SheetOfPaper()
{
	std::cout << "Paper mario..." << std::endl;
}

SheetOfPaper::SheetOfPaper(SheetOfPaper const &copied) : Enemy(copied)
{
	std::cout << "Gaaah. Me want smash mario heads!" << std::endl;
}

void	SheetOfPaper::takeDamage(int i)
{
	Enemy::takeDamage(i > 3 ? i - 3 : 0);
}

SheetOfPaper& SheetOfPaper::operator=(const SheetOfPaper &copied)
{
	setHP(copied.getHP());
	setType(copied.getType());
	return (*this);
}
