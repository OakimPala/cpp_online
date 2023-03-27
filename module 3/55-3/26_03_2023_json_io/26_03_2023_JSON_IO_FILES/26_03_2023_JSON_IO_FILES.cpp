#include <iostream>
#include <string>
#include <fstream>

#include <nlohmann/json.hpp>

#include "sha256.h"

using nlohmann::json;

#define LEN 10
#define MAX LEN

class Account {
public:
	std::string username;
	std::string passwd;

	NLOHMANN_DEFINE_TYPE_INTRUSIVE(Account, username, passwd)
};

int main()
{
	SHA256 sha256;

	std::string passwd;
	Account ac1;

	std::cout << "\t\tRegister" << std::endl;
	
	std::cout << "Username: ";
	std::cin >> ac1.username;

	std::cout << "Password: ";
	std::cin >> passwd;

	ac1.passwd = sha256(passwd);

	json json_data = ac1;

	std::cout << json_data.dump(4) << std::endl;

//	Account ac1;
//
//	ac1.username = "John";
//	ac1.passwd = "qwerty";
//
//	// Serialization
//	json json_data = ac1;
//
//	std::cout << json_data["username"] << std::endl;
//	std::cout << json_data["passwd"] << std::endl;
//
//	std::cout << std::endl;
//
//	// Deserialization
//	Account ac2;
//
//	ac2 = json_data;
//
//	std::cout << ac2.username << std::endl;
//	std::cout << ac2.passwd << std::endl;

	/*std::ifstream file("data.json");

	json json_data = json::parse(file);

	std::cout << json_data.dump(4) << std::endl;

	std::cout << json_data["id"] << std::endl;

	for (size_t i = 0; i < json_data["children"].size(); i++)
	{
		std::cout << json_data["children"][i]["age"] << std::endl;
	}*/

	// stdout
	// stderr
	// stdin

	/*int a;
	fprintf(stdout, "qwerty");
	fprintf(stderr, "Error: qwerty");
	fscanf(stdin, "%d", &a);*/

	//std::ofstream file("data.txt");
	//
	//file << "Some text 1.\n";
	//file << "Some text 2.\n";
	//file << "Some text 3.\n";

	//file.close();

	//std::string line;
	//std::ifstream file("appidcertstorecheck.exe", std::ios::binary);
	//
	//int ch;
	//int count = 0;
	//while ((ch = file.get()) != EOF) {
	//	//std::cout << std::hex << 10;
	//	//std::cout << std::oct << 10;
	//	//std::cout << std::dec << 10;

	//	count++;

	//	if (count > 17) {
	//		putchar('\n');
	//		count = 0;
	//	}
	//	else {
	//		printf("%d ", ch);
	//	}
	//}

	//while ((ch = file.get()) != EOF) {
	//	count++;

	//	if (count > 17) {
	//		putchar('\n');
	//		count = 0;
	//	}
	//	else {
	//		if (ch == 0) {
	//			putchar('.');
	//		}
	//		else {
	//			printf("%c", (char)ch);
	//		}
	//	}
	//}

	//file.close();

	//std::cout << file.get() << std::endl;
	//std::cout << "index: " << file.tellg() << std::endl;
	//std::cout << file.get() << std::endl;
	//std::cout << "index: " << file.tellg() << std::endl;
	//std::cout << file.get() << std::endl;
	//std::cout << "index: " << file.tellg() << std::endl;
	//std::cout << file.get() << std::endl;
	//std::cout << "index: " << file.tellg() << std::endl;

	/*if (file.is_open()) {
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
		}
	}
	else {
		std::cerr << "Error: The file is unavailable." << std::endl;
	}

	file.close();*/




	return 0;
}