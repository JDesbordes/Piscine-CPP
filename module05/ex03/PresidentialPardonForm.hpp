#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm( const PresidentialPardonForm & src );
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		virtual void 	execute(Bureaucrat const & executor) const;
		
	private:

};

#endif /* ****************************************** PRESIDENTIALPARDONForm_H */