#include <iostream>
#include <string>
#include <clocale>
using namespace std;

void printmessage(){
  cout << "Ceci est un printmessage \n";
}

void printmessage(string message){
  cout << message <<"\n";
}

void printmessage(string message,int nb){
  for(int i = nb;i>0;i--){
    cout << message <<"\n";
  }
}

int main()
{
	setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
  printmessage();
  printmessage("mdr2");
  printmessage("mdr",15);
}