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

double calcSurface(int calcul)
{
  return(calcul*calcul*pi);
}

void affiche(cercle truc){
  cout << "Surface : " << truc.surface << " Couleur : " << truc.couleur << "\n";
}

int main()
{
	cercle forme1{10,0,"vert",250,250}, forme2{2,0,"vert",50,550};
  forme1.surface=calcSurface(forme1.rayon);
  affiche(forme1);
  forme2.surface=calcSurface(forme2.rayon);
  affiche(forme2);
  return(0);
}