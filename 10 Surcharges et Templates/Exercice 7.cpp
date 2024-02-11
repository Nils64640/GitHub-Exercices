#include <iostream>
using namespace std;

template < typename var1,typename var2,typename var3>
var1 puissance(var2 x, var3 y){
  var1 z=x;
  for(var3 i=y-1;i>0;i--){
    if (i<1){
      x=(x+1)*i;
    }
    z=z*x;
  }
  return (z);
}

int main()
{
	cout << puissance<double,float,float> (3,7.5) << endl;
  cout << puissance<double,int,int> (10.0,20.0) << endl;
  return(0);
}