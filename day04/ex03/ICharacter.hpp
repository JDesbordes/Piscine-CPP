#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

typedef struct		s_items
{
	AMateria*		content;
	struct s_items	*next;
}					t_items;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
	private:
		t_items* giggles = new t_items;
		std::string name;
};

std::ostream &			operator<<( std::ostream & o, ICharacter const & i );

#endif /* ****************************************************** ICHARACTER_H */