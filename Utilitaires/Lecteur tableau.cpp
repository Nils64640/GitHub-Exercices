// Simple

#include <iostream>
#include <array>
using namespace std;

void printarray (int arg[], int lenght){  // Affiche tous les valeurs d'un tableau
  for(int n=0; n<lenght; ++n){
    cout << arg[n] << ",";
  }
  cout << "\n";
}

int main (){
  int firstarray[] = {5,10,15};
  int secondarray[] = {2,4,6,8,10};
  printarray(firstarray,3);
  printarray(secondarray,5);
}

// ligne & Colonne

#include <iostream>
#include <array>
using namespace std;

void printarray (int arg[3][5], int ligne, int colonne){  // Affiche tous les valeurs d'un tableau
  for(int n=0; n<ligne; ++n){
    for(int p=0; p<colonne; ++p){
    cout << arg[n][p] << ",";
    }
    cout << "\n";
  }
  cout << "\n";
}

int main (){
  int firstarray [3][5] = {{2,4,6,8,10},{1,3,5,7,9},{12,14,16,18,20}};
  printarray(firstarray,3,5);
}
