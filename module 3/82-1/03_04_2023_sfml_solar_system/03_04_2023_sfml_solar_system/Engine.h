#pragma once
#include "SolarSystem.h"
#include <SFML/System/Clock.hpp>
#include <SFML/Window/ContextSettings.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/View.hpp>

class Engine
{
public:
	Engine(unsigned, unsigned, std::string);

	void run();
	void setSolarSystem(SolarSystem);

	~Engine();

private:
	const float gameZoom = 1.02f;
	sf::Clock deltaClock;
	sf::Time dt;
	sf::ContextSettings contextSettings;
	sf::RenderWindow* window;
	sf::View* view;
	sf::Event event;
	SolarSystem mSolarSystem;
};

