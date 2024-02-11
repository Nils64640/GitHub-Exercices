#include <iostream>
using namespace std;

template < typename var1,typename var2,typename var3>
var1 resistParallele(var2 a, var3 b){
  double x,y;
  x=(1/(double)a);
  y=(1/(double)b);
  return (1/(x+y));
}

int main()
{
	cout << resistParallele<int,float,float> (3,8) << endl;
  cout << resistParallele<double,int,int> (10.0,20.0) << endl;
  return(0);
}
