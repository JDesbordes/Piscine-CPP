#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		unsigned int getSize() const;
		unsigned int getNow() const;
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();

	private:
		int *array;
		const unsigned int size;
		unsigned int now;

};

#endif /* ************************************************************ SPAN_H */