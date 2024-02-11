// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Structure de controle
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    char clavier{ 'I' };
    cout << "Taper sur une des touches de la rangée supérieure du clavier (de A à Y) en majuscules ou minuscules.\n";
    while(clavier!='*'){
        cin >> clavier; cin.ignore(32767, '\n');
        switch (clavier) {
        case 'a':
        case'A':
            cout << "Vous avez tapez sur la 1er touche : « "<< clavier << " » !\n";
            break;
        case 'z':
        case'Z':
            cout << "Vous avez tapez sur la 2ème touche : « " << clavier << " » !\n";
            break;
        case 'e':
        case'E':
            cout << "Vous avez tapez sur la 3ème touche : « " << clavier << " » !\n";
            break;
        case 'r':
        case'R':
            cout << "Vous avez tapez sur la 4ème touche : « " << clavier << " » !\n";
            break;
        case 't':
        case'T':
            cout << "Vous avez tapez sur la 5ème touche : « " << clavier << " » !\n";
            break;
        case 'y':
        case'Y':
            cout << "Vous avez tapez sur la 6ème touche : « " << clavier << " » !\n";
            break;
        default:
            cout << "Erreur\n";
        }
        cout << "Si appui sur * sortie du programme, sinon recommencer.\n";
    }
    return(0);
}
// ou
/*
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    char reponse{ 'o' },clavier;
    while(reponse!='*'){
        cout << "Taper sur une des touches de la rangée supérieure du clavier (de A à Y) en majuscules ou minuscules.\n";
        cin >> clavier; cin.ignore(32767, '\n');
        switch (clavier) {
        case 'a':
            cout << "Vous avez tapez sur la 1er touche : « a » !\n";
            break;
        case 'z':
            cout << "Vous avez tapez sur la 2ème touche : « z » !\n";
            break;
        case 'e':
            cout << "Vous avez tapez sur la 3ème touche : « e » !\n";
            break;
        case 'r':
            cout << "Vous avez tapez sur la 4ème touche : « r » !\n";
            break;
        case 't':
            cout << "Vous avez tapez sur la 5ème touche : « t » !\n";
            break;
        case 'y':
            cout << "Vous avez tapez sur la 6ème touche : « y » !\n";
            break;
        case 'A':
            cout << "Vous avez tapez sur la 1er touche : « A » !\n";
            break;
        case 'Z':
            cout << "Vous avez tapez sur la 2ème touche : « Z » !\n";
            break;
        case 'E':
            cout << "Vous avez tapez sur la 3ème touche : « E » !\n";
            break;
        case 'R':
            cout << "Vous avez tapez sur la 4ème touche : « R » !\n";
            break;
        case 'T':
            cout << "Vous avez tapez sur la 5ème touche : « T » !\n";
            break;
        case 'Y':
            cout << "Vous avez tapez sur la 6ème touche : « Y » !\n";
            break;
        default:
            cout << "Erreur\n";
        }
        cout << "Si appui sur * sortie du programme, sinon recommencer.\n";
        cin >> reponse;
    }
    return(0);
}
*/