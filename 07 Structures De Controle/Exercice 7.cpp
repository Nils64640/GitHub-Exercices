// uniquement Visual Studio
#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    cout << "anim :  ";
    while(true){
        cout << "\b|";
        Sleep(200);
        cout << "\b\\";
        Sleep(200);
        cout << "\b-";
        Sleep(200);
        cout << "\b/";
        Sleep(200);
    }
    return(0);
}