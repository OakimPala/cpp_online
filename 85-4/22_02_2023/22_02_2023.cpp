#include <iostream>
#include <vector>
//#include <chrono>

//int search(std::vector<int>& data, int left, int right, int target) {
//	for (int i = left; i < right; i++)
//	{
//		if (data[i] == target) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//int searchBin(std::vector<int>& data, int left, int right, int target) {
//	int mid_index = 0;
//
//	while (left <= right)
//	{
//		mid_index = (left + right) / 2;
//
//		if (target < data[mid_index])
//			right = mid_index - 1;
//		else if (target > data[mid_index])
//			left = mid_index + 1;
//		else
//			return mid_index;
//	}
//
//	return -1;
//}

//class Animal {
//public:
//	void walk() {
//		std::cout << "Animal is walking." << std::endl;
//	}
//
//	void rotate() {
//		std::cout << "Animal is rotating." << std::endl;
//	}
//
//	void eat() {
//		std::cout << "Animal is eating." << std::endl;
//	}
//
//	void setWeight(int weight)
//	{
//		this->weight = weight;
//	}
//
//	int getWeight() {
//		return weight;
//	}
//
//private:
//	int weight;
//};
//
//class Cat : public Animal {
//	void emitSound() {
//		std::cout << "Meow Meow Meow" << std::endl;
//	}
//};
//
//class Dog : public Animal {
//	void emitSound() {
//		std::cout << "Woof Woof Woof" << std::endl;
//	}
//};
//
//class Raccoon : public Animal {
//	void emitSound() {
//		std::cout << "Shhh Shhh Shhh" << std::endl;
//	}
//};

class BankAccount {
private:
	BankAccount(long seriallNumber) {
		this->seriallNumber = seriallNumber;
	}

	long getSerialNumber() {
		return seriallNumber;
	}

	long seriallNumber = 0;

	friend class Bank;
};

class Bank {
public:
	void addClient(long sn) {
		accounts.push_back(BankAccount(sn));
	}

private:
	std::vector<BankAccount> accounts;
};

int main()
{
	Bank centralBank;
	centralBank.addClient(89328049328094);
	centralBank.addClient(82492093492093);
	centralBank.addClient(34928492383444);

	//Cat cat1;
	//Dog dog1;
	//Raccoon raccoon1;

	//std::vector<Animal> animals;

	//animals.push_back(cat1);
	//animals.push_back(dog1);
	//animals.push_back(raccoon1);

	//for (const auto& animal : animals) {
	//	std::cout << "Addr: " << &animal << " Type of data: " << typeid(&animal).name() << std::endl;
	//}

	//const int size = 1000000;

	//std::vector<int> data;

	//for (size_t i = 0; i < size; i++)
	//{
	//	data.push_back(i);
	//}

	//int res = 0;
	//float sum = 0;

	//std::chrono::steady_clock::time_point t1, t2;

	//for (int i = 0; i < 200; i++)
	//{
	//	t1 = std::chrono::steady_clock::now();
	//	//res = search(data, 0, data.size(), size - 1);
	//	res = searchBin(data, 0, data.size(), size - 1);
	//	t2 = std::chrono::steady_clock::now();

	//	sum += std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	//}

	//std::cout << "Time difference = " << sum / 200.0f << std::endl;

	//std::cout << "Index: " << res << std::endl;

	return 0;
}