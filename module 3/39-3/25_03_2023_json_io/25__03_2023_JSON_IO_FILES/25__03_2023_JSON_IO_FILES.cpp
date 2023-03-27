#include <iostream>
#include <string>
#include <fstream>

#include <nlohmann/json.hpp>

using nlohmann::json;

class Account {
public:
	std::string name;
	std::string passwd;
	NLOHMANN_DEFINE_TYPE_INTRUSIVE(Account, name, passwd)
};

int main()
{
	// std::cout	- OUTPUT
	// std::cin		- INPUT
	// std::cerr	- OUTPUT

	/*
	int a = 0;
	fprintf(stdout, "smth\n");
	fscanf(stdin, "%d", &a);
	fprintf(stderr, "smth\n");
	*/


	// Write into a file

	//std::ofstream file;
	//file.open("data.txt");

	//file << "Some data";

	//file.close();

	// Input into a file
	
	//std::ifstream file("data.txt");
	//std::string file_data;

	//if (file.is_open()) {
	//	while (std::getline(file, file_data))
	//	{
	//		std::cout << file_data << std::endl;
	//	}
	//}
	//else {
	//	std::cerr << "Error: Can\'t open the file.\n";
	//}

	//std::ifstream file("ARP.EXE", std::ios::binary);

	//int val = 0;
	//int count = 0;

	//while ((val = file.get()) != EOF) {
	//	/*std::cout << std::hex << val << std::endl;
	//	std::cout << std::oct << val << std::endl;
	//	std::cout << std::dec << val << std::endl;*/

	//	count++;
	//	if (count < 15) {
	//		printf("%02X ", val);
	//	}
	//	else {
	//		count = 0;
	//		putchar('\n');
	//	}
	//	
	//}
	//std::cout << std::endl;
	/*int ch = 0;
	while ((ch = file.get()) != EOF) {
		count++;
		if (count < 15) {
			if (ch == 0) {
				putchar('.');
			}
			else {
				printf("%c", (char)ch);
			}
		}
		else {
			count = 0;
			putchar('\n');
		}
	}*/

	// JSON

	std::ifstream file;
	file.open("data.json");

	json json_data = json::parse(file);

	file.close();

	std::cout << json_data.dump(4) << std::endl;

	// Serialization
	Account ac1;

	ac1.name = "John";
	ac1.passwd = "qwerty";

	json json_account1 = ac1;

	std::cout << json_account1["name"] << std::endl;
	std::cout << json_account1["passwd"] << std::endl;

	// Deserialization
	Account ac2 = json_account1;

	std::cout << ac2.name << std::endl;
	std::cout << ac2.passwd << std::endl;

	/*std::cout << json_data["id"] << std::endl;

	for (int i = 0; i < json_data["children"].size(); i++)
	{
		std::cout << json_data["children"][i]["age"] << std::endl;
	}
	*/

	return 0;
}