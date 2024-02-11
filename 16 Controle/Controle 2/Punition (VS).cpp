#include <iostream>             // pour std::cin, std::cout
#include <Windows.h>              // pour gestion des caractères accentués
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "French_France.1252");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    string phrase;
    int ligne;
    char matiere;

    cout << "Saissisez le nombre de lignes: ";
    cin >> ligne; cin.ignore(32537, '\n');
    cout << "Saissisez la phrase de la punition: ";
    getline(cin, phrase);
    cout << "Saissisez la matière concernée\n\nM pour Maths,F pour Français, I pour Informatique : ";
    cin >> matiere; cin.ignore(32537, '\n');

    switch (matiere) {
    case 'm':
    case 'M':
        cout << "\n\nPour le professeur de Français:\n\n";
        break;
    case 'f':
    case 'F':
        cout << "\n\nPour le professeur de Maths:\n\n";
        break;
    case 'i':
    case 'I':
        cout << "\n\nPour le professeur d'Informatique:\n\n";
        break;
    default:
        cout << "\n\n";
        break;
    }

    for (int i(0); ligne > i; i++) {
        cout << phrase <<"\n\n";
    }

    return(0); // fin de programme
}