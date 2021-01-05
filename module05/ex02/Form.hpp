#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(std::string const &_name, int const _exeGrade, int const _signGrade);
		Form( Form const & src );
		virtual ~Form() = 0;
		Form &operator=( Form const & rhs );

		void beSigned(Bureaucrat *b);

		virtual void execute(Bureaucrat const & executor) const;

		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		std::string getName() const;
		std::string getTarget() const;
		void setTarget(std::string t);

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

		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

	private:
		bool _signed;
		std::string target;
		std::string const name;
		int const signGrade;
		int const exeGrade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */