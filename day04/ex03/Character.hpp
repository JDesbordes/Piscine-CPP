#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

typedef struct			s_amateria
{
	AMateria*			content;
	struct s_amateria	*next;
}						t_amateria;

typedef struct		s_items
{
	AMateria*		content;
	struct s_items	*next;
}					t_items;

class Character : public ICharacter
{
	s_amateria* amateria;
	public:

		Character();
		Character( Character const & src );
		~Character();

		std::string const & getName() const{return (name);}
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	private:
		t_items* giggles = new t_items;
		std::string name;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */