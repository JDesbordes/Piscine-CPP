#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack<T>( MutantStack const & src ) : std::stack<T>(src) {};
		virtual ~MutantStack();
		MutantStack<T> &		operator=( MutantStack const & rhs )
		{
			if (*this != rhs)
				*this = new std::stack<T>(rhs);
			return (*this);
		};
	
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		typename std::stack<T>::container_type::iterator begin(){return this.begin();};
		typename std::stack<T>::container_type::iterator end(){return this.end();};
		/*typename std::stack<T>::container_type::const_iterator begin();
		typename std::stack<T>::container_type::const_iterator end();
		typename std::stack<T>::container_type::reverse_iterator rbegin();
		typename std::stack<T>::container_type::reverse_iterator rend();
		typename std::stack<T>::container_type::const_reverse_iterator rbegin();
		typename std::stack<T>::container_type::const_reverse_iterator rend();*/

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */