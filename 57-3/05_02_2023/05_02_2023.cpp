#include <iostream>
#include <vector>

//class VECTOR
//{
//public:
//	void push_back() {}
//	void clear() {}
//	int size() { return rand(); };
//	// ...
//private:
//	int* data;
//};

//class Tuning {
//public:
//	void setClearance(int val) { 
//		clearence = val;
//		std::cout << "Set clearance: " << val << std::endl; 
//	}
//
//private:
//	int clearence;
//};

//class CarCharacteristics {
//protected:
//	int hp;
//	int weight;
//	int wheelSize;
//};
//
//class Car : public CarCharacteristics //, public Tuning
//{
//public:
//	void startEngine() {
//		std::cout << "Engine is starting.\n";
//	}
//
//	void openDoor(unsigned index) {
//		std::cout << "Door (" << index << ") was opened.\n";
//	}
//
//	int getHP() {
//		return hp;
//	}
//
//};

class Book {
public:
	Book(unsigned val) {
		std::cout << "Constructor\n";
		countPage = val;
	}

	unsigned getSize() {
		return countPage;
	}

	~Book() {
		std::cout << "Destructor\n";
	}

private:
	unsigned countPage;
};

int main()
{
	Book book1(100);

	book1.getSize();

	Book* book2 = new Book(150);

	book2->getSize();

	delete book2;

	//Car car1; 
	//car1.openDoor(1);
	//car1.startEngine();
	//car1.setClearance(10);

	/*
	std::vector<int> v1;

	v1.push_back(rand());
	v1.push_back(rand());
	v1.push_back(rand());
	v1.push_back(rand());
	v1.push_back(rand());
	v1.push_back(rand());

	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	*/

	//for (size_t i = 0; i < v1.size(); i++)
	//{
	//	std::cout << v1[i] << std::endl;
	//}

	//v1.clear();

	//std::cout << "Size: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl;

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i * i);
	//}


	return 0;
}