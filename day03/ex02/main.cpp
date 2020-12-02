#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap a("FR4G-TP");
	ScavTrap b("SC4V-TP");
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
  	return (0);
}
