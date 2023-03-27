#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>
#include <vector>

#include <thread>
#include <chrono>

int main()
{
	/*std::vector<int> v1;

	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(rand());

		std::cout << "Size: " << v1.size() << std::endl;
		std::cout << "Capacity: " << v1.capacity() << std::endl << std::endl;
	}

	v1.shrink_to_fit();

	std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << std::endl << std::endl;

	v1.clear();
	v1.shrink_to_fit();

	std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << std::endl << std::endl;*/

	/*for (size_t i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	}*/

	/*int arr[10] = {0}; 

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}*/

	/*int* arr = new int[10]();

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	delete arr;*/

	/*while (true) {
		new int[100000000];
	}*/

	//std::vector<int> v1;
	sf::ContextSettings cs;
	cs.antialiasingLevel = 16;

	sf::RenderWindow window(sf::VideoMode(600, 100), "SFML window", sf::Style::Default, cs);
	std::vector<sf::Vertex> vertices;

	MEMORYSTATUSEX mem;
	mem.dwLength = sizeof(mem);

	/*sf::CircleShape circle(100);

	sf::Clock clock;
	sf::Time dt;

	circle.setFillColor(sf::Color(20, 100, 0));
	circle.setPosition(sf::Vector2f(10, 10));
	circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius()));

	float speed = 200.0f;*/

	unsigned step = 0;
	float y = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		GlobalMemoryStatusEx(&mem);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			y += 1.0f;
		}

		if (vertices.size() < window.getSize().x) {
			float m = (float)mem.dwMemoryLoad / 100.0f;
			sf::Vertex v = sf::Vector2f(step, fabs(window.getSize().y - y));
			v.color = sf::Color(255 * m, 255 * (1 - m), 0);
			vertices.push_back(v);

		}
		else {
			vertices.clear();
			step = 0;
		}

		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			circle.move(sf::Vector2f(0, -speed) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			circle.move(sf::Vector2f(-speed, 0) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			circle.move(sf::Vector2f(0, speed) * dt.asSeconds());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			circle.move(sf::Vector2f(speed, 0) * dt.asSeconds());
		}*/
		
		window.clear();
		//window.draw(circle);
		
		if (vertices.size() > 0) {
			window.draw(&vertices[0], vertices.size(), sf::LineStrip);
		}

		window.display();
		//dt = clock.restart();
		step++;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}

	return 0;
}