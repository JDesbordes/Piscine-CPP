#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>

class NumNotFoundException : public std::exception
{
	public:
		virtual const char* what () const throw()
		{
			return ("Not found in container");
		}
};

template <typename T>
int easyfind(const T& a, const int i)
{
	T b;
	b = const_cast<T&>(a);
	typename T::iterator itr;

	for(itr = b.begin(); itr != b.end(); itr++)  
	{
		if (*itr == i)
			return(*itr);
	}
	
	std::cout << i << " ";
	throw NumNotFoundException();
}

#endif