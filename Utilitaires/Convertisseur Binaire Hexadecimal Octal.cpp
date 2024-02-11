#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
#include <bitset> 
#include <limits> 
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    int nombre;
    cout << "Saissisez votre nombre entier en base 10: ";
    cin >> nombre; cin.ignore(32537, '\n');

    cout  << "Le nombre "<< nombre << " en base 10 vaut \n"
          << "En Octal \t\t\t: "<< oct << nombre << "\n"
          << "En Hexadecimal \t\t: "<< hex << nombre << "\n"
          << "En Deximal \t\t\t: "<< dec << nombre << "\n"

          << "En Binaire (8bits)\t: "<< bitset<8>(nombre) << "\n"
          << "En Binaire (16bits)\t: "<< bitset<16>(nombre) << "\n";
    return(0); // fin de programme