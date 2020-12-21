#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const &copied);
	SuperMutant& operator=(const SuperMutant &copied);
	virtual void takeDamage(int);
};

#endif
