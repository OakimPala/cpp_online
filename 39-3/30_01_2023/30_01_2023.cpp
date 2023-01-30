#include <iostream>
#include <vector> // STL (Standard Template Library)
#include <list>

//#include <thread>
//#include <chrono>

//#include <SFML/Graphics.hpp>
//#include <windows.h>

//template <class T> T foo(T val) {
//	return val;
//}
//
//template <class T> class Point {
//public:
//	void doSmth();
//	T x = 0;
//	T y = 0;
//};
//
//template <class T> void Point<T>::doSmth() {
//
//}

int main()
{
	/*std::list<int> list1;
	
	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);

	for (std::list<int>::iterator it = list1.begin(); it != list1.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	//sf::RenderWindow window(sf::VideoMode(300, 100), "Memory load");

	//sf::Text text;
	//sf::Font font;

	//if (!font.loadFromFile("OpenSans-Light.ttf")) {
	//	std::cerr << "Error: Load the font." << std::endl;
	//}

	//text.setCharacterSize(10);
	//text.setPosition(sf::Vector2f(10,10));
	//text.setFillColor(sf::Color::Red);
	//text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	//text.setFont(font);

	//MEMORYSTATUSEX mem;
	//mem.dwLength = sizeof(mem);

	//unsigned step = 0;
	//std::vector<sf::Vertex> vertices;

	//while (window.isOpen()) {
	//	sf::Event event;
	//	while (window.pollEvent(event)) {
	//		if (event.type == sf::Event::Closed) {
	//			window.close();
	//		}
	//	}

	//	GlobalMemoryStatusEx(&mem);
	//	//std::cout << mem.dwMemoryLoad << std::endl;

	//	text.setString("RAM: " + std::to_string(mem.dwMemoryLoad) + '%');

	//	if (vertices.size() < window.getSize().x) {
	//		vertices.push_back(sf::Vertex(sf::Vector2f(step, fabs(window.getSize().y - mem.dwMemoryLoad))));
	//	}
	//	else {
	//		vertices.clear();
	//		step = 0;
	//	}
	//	
	//	window.clear();

	//	if (vertices.size() > 0) {
	//		window.draw(&vertices[0], vertices.size(), sf::Points);
	//	}

	//	window.draw(text);

	//	window.display();
	//	step++;
	//	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	//}

	/*Point<int> p1;
	std::cout << "Type of data: p1.x => " << typeid(p1.x).name() << " p1.y => " << typeid(p1.y).name() << std::endl;

	Point<float> p2;
	std::cout << "Type of data: p2.x => " << typeid(p2.x).name() << " p2.y => " << typeid(p2.y).name() << std::endl;

	std::cout << foo<int>(5) << std::endl;
	std::cout << foo<float>(5.0f) << std::endl;*/

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//	v1.push_back(i);

	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl;

	//v1.shrink_to_fit();

	//std::cout << "After shrink_to_fit:\n\nSize: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl;

	//v1.resize(15, 5000);

	//v1.clear();
	//v1.shrink_to_fit();

	//std::cout << "First element: " << v1.front() << std::endl;
	//std::cout << "Last element: " << v1.back() << std::endl;

	//for (size_t i = 0; i < v1.size(); i++)
	//	std::cout << v1[i] << std::endl;

	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl;

	// Ctrl + C >> Ctrl + K >> Ctrl + C
	// Ctrl + K >> Ctrl + U
	// Ctrl + D
	// Ctrl + R (x2)
	// Alt + LEFT MOUSE

	/*std::vector<int> v1;

	for (size_t i = 0; i < 10; i++)
		v1.push_back(i);*/

	/*for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		*it = 10;
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
		std::cout << *it << std::endl;
	}*/
	/*std::vector<int>::const_reverse_iterator it = v1.crbegin();
	while(it != v1.crend()) {
		std::cout << *it << std::endl;
		it++;
	}*/


	return 0;
}