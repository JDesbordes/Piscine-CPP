#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const & src);
		virtual ~TacticalMarine();
		void battleCry() const {std::cout << "For the holy PLOT!" << std::endl;}
		void rangedAttack() const {std::cout << "* attacks with a bolter *" << std::endl;}
		void meleeAttack() const {std::cout << "* attacks with a chainsword *" << std::endl;}
		ISpaceMarine* clone() const { return new TacticalMarine(*this);}
		TacticalMarine &		operator=( TacticalMarine const & rhs );
};

#endif /* ************************************************** TACTICALMARINE_H */