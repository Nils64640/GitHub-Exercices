#include <iostream>
#include <array>
#include <algorithm>
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
    sort(begin(myarray),end(myarray));
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