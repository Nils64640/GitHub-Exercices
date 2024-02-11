#include <iostream>
#include <string>
#include <clocale> // pour gestion des caractères accentués
using namespace std;

int calcul(string nom,string prenom,char& initiale4,char& initialeN,char& initialeP){
  initiale4 = nom.at(3);
  initialeN = nom.front();
  initialeP = prenom.front();

  return(nom.size());
}

int main(){

string nom,prenom;
int taille;
char initiale4,initialeN,initialeP;
setlocale(LC_CTYPE, "fra");  // pour gestion des caractères accentués

cout << "Votre nom : ";
cin >> nom;cin.ignore(32735, '\n');
cout << "Votre prénom : ";
cin >> prenom;cin.ignore(32735, '\n');
taille = calcul(nom,prenom,initiale4,initialeN,initialeP);
cout << "Votre nom possède " << taille<< " caractères, le 4ème caractère est "<< initiale4 << " et vos initiales sont "<<initialeN<<initialeP;
return 0;
}