// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// 
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int boucle;
    string reponse, var{ "" }, var2{ "" };
    char operateur = '0';

    cout << "Entrez votre opération :\n";
    getline(cin, reponse);
    for (boucle = 0; reponse.length() > boucle; boucle++) {
        switch (reponse.at(boucle)) {
        case '+':
            operateur = reponse.at(boucle);
            break;
        case '-':
            operateur = reponse.at(boucle);
            break;
        case '*':
            operateur = reponse.at(boucle);
            break;
        case '/':
            operateur = reponse.at(boucle);
            break;
        case '%':
            operateur = reponse.at(boucle);
            break;
        case ' ':
            break;
        default:
            if (operateur == '0') {
                var += reponse.at(boucle);
            }
            else {
                var2 += reponse.at(boucle);
            }
        }
    }
    switch (operateur) {
    case '+':
        cout << "Résultat : " << stoi(var) + stoi(var2);
        break;
    case '-':
        cout << "Résultat : " << stoi(var) - stoi(var2);
        break;
    case '*':
        cout << "Résultat : " << stoi(var) * stoi(var2);
        break;
    case '/':
        cout << "Résultat : " << stoi(var) / stoi(var2);
        break;
    case '%':
        cout << "Résultat : " << stoi(var) % stoi(var2);
        break;
    }
}
