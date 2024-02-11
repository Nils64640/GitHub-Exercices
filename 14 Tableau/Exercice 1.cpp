#include <iostream>

using namespace std;

int main(){
	int a = 1;
	int b = 0;
	int foo[] = { 3,12,45,4,8,22,11 };
	foo[0] = a;
	cout << foo[0] <<endl;
	foo[a] = 3;
	cout << foo[a] << endl;
	b = foo[a + 2];
	cout << b << endl;
	foo[foo[a]] = foo[2] + 5;
	cout << foo[3] << endl;
	cout << foo[0] << "," <<foo[1] << "," << foo[2] << "," << foo[3] << "," << foo[4] << "," << foo[5] << "," << foo[6] << endl;
}