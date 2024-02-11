// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Constantes et Encodages
#include <iostream>
#include<string>
#include<locale>

int main()
{
    setlocale(LC_CTYPE, "fra");
    const std::string unChaine = "\\\\\"double backslash\"\\\\";
    std::cout << unChaine << std::endl;

    const std::string unAutreChaine = R"(©¥'\"|"/'¥©)";
    std::cout << unAutreChaine << std::endl;

    const std::string unTrucChaine = "\xA9\xA5\x27\x5C\x22\x7C\x22\x2F\x27\xA5\xA9";
    std::cout << unTrucChaine << std::endl;
    return 0;
}