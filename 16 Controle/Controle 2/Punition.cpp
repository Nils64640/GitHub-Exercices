/* Algorythme
Variables:
    ENTIER ligne , i
    CHAR matiere
    STRING phrase
Début Programme :

afficher("Saissisez le nombre de lignes: ")
lire ligne
afficher("Saissisez la phrase de la punition: ")
lire phrase
afficher("Saissisez la matière concernée

M pour Maths,F pour Français, I pour Informatique : ")
lire matiere

Si (matiere==f)
    afficher("Pour le professeur de Français:")
    Sauter ligne
Fin Si
Si (matiere==F)
    afficher("Pour le professeur de Français:")
    Sauter ligne
Fin Si
Si (matiere==m)
    afficher("Pour le professeur de Maths:")
    Sauter ligne
Fin Si
Si (matiere==M)
    afficher("Pour le professeur de Maths:")
    Sauter ligne
Fin Si
Si (matiere==i)
    afficher("Pour le professeur d'Informatique:")
    Sauter ligne
Fin Si
Si (matiere==I)
    afficher("Pour le professeur d'Informatique:")
    Sauter ligne
Fin Si
Sinon
    Sauter ligne
Fin Sinon

Jusqu'à que (i;ligne>i;i=i+1)
    		afficher(phrase)
    		Sauter ligne
Fin Jusqu'à que
fin du programme
*/

#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
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