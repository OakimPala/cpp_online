#include <iostream>
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
#include <fstream>

using nlohmann::json;

//class WeatherApp {
//
//};

int main()
{

	//WeatherApp app;


	std::ifstream file("data.json");
	json weather_data = json::parse(file);

	sf::RenderWindow window(sf::VideoMode(500, 900), "Weather station");

	int offset_x = 20;
	int offset_y = -80;

	sf::Sprite mainWeatherIcon;
	sf::Texture texClearDay;
	sf::Texture texSnow;

	if (!texClearDay.loadFromFile("assets/clear_day.png")) {
		std::cerr << "Error: Load the texture." << std::endl;
	}

	if (!texSnow.loadFromFile("assets/snow.png")) {
		std::cerr << "Error: Load the texture." << std::endl;
	}

	sf::Font font;
	sf::Text lb_temperature_c;

	if (!font.loadFromFile("corbel.ttf")) {
		std::cerr << "Error: Load the font." << std::endl;
	}


	lb_temperature_c.setFont(font);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		lb_temperature_c.setString(
			weather_data["current_condition"][0]["temp_C"].get<std::string>() +
			"°C"
		);

		if (atoi(weather_data["current_condition"][0]["temp_C"].get<std::string>().c_str()) > 0) {
			mainWeatherIcon.setTexture(texClearDay);
		}
		else {
			mainWeatherIcon.setTexture(texSnow);
		}

		lb_temperature_c.setPosition(sf::Vector2f(window.getSize().x - lb_temperature_c.getGlobalBounds().width - offset_x, 200));
		mainWeatherIcon.setPosition(sf::Vector2f(offset_x, window.getSize().y / 2 + offset_y));

		window.clear();
		window.draw(lb_temperature_c);
		window.draw(mainWeatherIcon);
		window.display();
	}

	file.close();

	return 0;
}