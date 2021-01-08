#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : array(new int[0]), size(0), now(0)
{
}

Span::Span( unsigned int n) : array(new int[n]), size(n), now(0)
{
}

Span::Span( const Span & src ) : array(new int[src.getSize()]), size(src.getSize())
{
	unsigned int& n = const_cast<unsigned int&>(this->size);
	n = src.getSize();
	now = src.getNow();
	for (unsigned int i = 0; i < src.getNow(); i++)
		array[i] = src.array[i];
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
	if (this != &rhs)
	{
		unsigned int& n = const_cast<unsigned int&>(this->size);
		n = rhs.getSize();
		now = rhs.getNow();
		for (unsigned int i = 0; i < rhs.getNow(); i++)
			array[i] = rhs.array[i];
	}
	return *this;
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

unsigned int Span::getNow() const
{
	return (now);
}

void Span::addNumber(int nb)
{
	now < size ? array[now++] = nb : 0;
}

int Span::shortestSpan()
{
	int ishort(array[0]);

	for (unsigned int i = 0; i < now; i++)
		array[i] < ishort ? ishort = array[i]: 0;
	return (ishort);
}

int Span::longestSpan()
{
	int ilongest(array[0]);

	for (unsigned int i = 0; i < now; i++)
		array[i] > ilongest ? ilongest = array[i]: 0;
	return (ilongest);
}

/* ************************************************************************** */