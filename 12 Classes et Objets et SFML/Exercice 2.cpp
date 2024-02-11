#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works");

	sf::CircleShape cercle1(100.f);
	sf::CircleShape leJoliCercle2(40.f);
	sf::RectangleShape rect1(sf::Vector2f(10, 50));
	sf::RectangleShape rect2(sf::Vector2f(40, 30));

	cercle1.setFillColor(sf::Color::Red);
	leJoliCercle2.setFillColor(sf::Color::White);
	rect1.setFillColor(sf::Color::Blue);
	rect2.setFillColor(sf::Color::Magenta);

	cercle1.setPosition(200, 500);
	leJoliCercle2.setPosition(680, 80);
	rect1.setPosition(0, 0);
	rect2.setPosition(350, 80);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(cercle1);
		window.draw(leJoliCercle2);
		window.draw(rect1);
		window.draw(rect2);
		window.display();
	}
	return 0;
}
