/********************************************************************************
15/11/2016     Calcul de masse de vis

Dans une usine de fabrication de vis on a besoin de calculer la masse d’acier nécessaire pour la fabrication de vis sans
tête de longueurs différentes. Il existe 3 diamètres possibles (6 ,8, 10mm), et pour chaque diamètre 3 longueurs (50,
55, 60mm). Donc l’utilisateur saisit le diamètre qu’il veut fabriquer, et le programme lui donne la masse d’acier totale
pour fabriquer 1000 vis de chaque longueur pour le diamètre donné. Masse volumique de l’acier : 8000Kg/m 3 .
Contraintes :
-      Pour le calcul proprement dit (qui est toujours le même pour un diamètre et une longueur donnés) on
utilisera une fonction qui sera appelée plusieurs fois dans le programme.
-       La fonction est d’abord déclarée en début de programme, et n’est définie qu’après le main en fin de
programme.
-      Les 3 longueurs possibles sont des variables constantes définies en début de main
-      La fonction retourne la masse d’acier nécessaire pour 1000 vis de chaque longueur pour un diamètre donnés
(approximativement un cylindre)
-      Les paramètres de la fonction sont :
o   Le diamètre en mm (passage par valeur)
o   La première longueur (passage par valeur)
o   La deuxième longueur (passage par valeur)
o   La troisième longueur (passage par valeur)
o   La masse d’une vis en première longueur (calculé par la fonction, donc passage par référence)
o   La masse d’une vis en deuxième longueur (calculé par la fonction, donc passage par référence)
o   La masse d’une vis en troisième longueur (calculé par la fonction, donc passage par référence)
-      La fonction principale affiche : le diamètre choisi, la première longueur et la masse de la vis, la deuxième
longueur et la masse de la vis, la troisième longueur et la masse de la vis, la masse totale d’acier.
************************************************************************************/

#include <iostream>             // pour std::cin, std::cout
#include <limits>               // pour cin.ignore
#include <clocale>              // pour gestion des caractères accentués
#include <cmath>  

// Déclaration (prototype) de la fonction calculVis
double calculVis(					//retourne la masse d'acier pour 1000 vis de chaque
	short diametre,					//diamètre vis choisi par l'utilisateur
	short longueur1,				//1ere longueur de vis
	short longueur2,				//2eme longueur de vis
	short longueur3,				//3eme longueur de vis
	double& masseVisLongueur1,		//masse d'une vis  de longueur1
	double& masseVisLongueur2,		//masse d'une vis  de longueur2
	double& masseVisLongueur3		//masse d'une vis  de longueur3
);

int main()
{
	const int nbeVisSerie{ 1000 };	// 1000 vis par diamètre
	const short diam1{ 6 };			// 1er diamètre possible en mm
	const short diam2{ 8 };			// 2eme diamètre possible en mm
	const short diam3{ 10 };		// 3eme diamètre possible en mm
	const short long1{ 50 };		// 1ere longueur possible en mm
	const short long2{ 55 };		// 2eme longueur possible en mm
	const short long3{ 60 };		// 3eme longueur possible en mm

	short diam{ 0 };
	double masseAcierTotale{ 0 };
	double masseVisLong1{ 0 };
	double masseVisLong2{ 0 };
	double masseVisLong3{ 0 };

	setlocale(LC_CTYPE, "fra");			// pour gestion des caractères accentués
	using namespace std;
	

	cout << "Saisissez le diamètre des vis à fabriquer (6, 8 ou 10mm): ";

	while (!(cin >> diam) || (diam != diam1 && diam != diam2 && diam != diam3))
	{
		if (cin.fail())                                   // erreur sur le type de saisie
		{
			cout << "Saisie incorrecte, recommencez : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else                                                // erreur sur la plage de saisie
		{
			std::cout << "Le diamètre doit être 6, 8 ou 10mm, recommencez : ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	masseAcierTotale = calculVis(diam, long1, long2, long3, masseVisLong1, masseVisLong2, masseVisLong3);
	cout << "Diamètre: " << diam << " mm" << endl;
	cout << "Masse vis de longueur " << long1 << " mm : " << masseVisLong1 << " g" << endl;
	cout << "Masse vis de longueur " << long2 << " mm : " << masseVisLong2 << " g" << endl;
	cout << "Masse vis de longueur " << long3 << " mm : " << masseVisLong3 << " g" << endl;
	cout << "Masse totale d'acier pour 1000 vis de chaque: " << masseAcierTotale << " Kg" << endl << endl;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Appuyez une touche pour continuer";
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


// Définition de la fonction calculVis
double calculVis(				//retourne la masse d'acier pour 1000 vis de chaque
	short diametre,				//diamètre vis choisi par l'utilisateur
	short longueur1,			//1ere longueur de vis
	short longueur2,			//2eme longueur de vis
	short longueur3,			//3eme longueur de vis
	double& masseVisLongueur1,	//masse d'une vis  de longueur1
	double& masseVisLongueur2,	//masse d'une vis  de longueur2
	double& masseVisLongueur3	//masse d'une vis  de longueur3
)
{
	const double pi = acos(-1);
	const int masseVolAcier{ 8000 };// 8000Kg/m3 soit 0.008g/mm3

	masseVisLongueur1 = pi*pow(diametre / 2, 2)*longueur1*masseVolAcier / 1000000;	//1 vis, en grammes
	masseVisLongueur2 = pi*pow(diametre / 2, 2)*longueur2*masseVolAcier / 1000000;
	masseVisLongueur3 = pi*pow(diametre / 2, 2)*longueur3*masseVolAcier / 1000000;
	return masseVisLongueur1 + masseVisLongueur2 + masseVisLongueur3;				// 1000 de chaque (*1000), en Kg (/1000)
}


/*#include <iostream>             // pour std::cin, std::cout
#include <clocale>              // pour gestion des caractères accentués
using namespace std;
double calculMasse(int diametre, int longueur1, int longueur2, int longueur3, double& masse1, double& masse2, double& masse3);
int main()
{
    setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués
    double masse1, masse2, masse3, masse{ 0 };
    int diametre, longueur1{ 50 }, longueur2{ 55 }, longueur3{ 60 };
    cout << "Saissisez le diamètre des vis à fabriquer (6, 8 ou 10mm): ";
    cin >> diametre; cin.ignore(65535, '\n');

    masse = calculMasse(diametre, longueur1, longueur2, longueur3, masse1, masse2, masse3);

    cout << "Diamètre: " << diametre << " mm\n";
    cout << "Masse vis de longueur " << longueur1 << " mm : " << masse1 << " g\n";
    cout << "Masse vis de longueur " << longueur2 << " mm : " << masse2 << " g\n";
    cout << "Masse vis de longueur " << longueur3 << " mm : " << masse3 << " g\n";
    cout << "Masse totale d'acier pour 1000 vis de chaque: " << masse << " Kg\n";
    return(0); // fin de programme
}

double calculMasse(int diametre, int longueur1, int longueur2, int longueur3, double& masse1, double& masse2, double& masse3) {
    double masse;
    double pi = 3.14159265359;
    double acier = 0.008;
    masse1 = 2 * pi * diametre * longueur1 * acier;
    masse2 = 2 * pi * diametre * longueur2 * acier;
    masse3 = 2 * pi * diametre * longueur3 * acier;
    masse = (masse1 * 1000 + masse2 * 1000 + masse3 * 1000) / 1000;
    return(masse);
}*/