#include <iostream>
#include <string>
using namespace std;
const int max_y{ 1024 };

class Brique {
	unsigned int numero{ 0 };
	unsigned int x{ 0 };
	unsigned int y{ 0 };
	string couleur;
	unsigned int largeur{ 0 };
	unsigned int hauteur{ 0 };
	unsigned int descente{ 0 };
public:
  Brique(): numero{0},x{ 0 },y{ 0},largeur{0},hauteur{ 0 },descente{ 0 }{couleur = "noire";}
  Brique(unsigned int a,unsigned int b,unsigned int c,string d,unsigned int e,unsigned int f,unsigned int g): numero{a},x{ b },y{ c },largeur{e},hauteur{ f },descente{ g }{couleur = d;}
  void set_toutes_valeurs(unsigned int a,unsigned int b,unsigned int c,string d,unsigned int e,unsigned int f,unsigned int g)
  {
    numero = a;
    x =b; 
    y=c;
    couleur = d;
    largeur = e; 
    hauteur = f; 
    descente= g;
    }
  bool deplacer() {
    y += descente;
    if (y+hauteur>=max_y){
      y=max_y-hauteur;
      return false;
    }
    return true;
  }
  void afficher() {
	  cout << "Brique numero " << numero << " en x=" << x << "\tet y = " << y << endl; // affiche les statistiques d'une brique
  }

};

int main() {
	setlocale(LC_CTYPE, "fra"); // gestion des accents
	Brique brique1;
  brique1.set_toutes_valeurs( 1, 0, 0, "blanc", 1, 24, 44 );
	Brique brique2{ 2, 20, 0, "blanc", 1, 24, 55};
	brique1.afficher(); 
	brique2.afficher(); 
  while(true){
    if(brique1.deplacer()){
      brique1.afficher(); 
    }
    else if(brique2.deplacer()){
      brique2.afficher(); 
    }
    else {break;}

    if(brique2.deplacer()){
      brique2.afficher(); 
    }
    else if(brique1.deplacer()){
      brique1.afficher(); 
    }
    else {break;}
  }
	cout << "C'est fini !" << endl;
	brique1.afficher(); 
	brique2.afficher(); 

	return 0; // fin de programme
}