
#include <iostream>
#include<string>
#include<Windows.h> // #include<locale>

int main()
{
    setlocale(LC_ALL, "French_France.1252");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252); // setlocale(LC_CTYPE, "fra");
    const std::string unChaine = "\\\\\"double backslash\"\\\\";
    std::cout << unChaine << std::endl;

    const std::string unAutreChaine = R"(©¥'\"|"/'¥©)";
    std::cout << unAutreChaine << std::endl;

    const std::string unTrucChaine = "\xA9\xA5\x27\x5C\x22\x7C\x22\x2F\x27\xA5\xA9";
    std::cout << unTrucChaine << std::endl;
    return 0;
}