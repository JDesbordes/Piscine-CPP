#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 45, 72)
{
	setTarget(NULL);
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 45, 72)
{
	setTarget(_target);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getExeGrade(), src.getSignGrade())
{
	setTarget(src.getTarget());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void 	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	int i;
	i = rand() % 4;
	if (i == 0)
	{
		std::cout << "brbrbrbrbrbbrbrbrbr" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	}
	else if (i == 1)
	{
		std::cout << "sciiiiiiiiiscriiiiiiii" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	}
	else if (i == 2)
	{
		std::cout << "* clang * brrrrrrrrruuurururururuur" << std::endl;
		std::cout << getTarget() << " robotomisation has failed" << std::endl;
	}
	else if (i == 3)
	{
		std::cout << "* click * shwshwshwshwshw * click *" << std::endl;
		std::cout << getTarget() << " robotomisation has failed" << std::endl;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/* ************************************************************************** */