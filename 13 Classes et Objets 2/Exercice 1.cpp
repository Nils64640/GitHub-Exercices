#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Voiture {
  int nbePlace;
  static int totalSieges;
public:
  Voiture():nbePlace{1}{
    totalSieges += 1;
  }
  Voiture(int x):nbePlace{x}{
    totalSieges += x;
  }

  static void afficheSiege(){
    if (totalSieges >= 20){
      cout << "Besoin du Sous-Tratant plus de 20 siège : "<< totalSieges << endl;
    }
    else {
      cout << "Pas Besoin du Sous-Tratant moins de 20 siège : "<< totalSieges << endl;
    }
  }

};
int Voiture:: totalSieges = 0;

int main(){
  Voiture voiture1;
  Voiture voiture2(9);
  Voiture voiture3(4);
  Voiture voiture4(8);
  Voiture::afficheSiege();
}
