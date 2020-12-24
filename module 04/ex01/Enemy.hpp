#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "AWeapon.hpp"

class Enemy
{
	private:
	std::string Type;
	int			HP;
	Enemy();

	public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(Enemy const &copied);
	Enemy& operator=(const Enemy &copied);
	std::string getType() const;
	void setType(std::string);
	int getHP() const;
	void	setHP(int);
	virtual void takeDamage(int);
};

#endif
