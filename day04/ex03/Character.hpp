#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class ICharacter;

class Character : public ICharacter
{
	public:
		Character( Character const & src );
		Character(std::string const & name);
		~Character();

		std::string const & getName() const{return (name);}
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	private:
		Character();
		std::string name;
		AMateria* inv[4];
};

#endif /* ******************************************************* CHARACTER_H */