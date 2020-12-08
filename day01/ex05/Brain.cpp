#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::ostringstream ss;
	ss << id;
	return(ss.str());
}

Brain::Brain()
{
	id = (const void *)this;
}