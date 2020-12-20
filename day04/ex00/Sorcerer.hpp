#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstring>
# include <ctime>
# include <bitset>
# include <cmath>
# include "Victim.hpp"

class Sorcerer
{
	private :
	std::string Name;
	std::string Title;

	protected:
	Sorcerer();
	Sorcerer(const Sorcerer &copied);

	public :
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	void polymorph(Victim const &a) const;
	void setName(std::string name);
	void setTitle(std::string title);
	void operator=(const Sorcerer &copied);
	std::string getName() const;
	std::string getTitle() const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
