#include <iostream>
#include <string>
using namespace std;

int calculEmballage(int article,int emballage, int& reste){
  reste = article % emballage;// Calcul du nombre d'article qui ne seront pas dans un emballage
  return(article / emballage);
}
int main()
{
    int article(1), reste, emballage = 0; // déclaration des variables + initialisations
    cout << "Nombre d'article :" << endl;
    cin >> article; // initialisatin de article
    cin.ignore(32767, '\n');
    cout << "Quantité d'article par emballage:" << endl;
    cin >> emballage; // initialisatin de emballage (article par emballage)
    cin.ignore(32767, '\n');
    // Calcul du nombre d'article qui ne seront pas dans un emballage
    int nombreEmballage = calculEmballage(article,emballage,reste); // calcul du nombre d'emballage
    cout << "Il vous faudra " << nombreEmballage << " emballages et il restera " << reste << " articles";
}