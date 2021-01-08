#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <typename T>
void swap(const T& a, const T& b)
{
	T & ta = const_cast<T&>(a);
	T & tb = const_cast<T&>(b);
	T tempa = a;

	ta = tb;
	tb = tempa;
}

template <typename T>
T min( T& a, T& b)
{
	return (a < b ? a : b);
}

template <typename T>
T min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

template <typename T>
T max(T& a, T& b)
{
	return (a > b ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

/*class Awesome {

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
}*/

#endif