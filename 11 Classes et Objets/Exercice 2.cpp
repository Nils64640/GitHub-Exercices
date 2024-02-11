#include <iostream>
using namespace std;

class Imeuble {
	double largeur, longueur, hauteur, latitude, longitude;
  public: 
	  void set_val(double, double,double,double,double);
	  double surface() { return longueur * largeur; }
    double volume() { return longueur * largeur * hauteur; }
};

void Imeuble::set_val(double a, double b,double c, double d,double e) {
	largeur = a;
	longueur = b;
  hauteur = c;
  latitude = d;
  longitude = e;
}

int main() {
	Imeuble imeuble1, imeuble2;
	imeuble1.set_val(3, 4, 5, 6, 7);
  imeuble2.set_val(13, 14, 15, 16, 17);
	cout << "Surface : " << imeuble1.surface() << "\t Volume : " << imeuble1.volume() << endl;
  cout << "Surface : " << imeuble2.surface() << "\t Volume : " << imeuble2.volume() << endl;
	return 0;
}