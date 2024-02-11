#include <iostream>
#include <string>
using namespace std;

struct immeuble {
  string adresse;
  double largeur;
  double longueur;
  double hauteur;
  string utilisation;
  bool igh = false;
};

void igh_ou_pas(immeuble& test){
  if (test.utilisation != "Habitation"){
    if (test.hauteur > 28) test.igh = true;
      test.igh = false;
  }
  else {
    if (test.hauteur > 50) test.igh = true;
      test.igh = false;
  }
}

double surface(immeuble calcul){
  return(calcul.largeur*calcul.longueur);
}

void affichage(immeuble bati){
  cout << "\nL'adresse de l'immeuble : " << bati.adresse;
  cout << "\nLa surface de l'immeuble : " << surface(bati) << " m²";
  igh_ou_pas(bati);
  if(bati.igh == true){
    cout << "\nL'immeuble est de grande hauteur\n";
  }
  else {
    cout << "\nL'immeuble n'est pas de grande hauteur\n";
  }
}

int main(){
  setlocale(LC_CTYPE, "fra");
  immeuble immeuble1{"32, av du printemps", 40, 20, 30, "Habitation",};
  immeuble immeuble2{"26, av Bill Gates", 20, 20, 55, "Habitation",};
  immeuble immeuble3{"115, route d'Hasparren", 30, 20, 35, "Bureaux",};

  affichage(immeuble1);
  affichage(immeuble2);
  affichage(immeuble3);

  return(0);
}