#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstring>
# include <ctime>
# include <bitset>
# include <cmath>

class Victim
{
	private :
	std::string Name;

	protected :
	Victim();

	public :
	Victim(std::string name);
	virtual ~Victim();
	virtual void getPolymorphed() const;
	Victim & operator=(const Victim &rhs);
	void setName(std::string name);
	std::string getName() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif