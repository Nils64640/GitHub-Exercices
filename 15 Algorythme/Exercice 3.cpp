// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Algorithme
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int nb, diviseur1, diviseur2, reste, nbIterations, i, limite;
    bool trouve;

    cout << "Entrez un nombre :\n";
    cin >> nb; cin.ignore(32737, '\n');

    if (nb<2){
      cout << "Le nombre doit être supérieur à 1 !\n";
    }
    else{
      nbIterations = 0;
      limite = nb-1;
      trouve = false;

      for(i=2; i!= nb; i++){
      nbIterations+=1;
      reste = nb%i;
      if(reste == 0){
        trouve = true;
        diviseur1 = i;
        diviseur2 = nb/i;
        break;
      }
    }
    if(trouve){
      cout << nb <<" n'est pas premier !\n";
      cout << "Il est divisible par " << diviseur1 << " et " << diviseur2 << endl;
    }
    else{
      cout << nb <<" est un nombre PREMIER !\n";
    }
    cout << "Résultat obtenu en " << nbIterations << " itérations";
    }
}