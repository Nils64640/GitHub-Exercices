// Pour Testez le programme copier le et coller dans le repl C++ Test Zone
// Constantes et Encodages
#include <iostream>
#include <string>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "esp");
    string nombre = "";
    int numero = 0;
    cout << "Da un número de 0 a 10: "; //cout << "Da un n\xFAmero de 0 a 10: ";
    cin >> numero;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "¿ Cómo te llamas ? : "; //cout << "\xBF C\xF3mo te llamas ? : ";
    getline(cin, nombre);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Te llamas " << nombre << " y elegiste el número " << numero ; //cout << "Te llamas " << nombre << " y elegiste el n\xFAmero " << numero ;
}