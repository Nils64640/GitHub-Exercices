// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
//Fonctions

#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <math.h> 
using namespace std;

double pythagore(double x, double y){
  double a;
  a= x*x+y*y;
  a=sqrt(a);
  cout << "x : " << &x << endl;
  cout << "y : " << &y << endl;
  cout << "a : " << &a << endl;
  return a;
}

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    double u,v,w,adj,opp,hypo;

    cout << "Saissisez valeur du coté adjacent: ";
    cin >> u; cin.ignore(32537, '\n');
    cout << "Saissisez valeur du coté opposé: ";
    cin >> v; cin.ignore(32537, '\n');
    w=pythagore(u,v);
    cout << "L'hypothénuse vaut : " << w << endl;
    cout << "u : " << &u << endl;
    cout << "v : " << &v << endl;
    cout << "w : " << &w << endl;
    return(0); // fin de programme
}
