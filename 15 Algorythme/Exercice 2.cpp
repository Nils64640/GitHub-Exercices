// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Algorithme
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    float mensualite, capital, tauxMensuelle, tauxAnuelle, calc1, calc2, calc3;
    int nbAnees, nbMois;

    cout << "Montant du capital emprunté :\n";
    cin >> capital; cin.ignore(32737, '\n');
    cout << "Nombre d'années :\n";
    cin >> nbAnees; cin.ignore(32737, '\n');
    cout << "Taux Anuelle (exemple 5,5 %) :\n";
    cin >> tauxAnuelle; cin.ignore(32737, '\n');

    nbMois = nbAnees*12;
    tauxMensuelle = tauxAnuelle/100/12;
    calc1 = capital*tauxMensuelle;
    calc2 = (1+tauxMensuelle)*nbMois;
    calc3 = calc2 - 1;
    mensualite = calc1*(calc2/calc3);

    cout << "Mensualité : " << mensualite;

}