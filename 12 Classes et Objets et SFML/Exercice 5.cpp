// à finir

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <Windows.h>

using namespace std;
const int max_x{ 800 };
const int max_y{ 800 };
double conv = (1392000 / max_y) / 35;

class Planete {
	string nom;
	long diametre;
	float distance_au_soleil;
	sf::Color couleur;
	sf::CircleShape planete;

public:
	Planete() : nom{ "x" }, diametre{ 0 }, distance_au_soleil{ 0 }{
		couleur = sf::Color::White;
	}
	Planete(string a, long b, float c, sf::Color d) : nom{ a }, diametre{ b }, distance_au_soleil{ c }{
		couleur = d;
	}
	string getName() {
		return(nom);
	}
	long getDiametre() {
		return(diametre);
	}
	float getDistance_au_soleil() {
		return(distance_au_soleil);
	}
	sf::Color getCouleur() {
		return(couleur);
	}

	sf::CircleShape getPlanete() {
		return planete;
	}

};

int main() {
	setlocale(LC_CTYPE, "fra"); // gestion des accents
	sf::RenderWindow window(sf::VideoMode(max_y, max_y), "SFML works");
	Planete soleil{"Soleil", 1392000 , 0};
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(soleil.getPlanete());
		window.display();
	}
	return 0; // fin de programme
}