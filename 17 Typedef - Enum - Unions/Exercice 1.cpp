
#include <iostream>
#include <string>


int main()
{
	using std::cout;

	using ull = unsigned long long;

	enum class systemeSolaire : int {Mercure=0, Venus, Terre, Mars, Jupiter, Saturne, Uranus, Neptune};

	const ull distMercure = 58000000;
	const ull distVenus = 108000000;
	const ull distTerre = 150000000;
	const ull distMars = 228000000;
	const ull distJupiter = 778000000;
	const ull distSaturne = 1427000000;
	const ull distUranus = 2869000000;
	const ull distNeptune = 4497000000;

	systemeSolaire planete;
	int saisie;

	cout << "Saisissez un numero de planete\n  0:Mercure\n  1:Venus\n  2:Terre\n"
		  << "  3:Mars\n  4:Jupiter\n  5:Saturne\n  6:Uranus\n  7:Neptune\n";
	
	std::cin >> saisie; std::cin.ignore();
	planete = systemeSolaire(saisie);
	
	switch (planete)
	{
	case systemeSolaire::Mercure:
		cout << "Mercure: " << distMercure << " Km du Soleil\n";
		break;
	case systemeSolaire::Venus:
		cout << "Venus: " << distVenus << " Km du Soleil\n";
		break;
	case systemeSolaire::Terre:
		cout << "Terre: " << distTerre << " Km du Soleil\n";
		break;
	case systemeSolaire::Mars:
		cout << "Mars: " << distMars << " Km du Soleil\n";
		break;
	case systemeSolaire::Jupiter:
		cout << "Jupiter: " << distJupiter << " Km du Soleil\n";
		break;
	case systemeSolaire::Saturne:
		cout << "Saturne: " << distSaturne << " Km du Soleil\n";
		break;
	case systemeSolaire::Uranus:
		cout << "Uranus: " << distUranus << " Km du Soleil\n";
		break;
	case systemeSolaire::Neptune:
		cout << "Neptune: " << distNeptune << " Km du Soleil\n";
		break;
	default:
		cout << "Erreur de saisie\n";
		break;
	}
	
	std::cin.ignore();
	return 0;
}
