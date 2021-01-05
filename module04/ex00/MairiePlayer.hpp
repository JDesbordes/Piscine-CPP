#ifndef MAIRIEPLAYER_HPP
# define MAIRIEPLAYER_HPP

# include "Victim.hpp"

class MairiePlayer: virtual public Victim
{
	public :
	MairiePlayer();
	MairiePlayer(std::string name);
	MairiePlayer(const MairiePlayer &src);
	virtual ~MairiePlayer();
	void getPolymorphed() const;
	MairiePlayer & operator=(const MairiePlayer &rhs);
};

#endif
