#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>


class Bureaucrat
{

	public:
		Bureaucrat(std::string n, int g);
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();
		void incrementGrade();
		void decrementGrade();
		int getGrade() const;
		std::string getName() const;
		Bureaucrat &		operator=( Bureaucrat const & rhs );

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
		Bureaucrat();
		std::string const name;
		int grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */