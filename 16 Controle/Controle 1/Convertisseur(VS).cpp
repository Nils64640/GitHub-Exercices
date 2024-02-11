
// Devoir 1 C++

/*******************************************************************************************
Programme qui teste les compétences suivantes:
- include nécessaires
- constante typée
- affiche des caractères spéciaux (\) et ASCII particuliers (¥) et français
- getline
- cin avec controle saisie
- cin.ignore
********************************************************************************************/

#include <iostream>				// pour cin, cout
#include <string>				// pour les strings
#include <clocale>              // pour gestion des caractères accentués
#include <Windows.h>			// pour réglage caractères console

int main()
{
	setlocale(LC_ALL, "french_France.oem850");
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);

	const char lesYen{ '¥' };			// constante

	std::string nomAdresse{ "" };		// déclarations et init uniformisées
	std::string dateNaissance{ "" };
	int change{ 0 };

	std::cout << "Saisissez la quantité de Yens (" << lesYen << ") à changer: \n";
	std::cin >> change;		std::cin.ignore(32767, '\n');

	std::cout << "\nSaisissez vos noms et prénoms sur la même ligne, séparés par des espaces: \n";
	getline(std::cin, nomAdresse);

	std::cout << "\nSaisissez votre date de naissance (exactement ce format: JJ\\MM\\AAAA): \n";
	getline(std::cin, dateNaissance);

	
	std::cout << "\nMerci " << nomAdresse << ", né le " << dateNaissance << ", nous vous réservons " << change << lesYen << "\n\n";

	std::cout << "Taper Entrée pour continuer";			// équivalent à system("pause") 
	std::cin.ignore(32767, '\n');
}


