
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <cstdlib>

class Zombie
{

  public :

  void announce();
  Zombie(std::string name, std::string type);
  Zombie();
  int get_Zombie();
  int set_Zombie();
  std::string type;
  std::string name;
};

#endif
