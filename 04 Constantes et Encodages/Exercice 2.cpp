// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Constantes et Encodages
#include <iostream>
#include<string>

int main()
{
    int unInt = 45;
    std::cout << "unInt vaut: " << unInt << std::endl;

    double unDouble = 45.3;
    std::cout << "unDouble vaut: " << unDouble << std::endl;

    float unFloat = 4.5e9;
    std::cout << "unFloat vaut: " << unFloat << std::endl;

    char unCaractere = 'E';
    std::cout << "unCaractere vaut: " << unCaractere << std::endl;

    char unAutreCaractere = '6';
    std::cout << "unAutreCaractere vaut: " << unAutreCaractere << std::endl;

    std::string unChaine = "Bonjour \t\t tiens on a saute 2 tab";
    std::cout << "unChaine vaut: " << unChaine << std::endl;

    std::string unAutreChaine = "Re-Bonjour, tiens un \\, un \', et un \" ";
    std::cout << "unAutreChaine vaut: " << unAutreChaine << std::endl;

    return 0;
}