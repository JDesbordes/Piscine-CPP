#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{

	public :
	std::string identify();
	const Brain brain;
	Human();
	const Brain& getBrain() const;
};

#endif