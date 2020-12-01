#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();

		void battleCry() const {std::cout << "This code is unclean. PURIFY IT!" << std::endl;}
		void rangedAttack() const {std::cout << "* does nothing *" << std::endl;}
		void meleeAttack() const {std::cout << "* attacks with chainfists *" << std::endl;}
		ISpaceMarine* clone() const { return new AssaultTerminator(*this);}

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

	private:
};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );

#endif /* *********************************************** ASSAULTTERMINATOR_H */