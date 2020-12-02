#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class AWeapon
{
	private:
		int APCost;
		int	Damage;
		std::string Name;
	
	protected:
		AWeapon();

	public:
		AWeapon(std::string const & Name, int APCost, int Damage);
		AWeapon(AWeapon const &copied);
		~AWeapon();
		AWeapon& operator=(const AWeapon &copied);
		void setName(std::string name);
		void setAPCost(int cost);
		void setDamage(int dmg);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
