#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		~AMateria();

		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;

		void	setType(std::string temp)
		{
			type = temp;
		}
		virtual void use(ICharacter& target)
		{
			set_xp(get_xp() + 10);
		}
		void set_xp(unsigned int x) 
		{
			_xp = x;
		}
		unsigned int get_xp()
		{
			return (_xp);
		}

		AMateria &		operator=( AMateria const & rhs );

	private:
		unsigned int _xp;
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */