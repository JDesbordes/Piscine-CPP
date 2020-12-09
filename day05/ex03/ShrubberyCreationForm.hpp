#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 137, 145)
		{
			setTarget(_target);
		}
		ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src.getName(), src.getExeGrade(), src.getSignGrade())
		{
			setTarget(src.getTarget());
		}
		~ShrubberyCreationForm();

		void 	execute(Bureaucrat const & executor) const;
	private:

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */