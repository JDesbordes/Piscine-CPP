#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const &copied);
		virtual ~PowerFist();
		PowerFist& operator=(const PowerFist &copied);
		void attack() const;
};

#endif
