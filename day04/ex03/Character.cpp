#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	amateria = new t_amateria;
	amateria->next = NULL;
	amateria->content = NULL;
}

Character::Character( const Character & src )
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	if (m)
	{
		if (!amateria->content)
			amateria->content = m;
		else if (!amateria->next)
		{
			amateria->next = new t_amateria;
			amateria->next->content = m;
			amateria->next->next = NULL;
		}
		else if (!amateria->next->next)
		{
			amateria->next->next = new t_amateria;
			amateria->next->next->content = m;
			amateria->next->next->next = NULL;
		}
		else if (!amateria->next->next->next)
		{
			amateria->next->next->next = new t_amateria;
			amateria->next->next->next->content = m;
			amateria->next->next->next->next = NULL;
		}
	}
}

void Character::unequip(int idx)
{
	t_amateria *tmp;
	t_amateria *tmp_prev;

	if (amateria->content)
	{
		tmp = amateria;
		while (--idx < -1 && tmp->next)
		{
			tmp_prev = tmp;
			tmp = tmp->next;
		}
		if (idx == -1 && tmp_prev != tmp && tmp->content) // Si deuxieme - quatireme
		{
			tmp_prev->next = tmp->next;
			tmp->next = NULL;
			tmp->content = NULL;
			delete tmp;
		}
		else if (idx == -1 && tmp->content) // Si premier a sup
			tmp->content = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	int			i;
	t_amateria	*tmp;

	tmp = amateria;
	i = -1;
	while (++i < (idx && 3) && tmp->next)
		tmp = tmp->next;
	if (i == idx && tmp->content)
		tmp->content->use(target);
}


/* ************************************************************************** */