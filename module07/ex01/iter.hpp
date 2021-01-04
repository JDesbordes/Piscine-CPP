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

#endif