/* Brutforce Version C 
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 10> myarray{ 5,7,4,3,4,10,5,22,9,11 };
    int a;
    for (int b = 0; b < 9; ++b) {
        for (int n = 0; n < 9; ++n) {
            if (myarray[n] > myarray[n + 1]) {
                a = myarray[n];
                myarray[n] = myarray[n + 1];
                myarray[n + 1] = a;
            }
        }
    }
    for (int n = 0; n < 10; ++n) {
      if (n==9){
        cout << myarray[n];
      }
      else{
        cout << myarray[n] << ",";
      }
    }
    cin.ignore();
    return 0;
}
*/
// Brutforce
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 10> myarray = { 5,7,4,3,4,10,5,22,9,11 };
    int c;
  for (int n = 0; n < myarray.size(); ++n) {
        if (n == 9) {
            cout << myarray.at(n);
        }
        else {
            cout << myarray.at(n) << ",";
        }
    }
    cout << endl;
    for (int i = 0; i < myarray.size(); ++i) {
        for (int n = 0; n < myarray.size(); ++n) {
            if (myarray.at(i) < myarray.at(n)) {
                c = myarray.at(i);
                myarray.at(i) = myarray.at(n);
                myarray.at(n) = c;
            }
        }
    }
    for (int n = 0; n < myarray.size(); ++n) {
        if (n == 9) {
            cout << myarray.at(n);
        }
        else {
            cout << myarray.at(n) << ",";
        }
    }
    cin.ignore();
    return 0;
}