#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <typename T>
void iter(T *a, int b, void (*f)(T &))
{
	int i = 0;

	while (i < b)
	{
		f(a[i]);
		i++;
	}
}

#endif