#include "Planet.h"

Planet::Planet(sf::Vector2f centerOrbitPosition, 
	float orbitRadius, 
	float radius, 
	float angularVelocity, 
	std::string fileName)
{
	this->orbitRadius = orbitRadius;
	this->centerOrbitPosition = centerOrbitPosition;
	this->angularVelocity = angularVelocity;

	setRadius(radius);
	setPosition(centerOrbitPosition);
	setOrigin(radius, radius);

	try
	{
		if (!texture.loadFromFile(fileName))
		{
			throw "Texture wasn\'t loaded.";
		}
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	setTexture(&texture);
}

void Planet::setAngularVelocity(float angularVelocity)
{
	this->angularVelocity = angularVelocity;
}
