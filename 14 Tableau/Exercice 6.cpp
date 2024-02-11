#include <iostream>
#include <array>
using namespace std;

void afficher(int array[]){
  for (int n = 0; n < 10; ++n) {
        if (n == 9) {
            cout << array[n];
        }
        else {
            cout << array[n] << ",";
        }
    }
}

void tri(int array[]){
  int c;
  for (int i = 0; i < 10; ++i) {
        for (int n = 0; n < 10; ++n) {
            if (array[i] < array[n]) {
                c = array[i];
                array[i] = array[n];
                array[n] = c;
            }
        }
    }
}

int main() {
    int myarray[10] = { 5,7,4,3,4,10,5,22,9,11 };
    afficher(myarray);
    cout << endl;
    tri(myarray);
    afficher(myarray);
    cin.ignore();
    return 0;
}