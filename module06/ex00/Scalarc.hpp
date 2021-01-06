#ifndef SCALARC_HPP
# define SCALARC_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Scalarc
{

	public:

		Scalarc();
		Scalarc(char *str);
		Scalarc( Scalarc const & src );
		~Scalarc();


		double	convertToDouble(char *str, int i);
		float	convertToFloat();
		char	convertToChar();
		int		convertToInt();
		double	getConverted() const;
		char	*getBase() const;

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		class ImpossibleConversionException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		Scalarc &		operator=( Scalarc const & rhs );

	private:
		char	*base;
		double	converted;
		bool	notint;
		int		options;
};

std::ostream &			operator<<( std::ostream & o, Scalarc const & i );

#endif /* ********************************************************* SCALARC_H */