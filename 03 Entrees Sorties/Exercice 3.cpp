// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Entrees Sorties
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prenom{"Gael"};
    int age{ 14 }; 
    double moyenne{ 14.15 };
    string nom{ "Dupont" };
    cout << "Votre prenom : ";
    getline(cin, prenom);
    cout << "Votre age : ";
    cin >> age; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Votre moyenne au BAC : ";
    cin >> moyenne;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Votre nom : ";
    getline(cin, nom);
    cout << "Felicitations " << nom << " " << prenom << ", vous avez " << age << " ans, et vous avez obtenu le bac avec une note moyenne de " << moyenne << ".";
}