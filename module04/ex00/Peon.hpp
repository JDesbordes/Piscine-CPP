#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: virtual public Victim
{
	public :
	Peon();
	Peon(std::string name);
	Peon(const Peon &src);
	virtual ~Peon();
	void getPolymorphed() const;
	Peon & operator=(const Peon &rhs);
};

#endif
