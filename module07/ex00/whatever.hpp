#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <iomanip>

class ConstSwapException : public std::exception
{
	public:
		virtual const char* what () const throw(){return ("ERROR: trying to swap two const");};
};

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
	static_cast<void>(a);
	static_cast<void>(b);
	throw ConstSwapException();
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

#endif