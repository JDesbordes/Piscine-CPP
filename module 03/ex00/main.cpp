#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap a("CL4P-TP");
	FragTrap b(a);
	FragTrap c = b;

	std::cout << "TEST A" << std::endl;
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	std::cout << "before attack : " << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.takeDamage(45);
	std::cout << "after attack : " << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	std::cout << "before attack : " << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.takeDamage(145);
	std::cout << "after attack : " << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.beRepaired(50);
	std::cout << "after heal : " << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.beRepaired(50);
	std::cout << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.beRepaired(50);
	std::cout << a.get_Hit_points() << "hp and you can get max : " << a.get_Max_hit_points() << std::endl;
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");

	std::cout << "TEST B" << std::endl;
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.vaulthunter_dot_exe("Handsome Jack");

	std::cout << "TEST C" << std::endl;
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.vaulthunter_dot_exe("Handsome Jack");
  	return (0);
}