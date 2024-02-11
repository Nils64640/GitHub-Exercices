// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Entrees Sorties
#include <iostream>
#include <string>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");
    string nom, adresse = "xxx";
    int age = 1000;
    cout << "Votre nom : ";
    getline(cin, nom);
    cout << "Votre année de naissance : ";
    cin >> age;
    age = 2021 - age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Votre adresse : ";
    getline(cin, adresse);
    cout << "Vous êtes " << nom << ", vous avez " << age << " ans, et vous habitez à " << adresse << ".";
}