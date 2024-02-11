#include <iostream>
#include <clocale> // pour gestion des caractères accentués

using namespace std;
double pi = 3.14;

bool cercle(double cote, double& surface,double& circonfernece){
  
  circonfernece = cote*2*pi;
  surface = cote*cote*pi;
  return(surface<1);
}

int main(){
double cote, surface, circonference;
bool infA;
setlocale(LC_CTYPE, "fra");  // pour gestion des caractères accentués

cout << "Entrez la mesure du rayon : ";
cin >> cote;cin.ignore(32737, '\n');
infA = cercle(cote, surface, circonference);
cout <<"\nLa circonférence : " << circonference << "\nLa surface : " << surface;
if(infA ==true){
  cout << "\nLa surface est inferieur à 1m² ";
}
else{
  cout << "\nLa surface est supérieur à 1m² ";
}
return 0;
}