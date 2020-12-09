#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form* makeForm(std::string type, std::string name);

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */