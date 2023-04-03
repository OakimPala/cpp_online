#pragma once // C++

// #ifndef PLANET_H
// #define PLANET_H C (lang)
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>

class Planet : public sf::CircleShape
{
public:
	Planet(sf::Vector2f, float, float, float, std::string);

	void setAngularVelocity(float);

private:
	friend class Engine;
	sf::Texture texture;
	sf::Vector2f centerOrbitPosition;
	float orbitRadius = 0.0f;
	float angularVelocity = 0.0f;
	float currentAngle = 0.0f;
};
// #endif // PLANET_H

