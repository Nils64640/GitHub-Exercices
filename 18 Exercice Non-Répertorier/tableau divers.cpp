#include <iostream>
#include <cstdlib>              // pour std::rand()
#include <ctime>                // pour std::time()
#include <iostream>             // pour std::cin, std::cout
#include <limits>               // pour cin.ignore
#include <clocale>              // pour gestion des caractères accentués
using namespace std;
const int maxi(100);            //le max
const int mini(0);              // le min

int trieur(int tab[]){
  int mem;
  bool check = true;
  while (check) {
        check = false;
        for (int n = 0; n < 9; ++n) {
            if (tab[n] > tab[n + 1]) {
                check = true;
                mem = tab[n];
                tab[n] = tab[n + 1];
                tab[n + 1] = mem;
            }
        }
  }
  return(tab[10]);
}

int trieur2(int* tab){
  int mem;
  bool check = true;
  while (check) {
        check = false;
        for (int n = 0; n < 9; ++n) {
            if (tab[n] > tab[n + 1]) {
                check = true;
                mem = tab[n];
                tab[n] = tab[n + 1];
                tab[n + 1] = mem;
            }
        }
  }
  return(tab[10]);
} 

/*int trieur(int tab[]){
  int mem;
  int mem2;
  for (int b = 0; b < 10; ++b) {
    mem = tab[b];
    for (int n = b; n < 10; ++n) {
      if (mem > tab[n]) {
        mem = tab[n];
        mem2 = n;
      }
    }
    tab[mem2] = tab[b];
    tab[b] = mem;
  }
  return(tab[10]);
} */

int randomiseur(int tab[]){
  srand(time(0));
  int random = (rand() % maxi-mini)+mini;
  for (int b = 0; b < 10; ++b) {
    random = (rand() % maxi-mini)+mini;
    tab[b]=random;
  }
  return(tab[10]);
}

void lecteur (int arg[], int lenght){  // Affiche tous les valeurs d'un tableau
  for(int n=0; n<lenght; ++n){
    cout << arg[n] << ",";
  }
  cout << "\b\n";
}

int main(){
  int table[10];
  randomiseur(table);
  lecteur(table, 10);
  trieur2(table);
  lecteur(table, 10);
  cout << sizeof(table)/sizeof(table[0]);
}
