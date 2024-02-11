#include <iostream>
#include <string>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <windows.h>
#include <math.h>
#include <ctime>

using namespace std;
const int max_x{ 1200 };
const int max_y{ 800 };

class Bar {
	int largeur;
	int longueur;
	float x;
	float y;
	sf::RectangleShape bar;

public:
	Bar() : largeur{ 10 }, longueur{ 150 }, x{ 10 }, y{ 10 } {
		bar.setSize(sf::Vector2f(largeur, longueur));
		bar.setPosition(x, y);
		bar.setFillColor(sf::Color::White);
	}
	Bar(int a, int b, float c, float d) : largeur{ a }, longueur{ b }, x{ c }, y{ d } {
		bar.setSize(sf::Vector2f(largeur, longueur));
		bar.setPosition(x, y);
		bar.setFillColor(sf::Color::White);
	}
	int getX() {
		return(x);
	}
	int getY() {
		return(y);
	}
	int getLongueur() {
		return(longueur);
	}
	int getLargeur() {
		return(largeur);
	}
	void setX(int a) {
		x = a;
	}
	void setY(int a) {
		y = a;
	}
	void setPosition(int a, int b) {
		bar.setPosition(a, b);
	}
	sf::RectangleShape getBar() {
		return bar;
	}

	void setPosition(sf::Vector2i a) {
		setY(a.y);
		if (y+longueur > max_y) {
			y = max_y - longueur;
		}
		bar.setPosition(x, y);
	}

	void up() {
		if (y - 15 >= 0) {
			y -= 15;
		}
		else {
			y = 0;
		}
		bar.setPosition(x, y);
	}
	void down() {
		if (y + 15 <= max_y - longueur) {
			y += 15;
		}
		else {
			y = max_y - longueur;
		}
		bar.setPosition(x, y);
	}
};

class Balle {
	int rayon;
	float x;
	float y;
	float vitesse_x;
	float vitesse_y;
	int echange = 0;
	int scoreG = 0;
	int scoreD = 0;
	sf::CircleShape bal;

public:
	Balle() : rayon{ 10 }, x{ float((max_x / 2) - rayon) }, y{ float((max_y / 2) - rayon) }, vitesse_x{ 1 }, vitesse_y{ 0 } {
		bal.setRadius(rayon);
		bal.setPosition(x, y);
		bal.setFillColor(sf::Color::White);
	}
	Balle(int a, float b, float c, float d, float e) : rayon{ a }, x{ b }, y{ c }, vitesse_x{ d }, vitesse_y{ e } {
		bal.setRadius(rayon);
		bal.setPosition(x, y);
		bal.setFillColor(sf::Color::White);
	}
	int getX() {
		return(x);
	}
	int getY() {
		return(y);
	}
	int getRayon() {
		return(rayon);
	}
	void setPosition(int a, int b) {
		bal.setPosition(a, b);
	}
	sf::CircleShape getBalle() {
		return bal;
	}

	void deplacement(Bar& joueur, Bar& second) {
		double random = std::rand() % max_y;
		random = random / 450;
		if (x + (rayon * 2) > max_x - 10 - second.getLargeur()) {
			if (y >= second.getY() && y <= second.getY() + second.getLongueur()) {
					vitesse_x = -vitesse_x;
				if (vitesse_y < 0) {
					vitesse_y = -random;
				}
				else {
					vitesse_y = random;
				}
				echange += 1;
				x = max_x - ((rayon * 2) + 22);
			}
			else {
				scoreG += 1;
				echange = 0;
				vitesse_y = 0;
				second.setY((max_y / 2) - (second.getLongueur() / 2));
				second.setPosition(second.getX(), (max_y / 2) - (second.getLongueur() / 2));
				x = (max_x / 2) - rayon;
				y = (max_y / 2) - rayon;
			}
		}
		else if (x < 22) {
			if (y >= joueur.getY() && y <= joueur.getY() + joueur.getLongueur()) {
				vitesse_x = -vitesse_x;
				if (vitesse_y < 0) {
					vitesse_y = -random;
				}
				else {
					vitesse_y = random;
				}
				echange += 1;
				x = 23;
			}
			else {
				scoreD += 1;
				echange = 0;
				vitesse_y = 0;
				joueur.setY((max_y / 2) - (second.getLongueur() / 2));
				joueur.setPosition(joueur.getX(), (max_y / 2) - (joueur.getLongueur() / 2));
				x = (max_x / 2) - rayon;
				y = (max_y / 2) - rayon;
			}
		}
		x += vitesse_x;
		if (y + vitesse_y >= max_y - (rayon * 2)) {
			y = max_y - (rayon * 2);
			vitesse_y = -vitesse_y;
		}
		else if (y + vitesse_y <= 0) {
			y = 0;
			vitesse_y = -vitesse_y;
		}
		y += vitesse_y;
		bal.setPosition(x, y);
	}

