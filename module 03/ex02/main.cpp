#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap a("FR4G-TP");
	ScavTrap b("SC4V-TP");
	ScavTrap c = b;
	ScavTrap d(b);

	std::cout << "TEST A" << std::endl;
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");

	std::cout << "TEST B" << std::endl;
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	std::cout << "before attack : " << b.getHit_points() << "hp and you can get max : " << b.getMax_hit_points() << std::endl;
	b.takeDamage(45);
	std::cout << "after attack : " << b.getHit_points() << "hp and you can get max : " << b.getMax_hit_points() << std::endl;
	b.beRepaired(50);
	std::cout << "after heal : " << b.getHit_points() << "hp and you can get max : " << b.getMax_hit_points() << std::endl;
	b.beRepaired(50);
	std::cout << b.getHit_points() << "hp and you can get max : " << b.getMax_hit_points() << std::endl;
	b.beRepaired(50);
	std::cout << b.getHit_points() << "hp and you can get max : " << b.getMax_hit_points() << std::endl;
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");
	b.challengNewcomer("Handsome Jack");

	std::cout << "TEST C" << std::endl;
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.challengNewcomer("Handsome Jack");
	c.challengNewcomer("Handsome Jack");
	c.challengNewcomer("Handsome Jack");
	c.challengNewcomer("Handsome Jack");
	c.challengNewcomer("Handsome Jack");

	std::cout << "TEST D" << std::endl;
	d.meleeAttack("Rat");
	d.rangedAttack("Badass Psycho");
	d.takeDamage(45);
	d.beRepaired(50);
	d.challengNewcomer("Handsome Jack");
	d.challengNewcomer("Handsome Jack");
	d.challengNewcomer("Handsome Jack");
	d.challengNewcomer("Handsome Jack");
	d.challengNewcomer("Handsome Jack");
  	return (0);
}
