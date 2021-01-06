#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		void 	execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm();

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */