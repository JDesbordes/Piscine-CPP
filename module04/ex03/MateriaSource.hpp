#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria* materia[4];
	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();
	
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

		MateriaSource &		operator=( MateriaSource const & rhs );

	private:

};

#endif /* *************************************************** MATERIASOURCE_H */