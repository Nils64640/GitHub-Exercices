/*******************************************************************************************
Calcul IMC
Fonctions surchargées
********************************************************************************************/


#include <iostream>
#include <limits>               // pour cin.ignore
#include <string>
#include <clocale>              // pour gestion des caractères accentués
using namespace std;           // remplace les std:: partout, mais attention aux homonymes


void saisie(const string& message, int min, int max)		// 1ère définition de la fonction 
{
	int varSaisie;
	cout << message;
	// lit et teste cin pour voir si c'est un int et dans les bornes
	while (!(cin >> varSaisie) || varSaisie<min || varSaisie>max)
	{
		if (cin.fail()) cout << "Saisissez un entier svp: ";      // erreur sur le type de saisie
		else			cout << "Saisissez entre " << min << " et " << max << ":";  // erreur sur min/max
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

int saisie(const string& message, int min)					// 2ème définition de la fonction  (surcharge)
{
	int varSaisie;
	cout << message;
	// lit et teste cin pour voir si c'est un int et dans les bornes
	while (!(cin >> varSaisie) || varSaisie<min)
	{
		if (cin.fail()) cout << "Saisissez un entier svp: ";      // erreur sur le type de saisie
		else			cout << "Saisissez supérieur à " << min << ":";  // erreur sur min
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return varSaisie;
}

float saisie(const string& message, float min, float max)	// 3ème définition de la fonction  (surcharge)
{
	float varSaisie;
	cout << message;
	// lit et teste cin pour voir si c'est un int et dans les bornes
	while (!(cin >> varSaisie) || varSaisie<min || varSaisie>max)
	{
		if (cin.fail()) cout << "Saisissez un entier svp: ";      // erreur sur le type de saisie
		else			cout << "Saisissez entre " << min << " et " << max << ":";  // erreur sur min/max
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return varSaisie;
}




int main()
{
	setlocale(LC_CTYPE, "fra");     // pour gestion des caractères accentués

	// appel de la 1ère définition de la fonction
	saisie("Veuillez saisir votre âge (18 à 65 ans):", 18, 65);

	// appel de la 3ème définition de la fonction
	float poids = saisie("Saisir poids en Kg (30 à 230Kg, par 0.1Kg):", (float)30.0, (float)230.0);

	// appel de la 2ème définition de la fonction
	int taille = saisie("Saisir taille en cm (min 130cm):", 130);

	float imc = 10000 * poids / (taille*taille);	// calcul IMC avec taille en m

	cout << "IMC de : " << imc << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');      // efface ce qui pourrait trainer dans le buffer
	cout << "Taper Entrée pour continuer";                    // équivalent à system("pause") 
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

