#ifndef ZEUSSPEAR_HPP
# define ZEUSSPEAR_HPP

# include "AWeapon.hpp"

class ZeusSpear : public AWeapon
{
	public:
		ZeusSpear();
		ZeusSpear(ZeusSpear const &copied);
		virtual ~ZeusSpear();
		ZeusSpear& operator=(const ZeusSpear &copied);
		void attack() const;
};

#endif
