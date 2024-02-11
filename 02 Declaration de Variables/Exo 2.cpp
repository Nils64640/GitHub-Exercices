#include <iostream>
#include <string>
using namespace std;

int main()
{
    string maChaine = "Hasparren";
    cout << maChaine.length() << endl;
    cout << maChaine.front() << endl;
    cout << maChaine.back() << endl;
    cout << maChaine.at(1) << endl;
    cout << maChaine.at(2) << endl;
    cout << maChaine.at(3) << endl;

    system("pause"); // dans windows garde la console ouverte en fin d'execution
    return 0;

}
