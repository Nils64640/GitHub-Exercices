#include <iostream>
#include <clocale> // pour gestion des caractères accentués
using namespace std;

bool calcul(int naissance,int maj,int& age){
  age = 2021-naissance;
  return(age<maj);
}

int main(){

int naissance, maj, age;
bool majeur;
setlocale(LC_CTYPE, "fra");  // pour gestion des caractères accentués

cout << "Année de naissance : ";
cin >> naissance;cin.ignore(32735, '\n');
cout << "Age de majorité : ";
cin >> maj;cin.ignore(32735, '\n');
majeur = calcul(naissance,maj,age);
cout << "L'élève à " << age << endl;
if (majeur == true){
  cout << "L'élève est mineur";
}
else{
  cout << "L'élève est majeur";
}
return 0;
}