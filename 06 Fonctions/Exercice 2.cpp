#include <iostream>
#include <clocale> // pour gestion des caractères accentués
#include <limits> // pour cin.ignore
using namespace std;
// définition de la fonction  fahrenheitCelsius

int fahrenheitCelsius (double& temper) { // avec en paramètre une référence vers un double
  cout << "address temper : "<<&temper<<endl;
  if (temper < -459.67) return -1; //return erreur inférieur à valeur min
  else {
    temper = (temper - 32.0) / 1.8; // conversion et résultat dans la même variable
    return 0 ; // return ok
  }
}

int main()
{

setlocale(LC_CTYPE, "fra");  // pour gestion des caractères accentués

double temp;
cout << "address temp : "<<&temp<<endl;
cout << "Tapez la valeur d'une température en °F: "; cin >> temp;

if (fahrenheitCelsius(temp) == -1) //appel Fonction, identique pour passage par valeur et référence
  cout << "Erreur saisie température < -459.67 \n";
else
  cout << "La température en °C est: " << temp << endl;
cin.ignore(numeric_limits<streamsize>::max(), '\n');;// efface ce qui pourrait trainer dans le
cout << "Taper Entrée pour continuer"; //équivalent à systen("pause")
cin.ignore(numeric_limits<streamsize>::max(), '\n');
return 0;
}