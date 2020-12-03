
#include "ZombieEvent.hpp"
#include <unistd.h>

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zombi;

    zombi = new Zombie(name, type);
    return (zombi);
}

int     ZombieEvent::setZombieType()
{
    std::string type;
	puts("\nNew type of zombie :");
  	std::cin >> type;
    this->type = type;
  	return (1);
}

ZombieEvent::ZombieEvent()
{
    std::string name;

    puts("\nNew name of zombie :");
    std::cin >> name;
    setZombieType();
    zombi = newZombie(name);
    zombi->announce();
};
