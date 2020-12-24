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
T min(T& a, T& b)
{
	T temp1 = a;
	T temp2 = b;
	if (temp1 > temp2)
		return (b);
	return (a);
}

template <typename T>
T max(T& a, T& b)
{
	T temp2 = b;
	T temp1 = a;
	if (temp1 > temp2)
		return (a);
	return (b);
}

#endif