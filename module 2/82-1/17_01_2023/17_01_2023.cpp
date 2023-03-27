#include <iostream>
#include <vector>
#include <ctime>
#include <SFML/Graphics.hpp>

// Coment: Ctrl + C >> Ctrl + K >> Ctrl + C
// Uncoment: Ctrl + K >> Ctrl + U
// Rename: Ctrl + R

class Point
{
public:
	Point() {
		std::cout << "Constructor" << std::endl;
	}

	void showXYZ() {

	}

	~Point() {
		std::cout << "Destructor" << std::endl;
	}
private:

};

//#pragma
//#ifdef
//#ifndef

//void change(int*);

int main() {
	//std::cout << time(NULL) << std::endl;
	/*srand(time(NULL));

	int a = 10;

	std::cout << "Before: " << a << std::endl;

	change(&a);

	std::cout << "After: " << a << std::endl;*/
	
	sf::RenderWindow window(sf::VideoMode(800, 600), "Example");

	std::vector<sf::Vertex*> v1;

	//sf::Vertex point(
	//	sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2), 
	//	sf::Color(255, 255, 255)
	//);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		if (v1.size() < 1000) {
			v1.push_back(new sf::Vertex(
				sf::Vector2f(rand() % window.getSize().x + 1, rand() % window.getSize().y + 1), 
				sf::Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1)
				));
		}

		window.clear();

		for (unsigned i = 0; i < v1.size(); i++)
		{
			window.draw(v1[i], 1, sf::Points);
		}
		
		window.display();
	}

	for (unsigned i = 0; i < v1.size(); i++)
	{
		delete v1[i];
	}

	return 0;
}

//void change(int* a) {
//	*a = rand() % 100 + 1;
//}