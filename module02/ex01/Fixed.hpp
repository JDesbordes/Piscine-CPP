#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class Fixed
{

  public :
  
  	Fixed (); // Constructeur par défaut
  	Fixed(const int width); // Constructeur argument
  	Fixed(const float width);
	Fixed(const Fixed &o); // Constructeur de recopie
	~Fixed(); // Destructeur éventuellement virtuel
	void operator=(const Fixed &copied);
	float toFloat(void) const;
	int toInt(void) const;

  	// Geteurs
  	int getRawBits() const;
  	// Seteurs
  	void setRawBits(int const raw);
  

  // Attributs
  
  private :
  	static const int bit = 8;
  	int value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif 
