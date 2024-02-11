// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Entrees Sorties
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nom,prenom;
    int age;
    double bac;
    cout << "Votre prenom : ";
    cin >> prenom;
    cout << "Votre age : ";
    cin >> age;
    cout << "Votre moyenne au BAC : ";
    cin >> bac;
    cout << "Votre nom : ";
    cin >> nom;
    cout << "Felicitations "<<nom<<" "<<prenom<<", vous avez "<<age<<" ans, et vous avez obtenu le bac avec une note moyenne de "<<bac<<".";
    return 0;
}