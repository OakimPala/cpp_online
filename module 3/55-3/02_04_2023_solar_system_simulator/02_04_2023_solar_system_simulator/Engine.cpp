#include "Engine.h"

Engine::Engine(unsigned width, unsigned height, std::string window_name) {
	settings.antialiasingLevel = 8;
	view = new sf::View(sf::FloatRect(0, 0, width * 2, height * 2));
	window = new sf::RenderWindow(
		sf::VideoMode(width, height),
		window_name,
		sf::Style::Fullscreen,
		settings
	);

	view->setCenter(width / 2, height / 2);
	view->zoom(-100);
	window->setView(*view);
}

void Engine::run() {
	while (window->isOpen()) {
		while (window->pollEvent(this->event))
		{
			switch(this->event.type){
			case sf::Event::MouseWheelMoved:
				if (this->event.mouseWheel.delta == 1) {
					view->zoom(1.0f / gameZoom);
					window->setView(*view);
				}
				if (this->event.mouseWheel.delta == -1) {
					view->zoom(gameZoom);
					window->setView(*view);
				}
				break;
			case sf::Event::Closed:
				window->close();
				break;
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			window->close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			view->move(100, 0);
			window->setView(*view);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			view->move(-100, 0);
			window->setView(*view);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			view->move(0, 100);
			window->setView(*view);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			view->move(0, -100);
			window->setView(*view);
		}

		window->clear(sf::Color::Black);

		for (int i = 0; i < solarSystem.planets.size(); i++)
		{
			solarSystem.planets[i].currentAngle += solarSystem.planets[i].angularVelocity * dt.asSeconds();
			solarSystem.planets[i].setPosition(
				solarSystem.planets[i].centerOrbitPosition.x +
				solarSystem.planets[i].orbitRadius * cos(solarSystem.planets[i].currentAngle),
				
				solarSystem.planets[i].centerOrbitPosition.y +
				solarSystem.planets[i].orbitRadius * sin(solarSystem.planets[i].currentAngle)
			);
			window->draw(solarSystem.planets[i]);
		}

		window->display();
		dt = deltaClock.restart();
	}
}

void Engine::setSolarSystem(SolarSystem solarSystem) {
	this->solarSystem = solarSystem;
}

Engine::~Engine() {
	delete window;
	delete view;
}