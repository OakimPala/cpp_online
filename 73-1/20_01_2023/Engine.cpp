#include "Engine.h"

Engine::Engine() {
    settings.antialiasingLevel = 8;

    window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML works!", sf::Style::Default, settings);
    shape = new sf::CircleShape(100);

    if (!texture.loadFromFile("sun.png")) {
        exit(1);
    }

    shape->setTexture(&texture);
}

bool Engine::getState() const {
    return window->isOpen();
}

void Engine::draw() {
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            shape->move(sf::Vector2f(0, -speed) * dt.asSeconds());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            shape->move(sf::Vector2f(0, speed) * dt.asSeconds());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            shape->move(sf::Vector2f(speed, 0) * dt.asSeconds());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            shape->move(sf::Vector2f(-speed, 0) * dt.asSeconds());
        }
    }

    //triangle[2].position += sf::Vector2f(10.f, 10.f) * dt.asSeconds();
    //transform.rotate(0.01, sf::Vector2f(1, 1) * dt.asSeconds());
    window->clear();
    window->draw(*shape);
    //window.draw(triangle, transform);
    window->display();
    dt = deltaClock.restart();
}