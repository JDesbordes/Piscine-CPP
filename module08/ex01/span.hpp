#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <iterator>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		unsigned int getSize() const;
		void addNumber(int nb);
		long shortestSpan();
		long longestSpan();

	class MaxSizeOfVectorException : public std::exception
	{
		public:
			virtual const char* what () const throw();
	};

	class UngotValueException : public std::exception
	{
		public:
			virtual const char* what () const throw();
	};

	private:
		std::vector<int> arr;
		const unsigned int size;

};

#endif /* ************************************************************ SPAN_H */