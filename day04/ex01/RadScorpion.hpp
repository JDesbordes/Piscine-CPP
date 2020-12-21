#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &copied);
	RadScorpion& operator=(const RadScorpion &copied);
	virtual void takeDamage(int);
};

#endif
