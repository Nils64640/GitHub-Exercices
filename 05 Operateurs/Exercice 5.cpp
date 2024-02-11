// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Opérateurs

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nombre; // déclaration des varibles
    cout << "Nombre : " << endl;
    cin >> nombre;
    cin.ignore(32767, '\n');

    bool pair= nombre % 2 ? false : true; // vérifie si pair
    bool positif= nombre > 0 ? true : false; // vérifie si positif
    string message = (pair && positif && nombre != 0) ? "Vrai" : "Faux"; // vérifie toute les conditions + si c'est pas égale à 0
    cout << message;
}