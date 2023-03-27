#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Engine
{
public:
	Engine(unsigned, unsigned);

	bool getState() const;

	void draw();

	~Engine();
private:
	sf::RenderWindow* window;
	sf::CircleShape* shape;
	sf::Texture texture;
	sf::Clock clock;
	sf::Time dt;
	sf::Event event;

	float speed = 1000;
	unsigned width;
	unsigned height;
};