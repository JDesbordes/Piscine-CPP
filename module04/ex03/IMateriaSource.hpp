#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "Character.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
	private:

};

#endif /* ************************************************** IMATERIASOURCE_H */