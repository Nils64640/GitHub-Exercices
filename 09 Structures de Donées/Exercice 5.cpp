#include <iostream>
#include <string>
#include <math.h>
using namespace std;

const double pi = acos(-1);

struct position {
  int x = 0;
  int y = 0;
};

struct cercle {
  int rayon;
  double surface;
  string couleur;
  position pos;
};

double calcSurface(int calcul) // version 1
{
  return(calcul*calcul*pi);
}

void calcSurface(cercle& calcul) // version 2
{
  calcul.surface=calcul.rayon*calcul.rayon*pi;
}

bool superposition(cercle c1,cercle c2)
{
  if((c1.pos.x-c2.pos.x)*(c1.pos.x-c2.pos.x)+(c1.pos.y-c2.pos.y)*(c1.pos.y-c2.pos.y)>(c1.rayon+c2.rayon)*(c1.rayon+c2.rayon)){
    return(false);
  }
  else {
    return(true);
  }
}

void affiche(cercle truc){
  cout << "Surface : " << truc.surface << " Couleur : " << truc.couleur << "\n";
}

int main()
{
	cercle forme1{10,0,"vert",250,250}, forme2{100,0,"violet",250,200};
  forme1.surface=calcSurface(forme1.rayon);
  affiche(forme1);
  calcSurface(forme2);
  affiche(forme2);
  cout << "Superposition : ";
  if (superposition(forme1,forme2) == true){
    cout << "Vraie";}
  else {
    cout << "Faux";
  }
  return(0);
}