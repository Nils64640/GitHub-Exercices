#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void afficher(array<int, 10> &array){
  for (int n = 0; n < array.size(); ++n) {
        if (n == 9) {
            cout << array.at(n);
        }
        else {
            cout << array.at(n) << ",";
        }
    }
}
void tri(array<int, 10> &array){
  sort(begin(array),end(array));
}

int main() {
    array<int, 10> myarray = { 5,7,4,3,4,10,5,22,9,11 };
    int c;
    afficher(myarray);
    cout << endl;
    tri(myarray);
    afficher(myarray);
    cin.ignore();
    return 0;
}