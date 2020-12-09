#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 45, 72)
		{
			setTarget(_target);
		}
		RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getExeGrade(), src.getSignGrade())
		{
			setTarget(src.getTarget());
		}
		~RobotomyRequestForm();

		void 	execute(Bureaucrat const & executor) const;
	private:

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */