#include "Human.hpp"

std::string Human::identify()
{
	return(brain.identify());
}

const Brain& Human::getBrain() const
{
	return(this->brain);
}

Human::Human()
{
	
}