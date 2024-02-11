#include <iostream>
using namespace std;

template < typename var1>
double resistParallele(var1 a, var1 b){
  double x,y;
  x=(1/(double)a);
  y=(1/(double)b);
  return (1/(x+y));
}

int main()
{
	cout << resistParallele<int> (3,8) << endl;
  cout << resistParallele<double> (10.0,20.0) << endl;
  return(0);
}
