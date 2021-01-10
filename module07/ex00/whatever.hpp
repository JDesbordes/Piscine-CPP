#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
void swap(const T& a, const T& b)
{
	std::cout << "ERROR: trying to swap two const : " << &a << " and " << &b  << std::endl;
}

template <typename T>
T min(const T& a, const T& b)
{
	return (const_cast<T&>(a) < const_cast<T&>(b) ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
	return (const_cast<T&>(a) > const_cast<T&>(b) ? a : b);
}

class Awesome {

	public:

		Awesome( int n ) : _n( n ) {}

		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		int getn() const {return (_n);}

	private:

		int _n;
};

std::ostream &	operator<<( std::ostream & o, Awesome const & i )
{
	o << i.getn();
	return o;
}

#endif