#include <iostream>
#include <string>
using namespace std;

int main()
{
    string monNom{"BANQUET"};
    string monPrenom{"Léon"};
    cout << "Bonjour "+monPrenom+" "+monNom << endl;
    cout << monNom+" ça a "+to_string(monNom.length())+" lettres" << endl;
    cout << "La 4ème lettre de votre nom est : " <<monNom.at(3) << endl;
    cout << "Vos initiales sont : " <<monPrenom.front() <<monNom.front() << endl;
    return 0;
}