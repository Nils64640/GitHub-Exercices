/***********************************************************************************
Fonctions, Surcharges, templates			BTS SN IR Hasparren

Logiciel d'architecture:
A partir de la saisie de dimensions (en m) d'une pièce: longueur, largeur, hauteur
Calculer surface au sol(m²), la surface des murs(m²) et le volume de la pièce(m3)
***********************************************************************************/
#include<iostream>

template <typename type>
type calcul(type& surfSol, type& surfMur);

int main()
{
	setlocale(LC_CTYPE, "fra");

	double surfSol{ 0.0 }; // variales
	double surfMur{ 0.0 };
	double volume{ 0.0 };

	int surfSol2{ 0 };
	int surfMur2{ 0 };
	int volume2{ 0 };

	volume = calcul<double>(surfSol, surfMur);

	std::cout << "Pièce de volume : " << volume << "m3, "
		" Surface au sol : " << surfSol << "m2, "
		" Surface des murs: " << surfMur << "m2\n";

	volume2 = calcul<int>(surfSol2, surfMur2);

	std::cout << "Pièce de volume : " << volume2 << "m3, "
		" Surface au sol : " << surfSol2 << "m2, "
		" Surface des murs: " << surfMur2 << "m2\n";

	std::cin.ignore();
}

template <typename type>
type calcul(type& surfSol, type& surfMur) {
	double long1{ 0.0 }; // variales
	double larg1{ 0.0 };
	double haut1{ 0.0 };

	std::cout << "\nEntrez la longueur de la pièce en mètres: ";
	std::cin >> long1; std::cin.ignore();
	std::cout << "Entrez la largeur de la pièce en mètres: ";
	std::cin >> larg1; std::cin.ignore();
	std::cout << "Entrez la hauteur de la pièce en mètres: ";
	std::cin >> haut1; std::cin.ignore();

	surfMur = type(2 * larg1 * haut1 + 2 * long1 * haut1);
	surfSol = type(larg1 * long1);
	return(type(larg1 * long1 * haut1));
}