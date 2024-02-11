#include <iostream>
using namespace std;

int main() 
{
  cout << "Taille de char : \t" << sizeof(char) << " octet \t" << sizeof(char)*8 << " bits \n";
  cout << "Taille de wchar_t : \t" << sizeof(wchar_t) << " octet \t" << sizeof(wchar_t)*8 << " bits \n\n";

  cout << "Taille de short int : \t" << sizeof(short int) << " octet \t" << sizeof(short int)*8 << " bits \n";
  cout << "Taille de int : \t" << sizeof(int) << " octet \t" << sizeof(int)*8 << " bits \n" ;
  cout << "Taille de long int : \t" << sizeof(long int) << " octet \t" << sizeof(long int)*8 << " bits \n";
  cout << "Taille de long long int:" << sizeof(long long int) << " octet \t" << sizeof(long long int)*8 << " bits \n\n";

  cout << "Taille de float : \t" << sizeof(float) << " octet \t" << sizeof(float)*8 << " bits \n";
  cout << "Taille de double : \t" << sizeof(double) << " octet \t" << sizeof(double)*8 << " bits \n";
  cout << "Taille de long double : " << sizeof(long double) << " octet \t" << sizeof(long double)*8 << " bits \n\n";

  cout << "Taille de bool : \t" << sizeof(bool) << " octet \t" << sizeof(bool)*8 << " bits \n" ;

  return 0;
}