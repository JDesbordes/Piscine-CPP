#include "Character.hpp"

Character::Character(std::string const & name)
{
	AP = 40;
	Name = name;
	current = NULL;
}

Character::Character(Character const &copied)
{
	AP = 40;
	Name = copied.getName();
	current = copied.getWeapon();
}
Character::Character()
{
	AP = 40;
	Name = "bob";
	current = NULL;
}

Character::~Character()
{
	
}

void Character::recoverAP()
{
	AP += 10;
	if (AP > 40)
		AP = 40;
}

void Character::equip(AWeapon* weapon)
{
	current = weapon;
}

void Character::attack(Enemy* en)
{
	if (current && AP > current->getAPCost() && en && en->getHP() > 0)
	{
		AP -= current->getAPCost();
		std::cout << Name << " attacks " << en->getType() << " with a " << current->getName() << std::endl;
		current->attack();
		en->takeDamage(current->getDamage());
		if (en->getHP() <= 0)
		{
			delete(en);
		}
	}
}

AWeapon* Character::getWeapon() const
{
	return current;
}

std::string Character::getName() const
{
	return Name;
}

int Character::getAP() const
{
	return AP;
}

Character& Character::operator=(const Character &copied)
{
	Name = copied.getName();
	AP = copied.getAP();
	current = copied.getWeapon();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	}
	return o;
}
