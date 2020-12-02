#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: virtual public Victim
{
	private :
	std::string Name;

	protected :
	Peon();

	public :
	Peon(std::string name);
	~Peon();
	void getPolymorphed() const;
};

#endif
