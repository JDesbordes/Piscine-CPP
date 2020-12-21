#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:
		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		virtual ~AssaultTerminator();
		void battleCry() const {std::cout << "This code is unclean. PURIFY IT!" << std::endl;}
		void rangedAttack() const {std::cout << "* does nothing *" << std::endl;}
		void meleeAttack() const {std::cout << "* attacks with chainfists *" << std::endl;}
		ISpaceMarine* clone() const { return new AssaultTerminator(*this);}
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );
};

#endif /* *********************************************** ASSAULTTERMINATOR_H */