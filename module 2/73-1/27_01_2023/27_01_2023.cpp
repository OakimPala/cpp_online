#include <iostream>
#include <vector>
#include <list>
#include <thread>
#include <chrono>
#include <SFML/Graphics.hpp>
#include <windows.h>

//template <class T>
//class MyClass
//{
//public:
//	T a;
//	T b;
//};

int main()
{
	std::list<int> list;

	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_front(30);

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	/*sf::RenderWindow window(sf::VideoMode(400, 100), "RAM Loaded");

	sf::Text text;
	sf::Font font;

	if (!font.loadFromFile("OpenSans-Light.ttf")) {
		std::cerr << "Error: Load the font." << std::endl;
	}

	text.setFont(font);

	text.setCharacterSize(10);
	text.setPosition(sf::Vector2f(10, 10));
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	std::vector<sf::Vertex> vertices;*/

	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);



	//unsigned step = 0;

	/*while (window.isOpen()) {
		GlobalMemoryStatusEx(&statex);
		std::cout << statex.dwMemoryLoad << std::endl;

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		
		if (vertices.size() >= window.getSize().x) {
			vertices.clear();
			step = 0;
		}
			
		vertices.push_back(sf::Vertex(sf::Vector2f(step, fabs(window.getSize().y - statex.dwMemoryLoad))));
		text.setString("RAM: " + std::to_string(statex.dwMemoryLoad) + '%');

		window.clear();
		window.draw(&vertices[0], vertices.size(), sf::Points);
		window.draw(text);
		window.display();
		step++;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}*/

	/*MyClass<int> ex1;
	ex1.a = 10;
	ex1.b = 10;

	MyClass<float> ex2;
	ex2.a = 10.5f;
	ex2.b = 12.5f;

	std::vector<int> v1;

	std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << std::endl;
	std::cout << "=====================================\n\n\n";

	for (unsigned i = 0; i < 10; i++)
	{
		v1.push_back(i * i);
	}*/

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}

	//for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	/*auto a = 10.5f;
	std::cout << __FUNCTION__ << ": " << typeid(a).name() << std::endl;*/

	/*for (auto it = v1.begin(); it != v1.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	//v1.erase(v1.begin() + 1, v1.begin() + 3);
	//std::cout << "=====================================\n\n\n";

	/*for (auto it = v1.begin(); it != v1.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/
	//v1.clear();

	/*std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << std::endl;*/


	return 0;
}