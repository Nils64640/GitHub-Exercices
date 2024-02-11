// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Structure de controle

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    int x; // déclaration des varibles
    cout << "Nombre : " << endl;
    cin >> x; cin.ignore(32767, '\n');

    cout << "Le nombre est ";
    if (x == 0) { // vérifie si pair == 0 
        cout << "x is positive"; // quand pair == 0 
    }
    else if (x<0){
        cout << "x is negative"; // quand pair != 0
    }
    else { // vérifie si nombre est égale à 0
        cout << "x is 0"; // quand nombre positif
    }
}