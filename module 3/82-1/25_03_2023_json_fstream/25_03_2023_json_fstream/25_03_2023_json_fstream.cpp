#include <iostream>
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
	Account ac1;

	ac1.name = "John";
	ac1.passwd = "qwerty";

	// Serialization
	json json_data = ac1;

	//std::cout << json_data["name"] << std::endl;
	//std::cout << json_data["passwd"] << std::endl;

	// !Serialization

	// Deserialization
	Account ac2 = json_data;

	std::cout << ac2.name << std::endl;
	std::cout << ac2.passwd << std::endl;
	// !Deserialization

	/*std::ifstream file("data.json");

	json json_data = json::parse(file);

	std::cout << json_data["id"] << std::endl;

	for (size_t i = 0; i < json_data["children"].size(); i++)
	{
		std::cout << json_data["children"][i]["age"] << std::endl;
	}*/

	// std::cout	OUTPUT	stdout
	// std::cin		INPUT	stdin
	// std::cerr	OUTPUT	stderr

	//std::ofstream file;
	//file.open("data.txt", std::ios::out | std::ios::trunc);

	//file << "Some text1.\n";
	//file << "Some text2.\n";
	//file << "Some text3.\n";

	//file.close();

	//std::ifstream file("GenValObj.exe", std::ios::binary);

	//file.seekg(0, std::ios::beg);

	//int length = file.tellg();
	//int x = 10;

	//file.seekg(length - x, std::ios::beg);

	//int ch = 0;
	//int count = 0;

	//while ((ch = file.get()) != EOF) {
	//	count++;
	//	if (count < 17) {
	//		printf("%02X ", ch);
	//	}
	//	else {
	//		putchar('\n');
	//		count = 0;
	//	}
	//}

	/*std::cout << std::endl;

	while ((ch = file.get()) != EOF) {
		count++;
		if (count < 17) {
			if (ch == 0) {
				putchar('.');
			}
			else {
				printf("%c", ch);
			}
		}
		else {
			putchar('\n');
			count = 0;
		}
	}*/

	// if ch == 0:
	//	print '0'

	// file.close();

	return 0;
}