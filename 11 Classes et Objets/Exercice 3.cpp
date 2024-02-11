#include <iostream>
using namespace std;

class Imeuble {
	double largeur, longueur, hauteur, latitude, longitude;
public: 
  Imeuble();
	Imeuble(double, double,double,double,double);
	double surface() { return longueur * largeur; }
  double volume() { return longueur * largeur * hauteur; }
  double getLatitude() { return latitude;}
  double getLongitude() { return longitude;}
  void setLatitude(double x) { latitude = x;}
  void setLongitude(double x) { longitude = x;}
};

Imeuble::Imeuble() {
	largeur = 0;
	longueur = 0;
  hauteur = 0;
  latitude = 5000000;
  longitude = 5000000;
}

Imeuble::Imeuble(double a, double b,double c, double d,double e) {
	largeur = a;
	longueur = b;
  hauteur = c;
  latitude = d;
  longitude = e;
}

int main() {
	Imeuble imeuble1(3, 4, 5, 6, 7), imeuble2;
	cout << "Surface : " << imeuble1.surface() << "\t Volume : " << imeuble1.volume() << "\t Latitude : " << imeuble1.getLatitude() << "\t Longitude : " << imeuble1.getLongitude() << endl;
  cout << "Surface : " << imeuble2.surface() << "\t Volume : " << imeuble2.volume() << "\t Latitude : " << imeuble2.getLatitude() << "\t Longitude : " << imeuble2.getLongitude() << endl;
	return 0;
}