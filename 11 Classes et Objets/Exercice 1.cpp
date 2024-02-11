#include <iostream>
using namespace std;

class Rectangle {
	double longueur, largeur;
  public: 
	  void set_values(double, double);
	  double aire() { return longueur * largeur; }
};

void Rectangle::set_values(double x, double y) {
	largeur = x;
	longueur = y;
}

int main() {
	Rectangle rect;
	rect.set_values(3, 4);
	cout << "Aire : " << rect.aire();
	return 0;
}