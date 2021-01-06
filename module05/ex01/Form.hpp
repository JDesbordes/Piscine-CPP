#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(std::string const &_name, int const _exeGrade, int const _signGrade);
		Form( Form const & src );
		virtual ~Form();

		void beSigned(Bureaucrat *b);

		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		std::string getName() const;

		Form &		operator=( Form const & rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

	private:
		bool _signed;
		std::string const name;
		int const signGrade;
		int const exeGrade;
		Form();
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */