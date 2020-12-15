#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	SuperTrap a("SUP-TP");
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.ninjaShoebox("Handsome Jack");
	a.ninjaShoebox("Handsome Jack");
  	return (0);
}
