#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include <deque>
# include "ISquad.hpp"

typedef struct		s_isquad
{
	ISpaceMarine*	content;
	struct s_isquad	*next;
}					t_isquad;

class Squad : public ISquad
{
	s_isquad* team;
	
	public:
		int getCount() const;
		ISpaceMarine* getUnit(int target) const;
		int push(ISpaceMarine* newbie);
		Squad();
		Squad( Squad const & src );
		virtual ~Squad();
		Squad &		operator=( Squad const & rhs );
};

#endif /* *********************************************************** SQUAD_H */