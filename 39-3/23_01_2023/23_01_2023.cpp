#include <iostream>
#include <SFML/Graphics.hpp>

//namespace our_std {
//
//    void foo() {
//        std::cout << "afdfsfds" << std::endl;
//    }
//
//}

class CoffeeMachine
{
public:
    CoffeeMachine() {
        std::cout << "Start..." << std::endl;
    }

    CoffeeMachine(int a) {
        std::cout << "Start... id=" << a << std::endl;
    }

    void getCapuchinio() {
        std::cout << "Copuchino" << std::endl;
    }

    // ...

    ~CoffeeMachine() {
        std::cout << "Stop..." << std::endl;
    }

private:

};


int main()
{
    CoffeeMachine coffeeMachine(10);
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    sf::Clock clock;
    sf::Time dt;

    sf::Texture texture;
    texture.setSmooth(true);

    if (!texture.loadFromFile("sun.png")) {
        std::cerr << "Error: Loading texture.\n";
    }

    sf::CircleShape shape(100, 12);
    //shape.setFillColor(sf::Color(25,25,25));

    shape.setTexture(&texture);

    // Coment: Ctrl + C >> Ctrl + K >> Ctrl + C
    // Uncoment: Ctrl + K >> Ctrl + U
    // Rename: Ctrl + R
    // Select a section: Alt + MOUSE_LEFT
    // Dublicate: Ctrl + D

    float speed = 1000;
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                shape.move(sf::Vector2f(0, -speed) * dt.asSeconds());
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                shape.move(sf::Vector2f(-speed, 0) * dt.asSeconds());
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                shape.move(sf::Vector2f(0, speed) * dt.asSeconds());
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                shape.move(sf::Vector2f(speed, 0) * dt.asSeconds());
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::U)) {
                if ((int)speed < 10000)
                    speed += 100;
            }
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::K)) {
                if((int)speed > 100)
                    speed -= 100;
            }

            // U speed +
            // K speed -
        }

        window.clear();
        window.draw(shape);
        window.display();
        dt = clock.restart();
    }

    return 0;
}