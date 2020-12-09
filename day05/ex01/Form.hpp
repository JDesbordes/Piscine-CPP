#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(std::string const &_name, int const _exeGrade, int const _signGrade): name(_name), signGrade(_signGrade), exeGrade(_exeGrade)
		{
			if (_signGrade > 150 || _exeGrade > 150)
				throw Form::GradeTooLowException();
			if (_signGrade < 1 || _exeGrade < 1)
				throw Form::GradeTooHighException();
			this->_signed = false;
		}
		Form( Form const & src ): name(src.name), signGrade(src.signGrade), exeGrade(src.exeGrade){}
		~Form();

		void beSigned(Bureaucrat *b);

		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		std::string getName() const;

		Form &		operator=( Form const & rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException () throw();
				GradeTooHighException (const GradeTooHighException&) throw();
				GradeTooHighException& operator= (const GradeTooHighException&) throw();
				virtual const char* what () const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException () throw();
				GradeTooLowException (const GradeTooLowException&) throw();
				GradeTooLowException& operator= (const GradeTooLowException&) throw();
				virtual const char* what () const throw();
		};

	private:
		bool _signed;
		std::string const name;
		int const signGrade;
		int const exeGrade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */