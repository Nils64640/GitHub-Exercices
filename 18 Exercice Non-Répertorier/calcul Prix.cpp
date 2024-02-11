#include <iostream>
using namespace std;

struct produit {
  int nbDePiece;
  double prix =0;
  double prixUnit;
};

double calculerPrix(const int& nb,const double& prixUnit);
void calculerPrix(produit& monprix);

int main(){
  setlocale(LC_CTYPE, "fra");
  produit patate{5240,0,0.50};
  calculerPrix(patate);
  cout << "Prix des patates : " << patate.prix;
  return(0);
}

void calculerPrix(produit& monprix){
  monprix.prix = calculerPrix(monprix.nbDePiece,monprix.prixUnit);
}

double calculerPrix(const int& nb,const double& prixUnit){
  return(nb*prixUnit);
}