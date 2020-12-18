#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	FragTrap a("FR4G-TP");
	ScavTrap b("SC4V-TP");
	NinjaTrap c("NINJA-TP");
	NinjaTrap d = c;
	NinjaTrap e(c);

	std::cout << "TEST A" << std::endl;
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");

	std::cout << "TEST B" << std::endl;
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");

	std::cout << "TEST C" << std::endl;
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.ninjaShoebox(a.getName());
	c.ninjaShoebox(b.getName());

	std::cout << "TEST D" << std::endl;
	d.meleeAttack("Rat");
	d.rangedAttack("Badass Psycho");
	d.takeDamage(45);
	d.beRepaired(50);
	d.ninjaShoebox(a.getName());
	d.ninjaShoebox(b.getName());

	std::cout << "TEST E" << std::endl;
	e.meleeAttack("Rat");
	e.rangedAttack("Badass Psycho");
	e.takeDamage(45);
	e.beRepaired(50);
	e.ninjaShoebox(a.getName());
	e.ninjaShoebox(b.getName());
  	return (0);
}
