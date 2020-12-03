
#ifndef PONY_H
# define PONY_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>

void ponyOnTheStack(std::string color, std::string magic);
void ponyOnTheHeap(std::string color, std::string magic);

class Pony
{
  // Attributs

  public :

  Pony(std::string color, std::string magic);
  static int stat;
  // Geteurs
  int get_pony();
  // Seteurs
  int set_pony();



  private :

  std::string color;
  std::string magic;
};

#endif
