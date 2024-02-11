#include <iostream>
#include <clocale>
#include<math.h>

double calcul(double a, double b, double c, double& x1, double& x2);

int main()
{
	setlocale(LC_CTYPE, "fra");  // pour gestion des caractères accentués
	double a{ 0.0 };
	double b{ 0.0 };
	double c{ 0.0 };
	double delta{ 0.0 };

	double x1{ 0.0 };
	double x2{ 0.0 };

	std::cout << "Saisie des coefficients de type DOUBLE d'une équation de la forme ax²+bx+c=0";
	std::cout << "\nEntrez a : ";
	std::cin >> a; std::cin.ignore(32537, '\n');
	std::cout << "Entrez b : ";
	std::cin >> b; std::cin.ignore(32537, '\n');
	std::cout << "Entrez c : ";
	std::cin >> c; std::cin.ignore(32537, '\n');

	delta = calcul(a, b, c, x1, x2);
	std::cout << "Calcul de racines pour coefficiants de type DOUBLE";
	if (delta < 0) {
		std::cout << "\nDelta est négatif, l'équation n'admet donc pas de solution réelle";
	}
	else if (delta > 0) {
		std::cout << "\nDelta est positif : x1= " << x1 << "   x2= " << x2;
	}
	else {
		std::cout << "\nDelta est nul : x= " << x1;
	}
	return(0);
}

double calcul(double a, double b, double c, double& x1, double& x2)
{
	double delta;
	delta = std::pow(b, 2) - 4 * a * c;
	if (delta >= 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
	}
	return(delta);
}