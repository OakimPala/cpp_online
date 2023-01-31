#include <iostream>
#include <vector>
#include <list>

//#include <thread>
//#include <chrono>
//
//#include <SFML/Graphics.hpp>
//#include <windows.h>

//void printList(std::list<int> list1) {
//	for (std::list<int>::iterator it = list1.begin(); it != list1.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//}

int main()
{
	/*std::list<int> list1;

	list1.push_back(30);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(30);
	list1.push_back(10);
	list1.push_back(30);

	list1.push_front(5);
	list1.push_front(3);

	list1.unique();
	list1.sort();

	printList(list1);*/

	//sf::RenderWindow window(sf::VideoMode(300, 100), "Memory load");
	//std::vector<sf::Vertex> vertices;

	//sf::Text text;
	//sf::Font font;

	//if (!font.loadFromFile("OpenSans-Light.ttf")) {
	//	std::cout << "Error: Load the font.\n";
	//}

	//text.setFont(font);
	//text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	//text.setFillColor(sf::Color::Red);
	//text.setCharacterSize(10);
	//text.setPosition(sf::Vector2f(10, 10));

	//MEMORYSTATUSEX mem;
	//mem.dwLength = sizeof(mem);

	//unsigned step = 0;

	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event)) {
	//		if (event.type == sf::Event::Closed) {
	//			window.close();
	//		}
	//	}
	//	GlobalMemoryStatusEx(&mem);
	//	text.setString("RAM: " + std::to_string(mem.dwMemoryLoad) + '%');

	//	if (vertices.size() < window.getSize().x) {
	//		vertices.emplace_back(sf::Vector2f(step, fabs(window.getSize().y - mem.dwMemoryLoad)));
	//	}
	//	else {
	//		vertices.clear();
	//		step = 0;
	//	}

	//	window.clear();

	//	if (vertices.size() > 0) {
	//		window.draw(&vertices[0], vertices.size(), sf::Points);
	//	}
	//	
	//	window.draw(text);

	//	window.display();
	//	step++;
	//	//std::cout << mem.dwMemoryLoad << std::endl;
	//	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	//}

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++) {
	//	v1.push_back(i * 10);

	//	std::cout << "Size: " << v1.size() << std::endl;
	//	std::cout << "Capacity: " << v1.capacity() << "\n\n";
	//}

	/*v1.shrink_to_fit();
	std::cout << "After shrink_to_fit:\n";
	std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << "\n\n";*/

	/*try {
		std::cout << v1.at(12) << std::endl;
	}
	catch (...) {
		std::cout << "Err" << std::endl;
	}*/

	/*std::cout << "First element: " << v1.front() << std::endl;
	std::cout << "Last element: " << v1.back() << std::endl;*/

	//v1.clear();

	//std::cout << "After clear:\n";
	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << "\n\n";

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	//{
	//	*it = 10;
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	//v1.erase(v1.begin() + 1, v1.end() - 2);
	//
	//for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}


	return 0;
}