#include <LD23/defines/defines.h>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>

int main(int argc, char** _argv) {
	
	// Hey
	std::cout << "Hey there!" << std::endl;

	// Create a window
	sf::RenderWindow window(sf::VideoMode(500, 500, 32), "HEY THERE");
	window.setTitle("Hey there!");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			window.clear(sf::Color(255, 255, 255, 255));
			window.display();
		}
	}

	return 0;
}
