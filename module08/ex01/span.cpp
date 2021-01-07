#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : array(new int[0]), size(0)
{
}

Span::Span( unsigned int n) : array(new int[n]), size(n)
{

}

Span::Span( const Span & src ) : array(new int[src.getSize()]), size(src.getSize())
{
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = src.array[i];
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	delete[](array);
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	Span arr(rhs);
	return(arr);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getSize() const
{
	return (size);
}

/* ************************************************************************** */