#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>


int main() {
	sf::RenderWindow window(sf::VideoMode(300, 100), "Memory load");

	sf::Text text;
	sf::Font font;

	if (!font.loadFromFile("OpenSans-Light.ttf")) {
		std::cerr << "Error: Load the font." << std::endl;
	}

	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setCharacterSize(10);
	text.setPosition(sf::Vector2f(10, 10));
	text.setFont(font);

	std::vector<sf::Vertex> vertices;

	MEMORYSTATUSEX mem;
	mem.dwLength = sizeof(mem);

	unsigned step = 0;
	float h = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		GlobalMemoryStatusEx(&mem);

		//mem.dwMemoryLoad
		
		if (vertices.size() < window.getSize().x) { 
			vertices.push_back(sf::Vertex(sf::Vector2f(step, fabs(window.getSize().y - mem.dwMemoryLoad))));
		}
		else {
			vertices.clear();
			step = 0;
		}

		window.clear();

		if (vertices.size() > 0) {
			window.draw(&vertices[0], vertices.size(), sf::Points);
		}

		text.setString("RAM: " + std::to_string(mem.dwMemoryLoad) + '%');
		window.draw(text);

		//std::cout << mem.dwMemoryLoad << std::endl;
		//vertices.erase(vertices.begin() + 1, vertices.end() - 3);

		window.display();
		step++;
		std::this_thread::sleep_for(std::chrono::milliseconds(5));
	}

	return 0;
}