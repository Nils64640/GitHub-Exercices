#include <iostream>
using namespace std;

double puissance(int x, short y){
  int z=x;
  for(short i=y-1;i>0;i--){
    z=z*x;
  }
  return (z);
}
double puissance(double x, short y){
  double z=x;
  for(short i=y-1;i>0;i--){
    z=z*x;
  }
  return (z);
}

int main()
{
	cout << puissance (3,8) << endl;
  cout << puissance (2,3) << endl;
  return(0);
}