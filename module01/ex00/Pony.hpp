#ifndef PONY_H
# define PONY_H
# include <iostream>
# include <cstdio>
# include <iomanip>
# include <cstring>
# include <ctime>
# include <cstdlib>

void ponyOnTheStack(std::string color, std::string magic);
void ponyOnTheHeap(std::string color, std::string magic);

class Pony
{
  // Attributs

  public :

  Pony(std::string color, std::string magic);
  ~Pony();
  // Geteurs
  int get_pony();
  // Seteurs
  int set_pony();



  private :

  std::string color;
  std::string magic;
};

#endif
