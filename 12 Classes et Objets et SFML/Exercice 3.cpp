
#include <SFML/Graphics.hpp>
class Toto {
	sf::CircleShape tete;
	sf::CircleShape oeil1;
	sf::CircleShape oeil2;
	sf::RectangleShape bouche;
	float x;
	float y;
public:
	Toto() : tete{ 200 }, oeil1{ 30 }, oeil2{ 30 }, bouche{ sf::Vector2f(120, 30) }, x{ 0.f }, y{ 0.f }
	{
		tete.setFillColor(sf::Color::Green);
		oeil1.setFillColor(sf::Color::Red);
		oeil1.setPosition(80, 80);
		oeil2.setFillColor(sf::Color::Red);
		oeil2.setPosition(260, 80);
		bouche.setFillColor(sf::Color::Red);
		bouche.setPosition(140, 220);
	}
	void setPosition(float a, float b) {
		x = a;
		y = b;
		tete.setPosition(x, y);
		oeil1.setPosition(x+80, y+80);
		oeil2.setPosition(x + 260, y + 80);
		bouche.setPosition(x + 140, y + 220);
	}
	void affichage(sf::RenderWindow& window) {
		window.draw(tete);
		window.draw(oeil1);
		window.draw(oeil2);
		window.draw(bouche);
	}
};
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works");
	Toto laTeteA_1;
	Toto laTeteA_2;
	laTeteA_2.setPosition(250, 350);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		laTeteA_1.affichage(window);
		laTeteA_2.affichage(window);
		window.display();
	}
	return 0;
}
