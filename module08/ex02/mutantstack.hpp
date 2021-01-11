#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

template <class T>
class MutantStack : public std::stack
{
	public:
		MutantStack() : std::stack<t>();
		MutantStack<T>( MutantStack const & src ) : std::stack<t>(src);
		virtual ~Mutantstack();
		MutantStack<T> &		operator=( MutantStack const & rhs )
		{
			if (*this != rhs)
				*this = new stack<t>(rhs);
			return (*this);
		};
	
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		std::stack<T>::container_type::iterator beg(){return this.begin();};
		std::stack<T>::container_type::iterator end(){return this.end();};
		std::stack<T>::container_type::const_iterator cbeg();
		std::stack<T>::container_type::const_iterator cend();
		std::stack<T>::container_type::reverse_iterator rbeg();
		std::stack<T>::container_type::reverse_iterator rend();
		std::stack<T>::container_type::const_reverse_iterator crbeg();
		std::stack<T>::container_type::const_reverse_iterator crend();

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */