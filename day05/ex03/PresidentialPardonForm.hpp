#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 5, 25)
		{
			setTarget(_target);
		}
		PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src.getName(), src.getExeGrade(), src.getSignGrade())
		{
			setTarget(src.getTarget());
		}
		~PresidentialPardonForm();

		void 	execute(Bureaucrat const & executor) const;
	private:

};

#endif /* ****************************************** PRESIDENTIALPARDONForm_H */