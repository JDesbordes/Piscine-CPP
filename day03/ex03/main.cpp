#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	FragTrap a("FR4G-TP");
	ScavTrap b("SC4V-TP");
	NinjaTrap c("NINJA-TP");
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.ninjaShoebox(a.getName());
	c.ninjaShoebox(b.getName());
  	return (0);
}
