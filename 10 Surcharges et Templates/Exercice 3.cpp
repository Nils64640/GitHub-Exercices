#include <iostream>
using namespace std;

double resistParallele(int a, int b){
  double x,y;
  x=(1/(double)a);
  y=(1/(double)b);
  return (1/(x+y));
}
double resistParallele(double a, double b){
  double x,y;
  x=(1/(double)a);
  y=(1/(double)b);
  return (1/(x+y));
}

int main()
{
	cout << resistParallele(10,20) << endl;
  cout << resistParallele(10.0,20.0) << endl;
  return(0);
}