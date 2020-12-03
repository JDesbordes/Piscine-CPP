#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	std::string Type;
	int			HP;

	public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &copied);
	SuperMutant& operator=(const SuperMutant &copied);
	virtual void takeDamage(int);
};

#endif
