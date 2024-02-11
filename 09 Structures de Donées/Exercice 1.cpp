#include <iostream>
#include <string>
#include <clocale>
using namespace std;

const double pi = 3.14;

struct cercle {
  int rayon;
  double surface;
  string couleur;
  int x;
  int y;
};

double calcSurface(int calcul) // version 1
{
  return(calcul*calcul*pi);
}

void calcSurface(cercle& calcul) // version 2
{
  calcul.surface=calcul.rayon*calcul.rayon*pi;
}

void affiche(cercle truc){
  cout << "Surface : " << truc.surface << " Couleur : " << truc.couleur << "\n";
}

int main()
{
	cercle forme1{10,0,"vert",250,250}, forme2{2,0,"vert",50,550};
  forme1.surface=calcSurface(forme1.rayon);
  affiche(forme1);
  calcSurface(forme2);
  affiche(forme2);
  return(0);
}