#include <iostream>
#include <vector>
#include <list>

//#include <thread>
//#include <chrono>

#include <SFML/Graphics.hpp>
//#include <windows.h>

//template <typename T>
//class MyClass {
//public:
//	T a = 0;
//};

int main() {


	/*MyClass<int> myClass1;
	MyClass<float> myClass2;

	std::cout << "Type: " << typeid(myClass1.a).name() << std::endl;
	std::cout << "Type: " << typeid(myClass2.a).name() << std::endl;*/

	/*sf::RenderWindow window(sf::VideoMode(300, 100), "Memory load");
	
	std::vector<sf::Vertex> v1;
	unsigned step = 0;

	MEMORYSTATUSEX mem;
	mem.dwLength = sizeof(mem);
	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		GlobalMemoryStatusEx(&mem);

		if (v1.size() < 300) {
			v1.push_back(sf::Vertex(sf::Vector2f(step, 100 - mem.dwMemoryLoad)));
		}
		else {
			v1.clear();
			step = 0;
		}

		window.clear();
		
		if (v1.size() > 0) {
			window.draw(&v1[0], v1.size(), sf::Points);
		}
		
		window.display();
		step++;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}*/

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i * i);
	//	v1.shrink_to_fit();

	//	std::cout << "Size: " << v1.size() << std::endl;
	//	std::cout << "Capacity: " << v1.capacity() << std::endl << std::endl;
	//}

	//v1.clear();

	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl << std::endl;

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	//*it = 10;
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	//for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	//{
	//	//*it = 10;
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	return 0;
}