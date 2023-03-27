#include <iostream>
#include <vector> //STL (Standard Template Library)
#include <list>
//#include <thread>
//#include <chrono>
//#include <SFML/Graphics.hpp>
//#include <windows.h>

//template <typename T>
//class A {
//public:
//	T a;
//	T b;
//};

int main()
{
	std::list<int> list;

	for (size_t i = 0; i < 10; i++)
	{
		list.push_back(rand() % 100 + 1);
	}
	list.push_back(99);
	list.push_back(99);
	list.push_back(99);

	list.push_front(99);

	list.unique();
	//list.sort();

	std::cout << "First element: " << list.front() << std::endl;
	std::cout << "Last element: " << list.back() << std::endl;

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		std::cout << *it << std::endl;
	}

	/*std::vector<int> v1;

	for (size_t i = 0; i < 10; i++)
		v1.push_back(i);*/

	/*for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		*it = 10;
		std::cout << *it << std::endl;
	}*/
	
	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
		std::cout << *it << std::endl;
	}*/
	
	/*for (std::vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++) {
		std::cout << *it << std::endl;
	}*/
	



	//sf::RenderWindow window(sf::VideoMode(400, 100), "Memory load");

	//std::vector<sf::Vertex> vertices;
	//unsigned step = 0;

	//sf::Text text;
	//sf::Font font;

	//if (!font.loadFromFile("OpenSans-Regular.ttf")) {
	//	std::cerr << "Error: Load the font." << std::endl;
	//}

	//text.setFont(font);
	//text.setFillColor(sf::Color::Red);
	//text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	//text.setPosition(sf::Vector2f(10, 10));
	//text.setCharacterSize(10);

	//MEMORYSTATUSEX mem;
	//mem.dwLength = sizeof(mem);

	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event)) {
	//		if (event.type == sf::Event::Closed) {
	//			window.close();
	//		}
	//	}

	//	GlobalMemoryStatusEx(&mem);

	//	if (vertices.size() < window.getSize().x) {
	//		vertices.push_back(sf::Vertex(sf::Vector2f(step, fabs(window.getSize().y - mem.dwMemoryLoad))));
	//	}
	//	else {
	//		vertices.clear();
	//		step = 0;
	//	}

	//	window.clear();

	//	if(vertices.size() > 0) {
	//		window.draw(&vertices[0], vertices.size(), sf::Points);
	//	}

	//	text.setString("RAM: " + std::to_string(mem.dwMemoryLoad) + '%');

	//	window.draw(text);

	//	window.display();
	//	step++;
	//	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	//	//std::cout << "Memory load: " << mem.dwMemoryLoad << std::endl;
	//}

	/*A<int> obj1;
	obj1.a = 10;
	obj1.b = 20;


	std::cout << "obj1: a(" << typeid(obj1.a).name() << ") b(" << typeid(obj1.b).name() << ')' << std::endl;

	A<float> obj2;
	obj2.a = 10.5f;
	obj2.b = 20.5f;

	std::cout << "obj2: a(" << typeid(obj2.a).name() << ") b(" << typeid(obj2.b).name() << ')' << std::endl;*/

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i);
	//	std::cout << "Size: " << v1.size();
	//	std::cout << " Capacity: " << v1.capacity();
	//	std::cout << " Value: " << v1.at(i) << std::endl;
	//}

	//std::cout << "\n\nFirst element: " << v1.front() << std::endl;
	//std::cout << "Last element: " << v1.back() << std::endl;

	//for (size_t i = 0; i < v1.size(); i++)
	//{
	//	std::cout << "Size: " << v1.size();
	//	std::cout << " Capacity: " << v1.capacity();
	//	std::cout << " Value: " << v1.at(i) << std::endl;
	//}

	//v1.shrink_to_fit();
	//std::cout << "\n\nSize: " << v1.size();
	//std::cout << " Capacity: " << v1.capacity();

	return 0;
}