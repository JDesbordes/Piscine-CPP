#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	std::string Type;
	int			HP;

	public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(RadScorpion const &copied);
	RadScorpion& operator=(const RadScorpion &copied);
	virtual void takeDamage(int);
};

#endif
