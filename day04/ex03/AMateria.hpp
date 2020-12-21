#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
// # include "Cure.hpp"
// # include "Ice.hpp"

class ICharacter;

// class Cure;

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria(std::string const & type);

		std::string const & getType() const { return (type); };
		unsigned int getXP() const { return (_xp); };
		virtual AMateria* clone() const = 0;
		// virtual AMateria* clone() const { return new AMateria(*this);}

		void	setType(std::string temp)
		{
			type = temp;
		}
		virtual void use(ICharacter& target)
		{
			set_xp(getXP() + 10);
		}
		void set_xp(unsigned int x) 
		{
			_xp = x;
		}

		AMateria &		operator=( AMateria const & rhs );

	private:
		unsigned int _xp;
		std::string type;
};

#endif /* ******************************************************** AMATERIA_H */