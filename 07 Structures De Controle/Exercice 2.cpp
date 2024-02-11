// Nombres Mystère
// génération de nombre aléatoire entre 0 et 100
//
//

#include <cstdlib>              // pour std::rand()
#include <ctime>                // pour std::time()
#include <iostream>             // pour std::cin, std::cout
#include <limits>               // pour cin.ignore
#include <clocale>              // pour gestion des caractères accentués


int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

    const int maxi(100);            //le max
    const int mini(0);              // le min
    std::srand(std::time(0));       // utilise le temps time courant comme base du générateur aléatoire

    // Générer le nombre mystère et demander de deviner la valeur
    int mystere = std::rand() % maxi + mini;       // génération d'un nombre mystère compris entre mini et maxi

    // dire au joueur s'il est trop haut, trop bas ou s'il a gagné
    // lui dire de retenter (il a droit à 10 essais)
    // ...
    int chiffre;
    std::string reponse;
    while (reponse != "non") {
        for (int boucle = 0; boucle != 10; boucle++) {
            std::cout << "Votre chiffre (0 à 100): " << '\n';
            std::cin >> chiffre;
            if (chiffre == mystere) {
                std::cout << "Bravo vous avez gagné\n";
                break;
            }
            else if (chiffre > mystere) {
                std::cout << "Au dessus du chiffre mystère.\n";
            }
            else
                std::cout << "En dessous du chiffre mystère.\n";
        }
        if (chiffre != mystere) {
            std::cout << "Perdu\n";
        }
        std::cout << "Le nombre mystère était: " << mystere << '\n';
        std::cout << "Voulez vous rejouez (oui/non): " << '\n';     // Demander s'il veut rejouer, et si oui recommencer, sinon dire au revoir
        std::cin >> reponse;
        mystere = std::rand() % maxi + mini;
    }
    std::cin.ignore(32767, '\n');                      // efface ce qui pourrait trainer dans le buffer
    std::cout << "Taper Entrée pour continuer";     // équivalent à system("pause")
    std::cin.ignore(32767, '\n');
}