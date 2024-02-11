/***********************************************************************************
Fonctions, Surcharges, templates			BTS SN IR Hasparren

Logiciel d'architecture:
A partir de la saisie de dimensions (en m) d'une pièce: longueur, largeur, hauteur
Calculer surface au sol(m²), la surface des murs(m²) et le volume de la pièce(m3)
***********************************************************************************/
#include<iostream>

double calcul(double& surfSol, double& surfMur);
double calcul(double& surfSol);

int main()
{
	setlocale(LC_CTYPE, "fra");

	double surfSol{ 0.0 }; // variales
	double surfMur{ 0.0 };
	double volume{ 0.0 };

	volume = calcul(surfSol, surfMur);

	std::cout << "Pièce de volume : " << volume << "m3, "
		" Surface au sol : " << surfSol << "m2, "
		" Surface des murs: " << surfMur << "m2\n\n";

	volume = calcul(surfSol);

	std::cout << "Pièce de volume : " << volume << "m3, "
		" Surface au sol : " << surfSol << "m2\n";

	std::cin.ignore();
}

double calcul(double& surfSol, double& surfMur) {
	double long1{ 0.0 }; // variales
	double larg1{ 0.0 };
	double haut1{ 0.0 };

	std::cout << "Entrez la longueur de la pièce en mètres: ";
	std::cin >> long1; std::cin.ignore();
	std::cout << "Entrez la largeur de la pièce en mètres: ";
	std::cin >> larg1; std::cin.ignore();
	std::cout << "Entrez la hauteur de la pièce en mètres: ";
	std::cin >> haut1; std::cin.ignore();

	surfMur = 2 * larg1 * haut1 + 2 * long1 * haut1;
	surfSol = larg1 * long1;
	return(larg1 * long1 * haut1);
}

double calcul(double& surfSol) {
	double long1{ 0.0 }; // variales
	double larg1{ 0.0 };
	double haut1{ 0.0 };

	std::cout << "Entrez la longueur de la pièce en mètres: ";
	std::cin >> long1; std::cin.ignore();
	std::cout << "Entrez la largeur de la pièce en mètres: ";
	std::cin >> larg1; std::cin.ignore();
	std::cout << "Entrez la hauteur de la pièce en mètres: ";
	std::cin >> haut1; std::cin.ignore();

	surfSol = larg1 * long1;
	return(larg1 * long1 * haut1);
}