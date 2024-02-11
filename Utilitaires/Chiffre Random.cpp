#include <cstdlib>              // pour std::rand()
#include <ctime>                // pour std::time()
#include <iostream>             // pour std::cin, std::cout
#include <limits>               // pour cin.ignore
#include <clocale>              // pour gestion des caractères accentués

int main() {
  const int maxi(100);            //le max
  const int mini(0);              // le min
  std::srand(std::time(0));
  int random = (std::rand() % maxi-mini)+mini;
  return(0);
}