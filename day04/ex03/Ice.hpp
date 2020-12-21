#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		virtual ~Ice();

		void use(ICharacter& target);
		AMateria* clone() const { return new Ice(*this);}

		Ice &		operator=( Ice const & rhs );

	private:

};

#endif /* ************************************************************* ICE_H */