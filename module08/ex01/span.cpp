#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : size(0)
{
	this->arr.reserve(0);
}

Span::Span( unsigned int n) : size(n)
{
	this->arr.reserve(n);
}

Span::Span( const Span & src ) : size(src.getSize())
{
	this->arr.reserve(src.getSize());
	copy(src.arr.begin(), src.arr.end(), back_inserter(this->arr));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
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
		this->arr.reserve(rhs.getSize());
		// for (int i = 0; i < rhs.arr.size(); i++) 
        // 	arr.push_back(rhs.arr[i]); 
		copy(rhs.arr.begin(), rhs.arr.end(), back_inserter(this->arr));
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
	return (this->size);
}

void Span::addNumber(int nb)
{
	if (this->size > this->arr.size())
		this->arr.push_back(nb);
	else
		throw Span::MaxSizeOfVectorException();

}

long long Span::longestSpan()
{
	if (!this->arr.size())
		throw Span::UngotValueException();
	int ishort(INT_MAX);
	int ilongest(INT_MIN);
	for (std::vector<int>::iterator ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		*ptr > ilongest ? ilongest = *ptr: 0;
		*ptr < ishort ? ishort = *ptr: 0;
	}
	return (ilongest - ishort);
}

long long Span::shortestSpan()
{
	if (!this->arr.size())
		throw Span::UngotValueException();
	std::vector<int> ptr = this->arr;
	std::sort (ptr.begin(), ptr.end());
	return (0);
}

const char* Span::MaxSizeOfVectorException::what() const throw ()
{
    return ("Max size reach");
}

const char* Span::UngotValueException::what() const throw ()
{
    return ("No value on the span");
}

/* ************************************************************************** */