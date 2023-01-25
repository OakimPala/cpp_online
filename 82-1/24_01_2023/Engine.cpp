#include "Engine.h"

Engine::Engine(unsigned width, unsigned height) {
	this->width = width;
	this->height = height;

	window = new sf::RenderWindow(sf::VideoMode(width, height), "Example");
	shape = new sf::CircleShape(100);

	//window->setFramerateLimit(60);

	if (!texture.loadFromFile("sun.png")) {
		std::cerr << "Error: Load the texture." << std::endl;
	}

	shape->setTexture(&texture);
}

bool Engine::getState() const {
	return window->isOpen();
}

void Engine::draw() {
	while (window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window->close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			window->close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			shape->move(sf::Vector2f(0, -speed) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			shape->move(sf::Vector2f(-speed, 0) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			shape->move(sf::Vector2f(0, speed) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			shape->move(sf::Vector2f(speed, 0) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) {
			if ((int)speed < 2000) {
				speed += 100;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
			if ((int)speed > 100) {
				speed -= 100;
			}
		}

	}

	window->clear();
	window->draw(*shape);
	window->display();
	dt = clock.restart();
}

Engine::~Engine() {
	delete shape;
	delete window;
}