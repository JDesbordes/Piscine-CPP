#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	team = new t_isquad;
	team->next = NULL;
	team->content = NULL;
}

Squad::Squad( const Squad & src )
{
	int size = getCount();
	int i = 0;
	t_isquad	*temp;

	if (team)
	{
		temp = team;
		if (!team)
			return ;
		while (temp->next)
		{
			team = temp;
			temp = temp->next;
			delete team->content;
			delete team;
		}
		delete temp->content;
		delete temp;
		return ;
	}
	while (i < size)
	{
		push(getUnit(i)->clone());
		i++;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	ISpaceMarine* target;
	t_isquad *temp_team;

	while(team)
	{
		temp_team = team;
		team = team->next;
		delete temp_team->content;
		delete temp_team;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Squad const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
/*int Squad::getCount()
{
	return (team.size());
}*/

int	Squad::push(ISpaceMarine* newbie)
{
	t_isquad *temp_team;

	temp_team = team;
	if (newbie == NULL)
		return (0);
	if (temp_team->content == NULL)
	{
		team->content = newbie;
		team->next = NULL;
	}
	else
	{
		while (temp_team->next)
			temp_team = temp_team->next;
		temp_team->next = new t_isquad;
		temp_team->next->next = NULL;
		temp_team->next->content = newbie;
	}
	return (1);
}

ISpaceMarine* Squad::getUnit(int target) const
{
	int			i = 0;
	t_isquad	*temp_lst;

	temp_lst = team;
	while (i < target)
	{
		if (temp_lst->next)
			temp_lst = temp_lst->next;
		else
			return (NULL);
		i++;
	}
	return (temp_lst->content);
}

/* ************************************************************************** */

int		Squad::getCount() const
{
	int		size;
	t_isquad	*beg_lst;

	if (team == NULL)
		return (0);
	beg_lst = team;
	size = 0;
	while (beg_lst != NULL)
	{
		++size;
		beg_lst = beg_lst->next;
	}
	return (size);
}
