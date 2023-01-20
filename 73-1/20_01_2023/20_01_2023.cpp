
#include <vector>

#include "Engine.h"



int main()
{
    Engine engine;

    //sf::VertexArray triangle(sf::Triangles, 3);
    /*sf::Transform transform;

    triangle[0].position = sf::Vector2f(10.f, 10.f);
    triangle[1].position = sf::Vector2f(100.f, 10.f);
    triangle[2].position = sf::Vector2f(100.f, 100.f);*/

    //shape.setFillColor(sf::Color(52, 152, 219));
    //shape.setOrigin(shape.getRadius(), shape.getRadius());

    while (engine.getState())
    {
        engine.draw();
    }

    return 0;
}