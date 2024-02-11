#include <iostream>
#include <string>
using namespace std;

struct rectangle{
  int largeur = 1;
  int hauteur;
  int x;
  int y;
};

struct cercle{
  int x;
  int y;
  int rayon;
};
void droite(cercle& ,rectangle& ,rectangle&);
void gauche(cercle& ,rectangle& ,rectangle&);

int main(){
  setlocale(LC_CTYPE, "fra");
  rectangle rectangle1{1,20,1,0};
  rectangle rectangle2{1,20,100,0};
  cercle cercle1{10,10,3};

  cout << "Position du rectangle 1 en X : "<< endl;
  cin >> rectangle1.x; cin.ignore();
  cout << "Position du rectangle 1 en Y : "<< endl;
  cin >> rectangle1.y; cin.ignore();
  cout << "Hauteur du rectangle 1 : "<< endl;
  cin >> rectangle1.hauteur; cin.ignore();
  cout << "Position du rectangle 2 en X : "<< endl;
  cin >> rectangle2.x; cin.ignore();
  cout << "Position du rectangle 2 en Y : "<< endl;
  cin >> rectangle2.y; cin.ignore();
  cout << "Hauteur du rectangle 2 : "<< endl;
  cin >> rectangle2.hauteur; cin.ignore();
  cout << "Position du cercle en X : "<< endl;
  cin >> cercle1.x; cin.ignore();
  cout << "Position du cercle en Y : "<< endl;
  cin >> cercle1.y; cin.ignore();
  cout << "Rayon du cercle : "<< endl << endl;
  cin >> cercle1.rayon; cin.ignore();

  cout << "Position du rectangle 1 : "<< endl<< "X = " << rectangle1.x << endl;
  cout << "Ymin = " << rectangle1.y << endl;
  cout << "Ymax = " << rectangle1.y+rectangle1.hauteur << endl << endl;
  cout << "Position du rectangle 2 : "<< endl<< "X = " << rectangle2.x << endl;
  cout << "Ymin = " << rectangle2.y << endl;
  cout << "Ymax = " << rectangle2.y+rectangle2.hauteur << endl << endl;

  cout << "Position du cercle : "<< endl<< "X = " << cercle1.x << endl;
  cout << "Ymin = " << cercle1.y-cercle1.rayon << endl;
  cout << "Ymax = " << cercle1.y+cercle1.rayon << endl << endl;
  droite(cercle1, rectangle1, rectangle2);
}

void droite(cercle& cercle,rectangle& rectangle1,rectangle& rectangle2){
  cercle.x=rectangle2.x;
  if((cercle.y+cercle.rayon > rectangle2.y && cercle.y+cercle.rayon < rectangle2.y+rectangle2.hauteur) || (cercle.y-cercle.rayon > rectangle2.y && cercle.y-cercle.rayon < rectangle2.y+rectangle2.hauteur)){
    cout << "Boing\n";
    cercle.y=cercle.y-3;
    gauche(cercle,rectangle1,rectangle2);
  }
  else{
    cout << "Perdu\n";
  }
}

void gauche(cercle& cercle,rectangle& rectangle1,rectangle& rectangle2){
  cercle.x=rectangle1.x;
  if((cercle.y+cercle.rayon > rectangle1.y && cercle.y+cercle.rayon < rectangle1.y+rectangle1.hauteur) || (cercle.y-cercle.rayon > rectangle1.y && cercle.y-cercle.rayon < rectangle1.y+rectangle1.hauteur)){
    cout << "Boing\n";
    cercle.y=cercle.y-3;
    droite(cercle,rectangle1,rectangle2);
  }
  else{
    cout << "Perdu\n";
  }
}
