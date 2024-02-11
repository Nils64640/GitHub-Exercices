// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Opérateurs

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int var1, var2; // déclaration des varibles

    cout << "var1 :" << endl; // bloc initialisation de var1
    cin >> var1;
    cin.ignore(32767, '\n'); 
    
    cout << "var2:" << endl; // bloc initialisation de var2
    cin >> var2;
    cin.ignore(32767, '\n');

    if (var1 == var2) { // vérifie si var1 est égale var2 
      cout << "true"; // quand var1 == var2 
    }
    else {
      cout << "false"; // quand var1 != var2
    }
}