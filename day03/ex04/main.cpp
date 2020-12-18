#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	SuperTrap a("SUP-TP");
	SuperTrap b = a;
	SuperTrap c(a);
	
	std::cout << a.getMax_hit_points() << std::endl;
	std::cout << a.getMax_hit_points() << std::endl;
	std::cout << a.getEnergy_points() << std::endl;
	std::cout << a.getMax_energy_points() << std::endl;
	std::cout << a.getLevel() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << a.getMelee_attack_damage() << std::endl;
	std::cout << a.getRanged_attack_damage() << std::endl;
	std::cout << a.getArmor_damage_reduction() << std::endl;

	std::cout << "TEST A" << std::endl;
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	a.takeDamage(45);
	a.beRepaired(50);
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.ninjaShoebox("Handsome Jack");
	a.ninjaShoebox("Handsome Jack");

	std::cout << "TEST B" << std::endl;
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.vaulthunter_dot_exe("Handsome Jack");
	b.vaulthunter_dot_exe("Handsome Jack");
	b.ninjaShoebox("Handsome Jack");
	b.ninjaShoebox("Handsome Jack");

	std::cout << "TEST C" << std::endl;
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.vaulthunter_dot_exe("Handsome Jack");
	c.vaulthunter_dot_exe("Handsome Jack");
	c.ninjaShoebox("Handsome Jack");
	c.ninjaShoebox("Handsome Jack");
  	return (0);
}
