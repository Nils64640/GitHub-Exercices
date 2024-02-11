#include <iostream>
#include <array>
#include <vector>
#include <algorithm> 
using namespace std;

void Clear()
{
    cout << "\x1B[2J\x1B[H";
}

int main(){
  vector<double> notes;
  double moyenne;
  double input;
  while(true)
  {
    cout << "saisir votre note : ";
    cin >> input;
    cin.ignore();
    Clear();

    
    cout << endl;
    
    if(input == -1){
      break;
    }
    notes.push_back(input);
    sort(begin(notes),end(notes));
    
    for (int n = 0; n <= notes.size()-1; ++n) 
    {
      if (n == notes.size()) {
        cout << notes.at(n);
        }
      else {
        cout << notes.at(n) << "\t";
        }
    }
    moyenne = 0;
    for (int n = 0; n <= notes.size()-1; ++n) {
      moyenne += notes.at(n);
    }
    moyenne = moyenne/notes.size();
    cout << endl << "moyenne : " << moyenne <<endl; 
  }
}
