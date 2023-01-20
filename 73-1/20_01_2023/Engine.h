#pragma once
#include <SFML/Graphics.hpp>

#define EXIT_TEXTURE_ERR 1

class Engine
{
public:
	Engine();
    bool getState() const;
    void draw();

private:
    sf::ContextSettings settings;
    sf::RenderWindow* window;
    sf::CircleShape* shape;
    sf::Clock deltaClock;
    sf::Time dt;
    sf::Texture texture;
    const float speed = 1000;

};

