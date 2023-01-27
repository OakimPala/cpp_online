#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

// Coment: Ctrl + C >> Ctrl + K >> Ctrl + C
// Uncoment: Ctrl + K >> Ctrl + U
// Select section: Alt + LEFT_MOUSE
// Rename: Ctrl + R (x2)

//class Point {
//public:
//	Point() {
//		std::cout << "Constructor" << std::endl;
//		x = y = 0;
//	}
//	~Point() {
//		std::cout << "Destructor" << std::endl;
//	}
//
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//
//	void setX(int x) {
//		this->x = x;
//	}
//
//	void setY(int y) {
//		this->y = y;
//	}
//
//private:
//	int x, y;
//};

//namespace fs {
//
//	void foo() {
//		std::cout << __FUNCTION__ << std::endl;
//	}
//
//}

//void change(int*);

int main() {
	//fs::foo();
	
	std::vector<sf::Vertex*> v1;

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
	sf::CircleShape circle(100);
	sf::Texture texture;

	//circle.setFillColor(sf::Color(52, 152, 219));

	circle.setPosition(sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2));
	circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius()));

	if (!texture.loadFromFile("sun2.png")) {
		texture.loadFromFile("missing.png");
	}

	circle.setTexture(&texture);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		if (v1.size() < 800 * 600) {
			v1.push_back(new sf::Vertex(sf::Vector2f(rand() % 801, rand() % 601), 
				sf::Color(rand() % 256, rand() % 256, rand() % 256)
				));
		}

		window.clear();

		//auto a = 10;

		for (auto point : v1)
		{
			window.draw(point, 1, sf::Points);
		}

		window.draw(circle);
		window.display();
	}

	/*Point p1;
	p1.setX(5);
	p1.setY(6);

	std::cout << p1.getX() << ' ' << p1.getY() << std::endl;*/


	/*int a = 5;
	change(&a);

	std::cout << a << std::endl;*/

	return 0;
}

//void change(int* a) {
//	*a = 10;
//}

