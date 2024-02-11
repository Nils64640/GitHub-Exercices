// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Opérateurs

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    int annee; // déclaration des varibles
    cout << "Saisir l'année : " << endl;
    cin >> annee;cin.ignore(32767, '\n');

    bool divisible4 = annee % 4 ? true : false;
    bool divisible100 = annee % 100 ? true : false;
    bool divisible400 = annee % 400 ? true : false;

    string message = (divisible4 && !divisible100 || divisible400) ? "Bissextile" : "Pas bissextile";

    cout << message;
}