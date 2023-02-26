#include <iostream>
#include <vector>
#include <io.h>
#include <fcntl.h>

//class Animal {
//public:
//	virtual void walk() = 0;
//	virtual void eat() = 0;
//};
//
//class Dog : public Animal {
//public:
//	void walk() override {
//		std::cout << "Dog is walking." << std::endl;
//	}
//
//	void eat() override {
//		std::cout << "Dog is eating." << std::endl;
//	}
//};
//
//class Cat : public Animal {
//public:
//	void walk() override {
//		std::cout << "Cat is walking." << std::endl;
//	}
//
//	void eat() override {
//		std::cout << "Cat is eating." << std::endl;
//	}
//};
//
//class Raccoon : public Animal {
//public:
//	void walk() override {
//		std::cout << "Raccoon is walking." << std::endl;
//	}
//
//	void eat() override {
//		std::cout << "Raccoon is eating." << std::endl;
//	}
//};

//class BankAccount {
//private:
//	BankAccount(int serialNumber) {
//		this->serialNumber = serialNumber;
//	}
//
//	int serialNumber;
//
//	friend class Bank;
//};
//
//class Bank {
//public:
//	Bank() {
//
//	}
//
//	void addClient(int serialNumber) {
//		accounts.push_back(BankAccount(serialNumber));
//	}
//
//private:
//	std::vector<BankAccount> accounts;
//};

std::vector<long> incryptCesar(std::vector<long> data, const int key) {
	for (int i = 0; i < data.size(); i++)
		data[i] = data[i] + key;
	return data;
}

std::vector<long> decryptCesar(std::vector<long> data, const int key) {
	for (int i = 0; i < data.size(); i++)
		data[i] = data[i] - key;
	return data;
}

void setStringToVector(std::vector<long>& data, std::wstring str) {
	data.clear();
	data.shrink_to_fit();

	for (int i = 0; i < str.length(); i++)
		data.push_back(str[i]);
	return;
}

void printStringFromVector(std::vector<long> data) {
	for (int i = 0; i < data.size(); i++)
		if (data[i] < 0 || data[i] > WCHAR_MAX)
			std::wcout << '*';
		else
			std::wcout << (wchar_t)data[i];
}

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);

	const int key = INT_MAX;

	/*std::string data = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, "
		"sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim "
		"ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip "
		"ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate "
		"velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat "
		"cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id "
		"est laborum.";*/

	//std::wstring data = L"qwerty";

	std::wcout << L"\023" << std::endl;

	std::vector<long> data;

	setStringToVector(data, L"Lorem ipsum dolor sit amet, consectetur adipiscing elit.");

	std::wcout << L"String: ";
	printStringFromVector(data);
	std::wcout << std::endl << std::endl;

	data = incryptCesar(data, key);

	std::wcout << L"Incrypt string: "; printStringFromVector(data); std::wcout << std::endl << std::endl;
	
	data = decryptCesar(data, key);

	std::wcout << L"Decrypt string: "; printStringFromVector(data); std::wcout << std::endl << std::endl;

	/*std::wcout << L"String: " << data << std::endl << std::endl;

	data = incryptCesar(data, key);

	std::wcout << L"Incrypt string: " << data << std::endl << std::endl;

	data = decryptCesar(data, key);

	std::wcout << L"Decrypt string: " << data << std::endl << std::endl;*/

	//Bank centralBank;
	//centralBank.addClient(891823918293183);
	//centralBank.addClient(829389238293839);

	//Cat cat;
	//cat.walk();
	//cat.eat();

	//Dog dog;
	//dog.walk();
	//dog.eat();

	return 0;
}