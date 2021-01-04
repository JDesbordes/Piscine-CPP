#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
	std::string Name;
	int AP;
	AWeapon *current;

	public:
	Character(std::string const & name);
	Character(Character const &copied);
	Character();
	virtual ~Character();
	Character& operator=(const Character &copied);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif
