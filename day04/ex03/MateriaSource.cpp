#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	amateria = new t_amateria;
	amateria->next = NULL;
	amateria->content = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	amateria = new t_amateria;
	t_amateria	*temp;

	while(amateria)
	{
		temp = amateria;
		amateria = amateria->next;
		delete temp->content;
		delete temp;
	}
	amateria->next = NULL;
	amateria->content = NULL;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	t_amateria	*temp;

	while(amateria)
	{
		temp = amateria;
		amateria = amateria->next;
		delete temp->content;
		delete temp;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
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
		else
			delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	t_amateria	*temp;
	AMateria *clone;

	temp = this->amateria;
	while (temp)
	{
		if (temp->content->getType() == type)
			return (temp->content->clone());
		temp = temp->next;
	}
	return (0);
}

/* ************************************************************************** */