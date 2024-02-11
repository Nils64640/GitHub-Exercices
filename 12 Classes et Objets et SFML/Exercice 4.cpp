#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <windows.h>

using namespace std;
const int max_x{ 1024 };
const int max_y{ 1024 };

class Brique {
	unsigned int numero{ 0 };
	unsigned int x{ 0 };
	unsigned int y{ 0 };
	sf::Color couleur;
	unsigned int largeur{ 0 };
	unsigned int hauteur{ 0 };
	unsigned int descente{ 0 };
	sf::RectangleShape brique;

public:
	Brique() : numero{ 0 }, x{ 0 }, y{ 0 }, largeur{ 0 }, hauteur{ 0 }, descente{ 0 }{
		couleur = sf::Color::Black;
		brique.setSize(sf::Vector2f(largeur, hauteur));
		brique.setPosition(x, y);
		brique.setFillColor(couleur);
	}
	Brique(unsigned int a, unsigned int b, unsigned int c, sf::Color d, unsigned int e, unsigned int f, unsigned int g) : numero{ a }, x{ b }, y{ c }, largeur{ e }, hauteur{ f }, descente{ g }{
		couleur = d;
		brique.setSize(sf::Vector2f(largeur, hauteur));
		brique.setPosition(x, y);
		brique.setFillColor(couleur);
	}
	void set_toutes_valeurs(unsigned int a, unsigned int b, unsigned int c, sf::Color d, unsigned int e, unsigned int f, unsigned int g)
	{
		numero = a;
		x = b;
		y = c;
		couleur = d;
		largeur = e;
		hauteur = f;
		descente = g;
		brique.setSize(sf::Vector2f(largeur, hauteur));
		brique.setPosition(x, y);
		brique.setFillColor(couleur);
	}
	bool deplacer() {
		y += descente;
		if (y + hauteur >= max_y) {
			y = max_y - hauteur;
			brique.setPosition(x, y);
			return false;
		}
		brique.setPosition(x, y);
		return true;
	}

	void afficher() {
		cout << "Brique numero " << numero << " en x=" << x << "\tet y = " << y << endl; // affiche les statistiques d'une brique
	}

	sf::RectangleShape getBrique() {
		return brique;
	}

};

int main() {
	setlocale(LC_CTYPE, "fra"); // gestion des accents
	sf::RenderWindow window(sf::VideoMode(max_y, max_y), "SFML works");
	Brique brique1;
	brique1.set_toutes_valeurs(1, 0, 0, sf::Color::White, 50, 24, 44);
	Brique brique2{ 2, 120, 0, sf::Color::Yellow, 50, 24, 55 };
	brique1.afficher();
	brique2.afficher();
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.draw(brique1.getBrique());
		window.draw(brique2.getBrique());
		window.display();
		Sleep(1000);
		window.clear();
		if (brique1.deplacer()) {
			brique1.afficher();
		}
		else if (brique2.deplacer()) {
			brique2.afficher();
		}
		else { break; }

		if (brique2.deplacer()) {
			brique2.afficher();
		}
		else if (brique1.deplacer()) {
			brique1.afficher();
		}
		else { break; }
	}
	window.clear();
	window.draw(brique1.getBrique());
	window.draw(brique2.getBrique());
	window.display();
	cout << "C'est fini !" << endl;
	brique1.afficher();
	brique2.afficher();
	system("pause");
	return 0; // fin de programme
}