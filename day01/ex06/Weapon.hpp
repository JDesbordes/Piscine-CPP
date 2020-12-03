
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <sstream>

class Weapon
{

	public :
	std::string type;
	Weapon();
	Weapon(std::string str);
	int	setType(std::string str);
	std::string	getType();
};

#endif
