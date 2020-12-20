#include "Victim.hpp"

Victim::Victim()
{
	try
	{
		throw 20;
	}
	catch(int a) {
		std::cout << "Some random victim called " << Name << " just appeared!" << std::endl;
   	}
}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	setName(name);
}

Victim::~Victim()
{
	std::cout << "Victim " << Name << " just died for no apparent reason!" << std::endl;
}

void Victim::setName(std::string name)
{
	Name = name;
}

void Victim::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
	return (Name);
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return o;
}

Victim & operator=(const Victim &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.getName();
	return (*this);
}