// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Algorithme


/*
Déclarations
   Variables :   a, b, c, discriminant, racine1, racine2   en Réelle

Début

Ecrire ("Entrez a (ax²+bx+c) :")
Lire a
Si a == 0
  Fin de prog
Ecrire ("Entrez b (ax²+bx+c) :")
Lire b
Ecrire ("Entrez c (ax²+bx+c) :")
Lire c
discriminant = b²-4*a*c

Si discriminant < 0
    Ecrire ("N'a pas de solution dans les réelles")
Ou Si discriminant == 0
    racine1 = -b/(2a*c)
    Ecrire ("L'équation a une solution dans les réelles :",racine1)
Sinon
    racine1 = (-b+sqrt(discriminant))/(2a*c)
    racine2 = (-b-sqrt(discriminant))/(2a*c)
    Ecrire ("L'équation a deux solutions dans les réelles :",racine1," et ",racine2)
    */


#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <math.h>               // pour sqrt()
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    float a,b,c,discrimimant,racine1,racine2; // déclarations des variables

    cout << "Entrez a (ax²+bx+c) :\n";    // demande valeur de a
    cin >> a; cin.ignore(32737, '\n');    // récupère la valeur de a

    if(a == 0){
      return(0);
    }
    cout << "Entrez b (ax²+bx+c) :\n";    // demande valeur de b
    cin >> b; cin.ignore(32737, '\n');    // récupère la valeur de b
    cout << "Entrez c (ax²+bx+c) :\n";    // demande valeur de c
    cin >> c; cin.ignore(32737, '\n');    // récupère la valeur de c

    discrimimant = b * b - 4 * a * c;

    if (discrimimant < 0) {
        cout << "L'équation n'a pas de solution dans les réelles";
    }
    else if (discrimimant == 0) {
        racine1 = -b / (2 * a * c);
        cout << "L'équation a une solution dans les réelles :" << racine1;
    }
    else {
        racine1 = (-b + sqrt(discrimimant)) / (2 * a * c);
        racine2 = (-b - sqrt(discrimimant)) / (2 * a * c);
        cout << "L'équation a deux solution dans les réelles : x1 = " << racine1 << " et x2 = " << racine2;
    }
}