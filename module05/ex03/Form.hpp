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
		Form(std::string const &_name, int const _exeGrade, int const _signGrade): name(_name), signGrade(_signGrade), exeGrade(_exeGrade)
		{
			if (_signGrade > 150 || _exeGrade > 150)
				throw Form::GradeTooLowException();
			if (_signGrade < 1 || _exeGrade < 1)
				throw Form::GradeTooHighException();
			this->_signed = false;
		}
		Form( Form const & src ): name(src.name), signGrade(src.signGrade), exeGrade(src.exeGrade){}
		virtual ~Form() = 0;
		Form &		operator=( Form const & rhs );

		void beSigned(Bureaucrat *b);

		virtual void execute(Bureaucrat const & executor) const = 0;

		bool getIsSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		std::string getName() const;
		std::string getTarget() const;
		void setTarget(std::string t);

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

		class NotSignedException : public std::exception
		{
			public:
				NotSignedException () throw();
				NotSignedException (const NotSignedException&) throw();
				NotSignedException& operator= (const NotSignedException&) throw();
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