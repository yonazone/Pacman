#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Window/Keyboard.hpp>
// open the window here, make the main loop/game loop here, also the event loop? (make a plan for event loop or key press)
// if needed include the standadrd headers and sfml headers
#include "Pac.h"
// include other local header files
// THIS IS A game() consisting of main loop/game loop and event loop
// window.draw(pacCircle)

void game()
{
	// Make while loop, switch cases etc...
	Pacman* pacman = new Pacman();
	sf::RenderWindow window(sf::VideoMode(31 * 20, 28 * 20), "PacMan");
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			// pacman->getPacCircle();
			window.draw(pacman->getPacCircle());
			window.display();
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			(pacman->getPacCircle()).move(10.f, 0.f);
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
	delete pacman;
}