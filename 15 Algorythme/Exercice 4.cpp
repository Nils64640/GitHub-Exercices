// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Algorithme
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int nombre, i, resultat{ 1 };

    cout << "Entrez un entier positif :\n";
    cin >> nombre; cin.ignore(32737, '\n');

    for (i = 1; i != nombre+1; i++) {
        resultat = resultat * i;
   }
    cout << "Factorielle de " << nombre << " = " << resultat;
}