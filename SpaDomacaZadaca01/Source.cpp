#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	//Init srand
	std::srand(static_cast<unsigned>(time(NULL)));
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		cvijet.updateHeads();
		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}