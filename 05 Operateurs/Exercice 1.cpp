// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Opérateurs

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int article, emballage = 0; // déclaration des variables + initialisations
    cout << "Nombre d'article :" << endl;
    cin >> article; // initialisatin de article
    cin.ignore(32767, '\n');
    cout << "Quantité d'article par emballage:" << endl;
    cin >> emballage; // initialisatin de emballage (article par emballage)
    cin.ignore(32767, '\n');
    int reste = article % emballage; // Calcul du nombre d'article qui ne seront pas dans un emballage
    int nombreEmballage = article / emballage; // calcul du nombre d'emballage
    cout << "Il vous faudra " << nombreEmballage << " emballages et il restera " << reste << " articles";
}