	int getScoreg() {
		return(scoreG);
	}
	int getScored() {
		return(scoreD);
	}
	int getEchange() {
		return(echange);
	}
};

int main() {
	setlocale(LC_CTYPE, "fra"); // gestion des accents
	srand(unsigned int(time(0)));
	sf::RenderWindow window(sf::VideoMode(max_x, max_y), "SFML works");
	Bar joueur;
	Bar second{ 10,150,max_x - 10,10 };
	Balle ball;
	bool bot = false;
	bool bot2 = false;
	sf::Font font;
	font.loadFromFile("C:\\Users\\leon.banquet\\Desktop\\SFML 1\\SFML 2\\arial.ttf");

	sf::Text scoreg(to_string(ball.getScoreg()), font, 10);
	scoreg.setCharacterSize(30);
	scoreg.setStyle(sf::Text::Bold);
	scoreg.setFillColor(sf::Color::Red);
	scoreg.setPosition(10, 10);

	sf::Text scored(to_string(ball.getScored()), font, 10);
	scored.setCharacterSize(30);
	scored.setStyle(sf::Text::Bold);
	scored.setFillColor(sf::Color::Red);
	scored.setPosition(max_x - 30, 10);

	sf::Text echange(to_string(ball.getEchange()), font, 10);
	echange.setCharacterSize(30);
	echange.setStyle(sf::Text::Bold);
	echange.setFillColor(sf::Color::Red);
	echange.setPosition((max_x / 2) - 30, 10);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (bot2 == false) {
				joueur.setPosition(sf::Mouse::getPosition(window));
			}
			if (bot == false)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageUp))
				{
					second.up();
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageDown))
				{
					second.down();
				}
			}
		}

		Sleep(1);
		if (bot) {
			second.setY(ball.getY() - (second.getLongueur() / 2));
			if (second.getY() < 0) {
				second.setPosition(second.getX(), 0);
			}
			else if (second.getY() > max_y - second.getLongueur()) {
				second.setPosition(second.getX(), max_y - second.getLongueur());
			}
			else {
				second.setPosition(second.getX(), second.getY());
			}
		}
		if (bot2) {
			joueur.setY(ball.getY() - (joueur.getLongueur() / 2));
			if (joueur.getY() < 0) {
				joueur.setPosition(joueur.getX(), 0);
			}
			else if (joueur.getY() > max_y - joueur.getLongueur()) {
				joueur.setPosition(joueur.getX(), max_y - joueur.getLongueur());
			}
			else {
				joueur.setPosition(joueur.getX(), joueur.getY());
			}
		}
		ball.deplacement(joueur, second);
		scoreg.setString(to_string(ball.getScoreg()));
		scored.setString(to_string(ball.getScored()));
		echange.setString(to_string(ball.getEchange()));
		window.clear();
		window.draw(joueur.getBar());
		window.draw(second.getBar());
		window.draw(ball.getBalle());
		window.draw(scoreg);
		window.draw(scored);
		window.draw(echange);
		window.display();
	}
	return 0; // fin de programme
}