// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Structure de controle
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <string>
using namespace std;

const float pi{3.16};
float cote,cote2, cote3;
string reponse;

int carre(){
  cout << "Entrez la mesure d'un coté : ";
  cin >> cote;cin.ignore(32737, '\n');
  cout << "Le Périmètre : " << cote*4 << "\nL'aire : " << cote*cote;
  return(0);

}
int rectangle(){
  cout << "Entrez la largeur : ";
  cin >> cote;cin.ignore(32737, '\n');
  cout << "Entrez la longueur : ";
  cin >> cote2;cin.ignore(32737, '\n');
  cout << "Le Périmètre : " << cote*2+cote2*2 << "\nL'aire : " << cote*cote2;
  return(0);

}
int cercle(){
  cout << "Entrez la mesure du rayon : ";
  cin >> cote;cin.ignore(32737, '\n');
  cout << "Diamètre : "<< cote*2 <<"\nLe Périmètre : " << cote*2*pi << "\nL'aire : " << cote*cote*pi;
  return(0);

}
int triangle(){
  cout << "Entrez la mesure d'un coté : ";
  cin >> cote;cin.ignore(32737, '\n');
  cout << "Entrez la mesure du second coté : ";
  cin >> cote2;cin.ignore(32737, '\n');
  cout << "Entrez la mesure du troisième coté : ";
  cin >> cote3;cin.ignore(32737, '\n');
  if(cote == cote2 == cote3){
    cout << "Le triangle est équilatèrale" << "\nLe Périmètre est : " << cote+cote2+cote3;
    }
  else if(cote*cote==cote2*cote2+cote3*cote3||cote2*cote2==cote*cote+cote3*cote3||cote3*cote3==cote2*cote2+cote*cote){
    cout << "Le triangle est rectangle";
    if((cote == cote2 && cote == cote3)||(cote == cote2 && cote2 == cote3)||(cote2 == cote3 && cote == cote3)){
      cout << " et isocèle";
    }
    cout << "\nLe Périmètre est : " << cote+cote2+cote3;
    if(cote*cote==cote2*cote2+cote3*cote3){
      cout << "\nL'aire est : " << (cote2*cote3)/2;
    }
    else if(cote2*cote2==cote*cote+cote3*cote3){
      cout << "\nL'aire est : " << (cote*cote3)/2;
    }
    else{
      cout << "\nL'aire est : " << (cote2*cote)/2;
    }
  }
  else if((cote == cote2 && cote == cote3)||(cote == cote2 && cote2 == cote3)||(cote2 == cote3 && cote == cote3)){
    cout << "Le triangle est isocèle" << "\nLe Périmètre est :" << cote+cote2+cote3;
  }
  else{
    cout << "Le triangle est quelconque" << "\nLe Périmètre est :" << cote+cote2+cote3;
  }
  return(0);

}

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    cout << "La Figure est (carré,rectangle,cercle ou triangle) :\n";
    cin >> reponse;cin.ignore(32737, '\n');
    if(reponse == "carre"|| reponse == "carré"||reponse == "Carre"|| reponse == "Carré"){
      carre();
    }
    else if(reponse == "rectangle"|| reponse == "Rectangle"){
      rectangle();
    }
    else if(reponse == "cercle"|| reponse == "Cercle"){
      cercle();
    }
    else if(reponse == "triangle"|| reponse == "Triangle"){
      triangle();
    }
}

