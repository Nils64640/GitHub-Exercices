// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Algorithme
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    const float tauxDollar{0.9065};
    float euros, dollars;
    cout << "Entrez la valleur en €:\n";
    cin >> euros; cin.ignore(32737, '\n');
    dollars = euros/tauxDollar;
    cout << "Valleur en dollars : " << dollars << "$\n";
    if (tauxDollar<1){
      cout << "C'est un bon taux.\n"; 
    }
    else {
      cout << "Attendez un peu.\n"; 
    }
}