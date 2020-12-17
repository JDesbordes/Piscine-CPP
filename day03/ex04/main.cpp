#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	SuperTrap a("SUP-TP");
	std::cout << a.getMax_hit_points() << std::endl;
	std::cout << a.getMax_hit_points() << std::endl;
	std::cout << a.getEnergy_points() << std::endl;
	std::cout << a.getMax_energy_points() << std::endl;
	std::cout << a.getLevel() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << a.getMelee_attack_damage() << std::endl;
	std::cout << a.getRanged_attack_damage() << std::endl;
	std::cout << a.getArmor_damage_reduction() << std::endl;
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
