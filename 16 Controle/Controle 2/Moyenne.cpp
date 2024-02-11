/*Algorythme
Variables:
    ENTIER note = 0 
    FLOTANT moyenne = 0 , reponse = 0 

Début Programme :
Tant que (reponse != -1)
    afficher("Saissisez une note (ou -1 pour finir): ")
    lire reponse
    Si (reponse == -1)
        Si (note == 0)
            afficher("Vous n'avez pas saisi de notes..")
            fin de programme
        Fin Si
     Afficher("Votre moyenne : " << moyenne/note)
     Fin Si
     Sinon 
        moyenne = moyenne+reponse
        note = note +1
     Fin Sinon
Fin Tant que
fin du programme
*/
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int note{ 0 };
    float reponse{ 0 }, moyenne{ 0 };

    while (reponse != -1) {
        cout << "Saissisez une note (ou -1 pour finir): ";
        cin >> reponse; cin.ignore(32537, '\n');
        if (reponse == -1) {
            if (note == 0) {
                cout << "Vous n'avez pas saisi de notes..";
                return(0); // fin de programme
            }
            cout << "Votre moyenne : " << moyenne / note;
        }
        else {
            moyenne += reponse;
            note++;
        }
    }
    return(0); // fin de programme
}

/* Ou 
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    int note{ -1 };
    float reponse{ 0 }, moyenne{ 0 };

    while (reponse != -1) {
        moyenne += reponse;
        note++;
        cout << "Saissisez une note (ou -1 pour finir): ";
        cin >> reponse; cin.ignore(32537, '\n');
    }
    if (note == 0) {
        cout << "Vous n'avez pas saisi de notes..";
    }
    else {
        cout << "Votre moyenne : " << moyenne / note;
    }        
    return(0); // fin de programme
}
*/