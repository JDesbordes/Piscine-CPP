#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <typename T>
void iter(T *a, int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void iter(const T *a, int size, void (*f)(const T &))
{
	for (int i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void iter(const T *a, int size, void (*f)(T &))
{
	T *temp;
	temp = const_cast<T*>(a);
	for (int i = 0; i < size; i++)
		f(temp[i]);
}

#endif