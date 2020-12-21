#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "Learn materia" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");

	std::cout << std::endl << "Creating materia source and equip" << std::endl;
	AMateria* tmp;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	AMateria* tmp5;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp1 = src->createMateria("cure");
	moi->equip(tmp1);
	tmp2 = src->createMateria("ice");
	moi->equip(tmp2);
	tmp3 = src->createMateria("cure");
	moi->equip(tmp3);
	tmp4 = src->createMateria("ice");
	moi->equip(tmp4);
	tmp5 = src->createMateria("cure");
	moi->equip(tmp5);

	if (tmp)
		std::cout << "tmp equiped" << std::endl;
	else
		std::cout << "tmp deleted" << std::endl;

	if (tmp1)
		std::cout << "tmp1 equiped" << std::endl;
	else
		std::cout << "tmp1 deleted" << std::endl;

	if (tmp2)
		std::cout << "tmp2 equiped" << std::endl;
	else
		std::cout << "tmp2 deleted" << std::endl;

	if (tmp3)
		std::cout << "tmp3 equiped" << std::endl;
	else
		std::cout << "tmp3 deleted" << std::endl;

	if (tmp4)
		std::cout << "tmp4 equiped" << std::endl;
	else
		std::cout << "tmp4 deleted" << std::endl;

	if (tmp5)
		std::cout << "tmp5 equiped" << std::endl;
	else
		std::cout << "tmp5 deleted" << std::endl;

	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "Testing use and see xp" << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << tmp->getXP() << " xp from tmp" << std::endl;
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	std::cout << tmp->getXP() << " xp from tmp" << std::endl;

	std::cout << std::endl << "Testing equip / unequip" << std::endl;
	moi->unequip(3);
	moi->unequip(8);
	moi->unequip(-3);
	moi->use(3, *bob);
	moi->equip(tmp3);
	std::cout << tmp3->getXP() << " xp from tmp3" << std::endl;

	delete bob;
	delete moi;
	delete src;

	return 0;
}
