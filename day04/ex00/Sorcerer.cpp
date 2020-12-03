#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	try
	{
		throw 20;
	}
	catch(int a) {
        std::cout << "BORN "; 
   	}
}

Sorcerer::Sorcerer(const Sorcerer &copied)
{
	puts("Copy constructor called");
	Name = copied.getName();
	Title = copied.getTitle();
};

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	Name = name;
	Title =  title;
}

Sorcerer::~Sorcerer()
{
	std::cout << Name << ", " << Title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::setName(std::string name)
{
	Name = name;
}

void Sorcerer::setTitle(std::string title)
{
	Title = title;
}

void Sorcerer::operator=(const Sorcerer &copied)
{
	Name = copied.getName();
	Title = copied.getTitle();
	std::cout << Name << ", " << Title << ", is copied!" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (Name);
}

std::string Sorcerer::getTitle() const
{
	return (Title);
}

void Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
