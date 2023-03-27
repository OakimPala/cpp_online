#include <iostream>

#include <vector>
#include <list>

#include <thread>
#include <chrono>

#include <SFML/Graphics.hpp>
#include <windows.h>

//template <class T> class Point {
//public:
//	T x;
//	T y;
//};
//
//template <class T> std::string getType(T val) {
//	return typeid(val).name();
//}

int main()
{
	/*int a = 0;
	float b = 0;
	short c = 0;

	std::cout << getType<int>(a) << std::endl;
	std::cout << getType<float>(b) << std::endl;
	std::cout << getType<short>(c) << std::endl;*/

	/*Point<int> p1;
	Point<float> p2;

	std::cout << "Type of data: " << typeid(p1.x).name() << std::endl;
	std::cout << "Type of data: " << typeid(p2.x).name() << std::endl;*/

	/*std::list<int> v1;

	for (size_t i = 0; i < 10; i++)
		v1.push_back(rand());

	v1.sort();*/

	//v1.unique();

	//v1.front();
	//v1.back();

	/*for (std::list<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		std::cout << *it << std::endl;
	}*/

	sf::ContextSettings cs;
	cs.antialiasingLevel = 16;

	sf::RenderWindow window(sf::VideoMode(300, 100), "Memory load", sf::Style::Default, cs);

	std::vector<sf::Vertex> vertices;

	MEMORYSTATUSEX mem;
	mem.dwLength = sizeof(mem);

	unsigned step = 0;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		GlobalMemoryStatusEx(&mem);

		if (vertices.size() < window.getSize().x) {
			vertices.push_back(sf::Vertex(sf::Vector2f(step, fabs(window.getSize().y - mem.dwMemoryLoad))));
		}
		else {
			vertices.clear();
			step = 0;
		}

		window.clear();
		
		if (vertices.size() > 0) {
			window.draw(&vertices[0], vertices.size(), sf::LineStrip);
		}
		
		window.display();
		step++;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(rand());
	//	//std::cout << "Size: " << v1.size() << std::endl;
	//	//std::cout << "Capacity: " << v1.capacity() << "\n\n";
	//}

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	//*it = 10;
	//	std::cout << *it << std::endl;
	//}

	//for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	//{
	//	//*it = 10;
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	///*v1.shrink_to_fit();*/
	////v1.clear();

	//std::cout << "First element: " << v1.front() << std::endl;
	//std::cout << "Last element: " << v1.back() << std::endl;

	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << "\n\n";

	return 0;
}
