#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

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

		void	setType(std::string temp)
		{
			type = temp;
		}
		virtual void use(ICharacter& target)
		{
			(void)target;
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