#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "FR");//pour encodage windows 1252 de base

    int quantite = 0;
    string nomPrenom, naissance;
    cout << "Saisissez la quantité de Yens (¥) à changer:" << endl;
    cin >> quantite;
    cout << endl;
    cin.ignore(32767, '\n');
    cout << "Saisissez vos noms et prénoms sur la même ligne, séparés par des espaces:" << endl;
    getline(cin, nomPrenom);
    cin.ignore(32767, '\n');
    cout << "Saisissez votre date de naissance (exactement ce format: JJ\\MM\\AAAA):" << endl;
    cin >> naissance;
    cout << endl;
    cin.ignore(32767, '\n');
    cout << "Merci " << nomPrenom << ", né le " << naissance << ", nous vous réservons " << quantite << "¥" << endl << endl;

    cout << "Tapez Entrée pour continuer";
    cin.ignore(32767, '\n');
}