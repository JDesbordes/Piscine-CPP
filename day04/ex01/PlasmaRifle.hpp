#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copied);
		~PlasmaRifle();
		PlasmaRifle& operator=(const PlasmaRifle &copied);
		void attack() const;
};

#endif
