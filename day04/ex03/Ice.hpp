#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		void use(ICharacter& target);
		AMateria* clone() const { return new Ice(*this);}

		Ice &		operator=( Ice const & rhs );

	private:

};

#endif /* ************************************************************* ICE_H */