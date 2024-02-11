// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Constantes et Encodages
#include <iostream>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");
    double temps = 1000;
    const double son = 340.29;
    cout << "Temps d'aller retour (en seconde): ";
    cin >> temps;
    double tra = (son * temps) / 2;
    cout << "Le v�hicule est � une distance de " << tra << "m.";
}