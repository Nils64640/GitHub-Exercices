// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Structure de controle
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int nombre, ancien, apres, boucle, boucle2;
    string reponse;

    while (reponse != "o" || reponse != "O") {
        ancien = 1;
        apres = 1;
        cout << "Nombre de lignes :\n";
        cin >> nombre; cin.ignore(32737, '\n');
        for (boucle = 0; nombre != boucle; boucle++) {
            for (boucle2 = 0; boucle2 != apres; boucle2++) {
                cout << "*";
            }
            apres = ancien + apres;
            ancien = boucle2;
            cout << endl;
        }
        cout << "Rejouez (O/N) :\n";
        cin >> reponse; cin.ignore(32737, '\n');
    }
}