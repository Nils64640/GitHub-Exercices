// Visual Studio Only
#include <iostream>
#include <string>
#include <Windows.h>    // pour encodage console

using namespace std;
int main()
{
    setlocale(LC_ALL, "French_France.1252");//pour encodage windows 1252 de base
    SetConsoleOutputCP(1252);                //pour les cout (encodage console 1252)
    SetConsoleCP(1252);                        //pour les cin (encodage clavier 1252)

    int annee;
    bool estDivisible4,estDivisible100,estDivisible400,nestDivisible4,nestDivisible100,nestDivisible400;

    cout << "Saisir l'année : ";
    cin >> annee; cin.ignore(32767, '\n');
    //cas 1
    estDivisible4 = annee % 4 ? false : true;
    estDivisible100 = annee % 100 ? false : true;
    estDivisible400 = annee % 400 ? false : true;

    //cas 2
    nestPasDivisible4 = annee % 4;
    nestPasDivisible100 = annee % 100;
    nestPasDivisible400 = annee % 400;

    estDivisible4 = !nestPasDivisible4;
    estDivisible100 = !nestPasDivisible100;
    estDivisible400 = !nestPasDivisible400;

    string message = (estDivisible4 && !estDivisible100 || estDivisible400) ? "Bissextile" : " Pas Bissextile";

    cout << message << endl;

    return 0;
}
