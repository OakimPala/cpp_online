#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>
//#include <io.h>
//#include <fcntl.h>

//std::wstring incryptCaser(std::wstring data, const int key) {
//	for (int i = 0; i < data.length(); i++)
//		data[i] += key;
//	return data;
//}
//
//std::wstring decryptCaser(std::wstring data, const int key) {
//	for (int i = 0; i < data.length(); i++)
//		data[i] -= key;
//	return data;
//}
//class Animal {
//public:
//	virtual void walk() = 0;
//	virtual void eat() = 0;
//};
//
//class Cat : public Animal {
//public:
//	void eat() override {
//		std::cout << "Meow, the cat is eating." << std::endl;
//	}
//
//	void walk() override {
//		std::cout << "Meow, the cat is walking." << std::endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void eat() override {
//		std::cout << "Woof, the cat is eating." << std::endl;
//	}
//
//	void walk() override {
//		std::cout << "Woof, the cat is walking." << std::endl;
//	}
//};
//class BankAccount {
//private:
//	BankAccount() {
//
//	}
//
//	BankAccount(long serialNumber) {
//		this->serialNumber = serialNumber;
//	}
//
//	long serialNumber = 0;
//
//	friend class Bank;
//	friend class Bank2;
//	friend class Animal;
//};
//
//class Bank {
//public:
//	void addClient(long serialNumber) {
//		clients.push_back(BankAccount(serialNumber));
//	}
//
//private:
//	std::vector<BankAccount> clients;
//};

int main()
{
	const int size = 10;
	std::vector<int> v_data;

	for (int i = 0; i < size; i++)
		v_data.push_back(i);
	
	// =================================================

	std::list<int> l_data;

	for (int i = 0; i < size; i++)
		l_data.push_back(i);

	// =================================================
	// =================================================
	// =================================================

	/*
		1) iterator
		2) reverse_iterator
		3) const_iterator
		4) const_reverse_iterator
	*/

	for (std::vector<int>::const_iterator it = v_data.cbegin(); it != v_data.cend(); it++) {
		std::cout << *it << std::endl;
	}
		

	std::vector<  std::vector<int>  > v_2d_data;

	for (int i = 0; i < 10; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j  < 10; j ++)
		{
			temp.push_back(j);
		}
		v_2d_data.push_back(temp);
	}

	/*for (std::vector<int>::const_iterator it = v_data.cbegin(); it != v_data.cend(); it++) {
		std::cout << *it << std::endl;
	}*/

	for (std::vector<std::vector<int>>::const_iterator it_i = v_2d_data.cbegin(); it_i != v_2d_data.cend(); it_i++) {
		
		for (std::vector<int>::const_iterator it_j = (*it_i).cbegin(); it_j != (*it_i).cend(); it_j++) {
			std::cout << *it_j << ' ';
		}

		std::cout << std::endl;
	}

	//Bank centralBank;
	//centralBank.addClient(87372487238);
	//centralBank.addClient(87329423487);
	//centralBank.addClient(72874239483);
	//centralBank.addClient(88923849283);

	//Cat obj_cat_1;
	//Dog obj_dog_1;

	//obj_cat_1.eat();
	//obj_cat_1.walk();

	//_setmode(_fileno(stdout), _O_U16TEXT);

	//const int key = 500;
	//std::wstring data = L"qwerty";

	//data = incryptCaser(data, key);
	//std::wcout << L"Incrypt: " << data << std::endl;
	//
	//data = decryptCaser(data, key);
	//std::wcout << L"Decrypt: " << data << std::endl;

	return 0;
}