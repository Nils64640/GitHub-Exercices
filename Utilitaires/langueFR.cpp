// Méthode 1

#include <clocale>              // pour gestion des caractères accentués
int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
}

// Méthode 2

#include<Windows.h>             // pour gestion des caractères accentués
int main()
{
    setlocale(LC_ALL, "French_France.1252");  // pour gestion des caractères accentués
    SetConsoleOutputCP(1252);                 // permet au cout d'afficher des caractères accentués
    SetConsoleCP(1252);                       // permet au cin d'afficher des caractères accentués
}