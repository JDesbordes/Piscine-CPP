#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

  	public :
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &src);
		NinjaTrap &	operator=(NinjaTrap const & rhs);
		~NinjaTrap();
		void ninjaShoebox(std::string const & target);
		int getMelee_attack_damage() const;
		unsigned int getEnergy_points() const;
		unsigned int getMax_energy_points() const;
		void setEnergy_points(unsigned int i);
		void setMax_energy_points(unsigned int i);
		void setMelee_attack_damage(int i);
	private :
		unsigned int Energy_points;
		unsigned int Max_energy_points;
		int Melee_attack_damage;
};

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif
