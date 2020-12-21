#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	std::cout << "-- crating weapon --" std::endl;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* bl;
	bl = pf;

	std::cout << "-- testing equip / attack --" std::endl;
	me->equip(bl);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	
	std::cout << "-- testing ap --" std::endl;
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);

	std::cout << "-- recovery ap --" std::endl;
	me->recoverAP();
	me->attack(c);

	std::cout << "-- recovery ap max --" std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	std::cout << "-- killing ennemy --" std::endl;
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	me->attack(c);
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	me->attack(c);
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	return 0;
}
