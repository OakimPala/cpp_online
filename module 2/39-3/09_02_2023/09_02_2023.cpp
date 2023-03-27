#include <iostream>
#include <vector>

//class MyClass {
//public:
//	MyClass() {
//		std::cout << "Constructor: " << this << std::endl;
//	}
//
//	void setValue(int value) {
//		this->value = value;
//	}
//
//	int getValue() {
//		return value;
//	}
//
//	~MyClass() {
//		std::cout << "Destructor: " << this << std::endl;
//	}
//
//private:
//	int value;
//};

//class Car {
//public:
//	Car() {
//		std::cout << "Constructor: " << this << std::endl;
//	}
//
//	~Car() {
//		std::cout << "Destructor: " << this << std::endl;
//	}
//
//	void setHP(int hp) {
//		if (hp > 0 && hp < 1200) {
//			this->hp = hp;
//		}
//		else {
//			this->hp = 1;
//		}
//	}
//
//	int getHP() {
//		return hp;
//	}
//
//
//private:
//	int hp;
//};

int main()
{
	std::vector<double> data;

	for (size_t i = 0; i < 10; i++)
	{
		data.push_back((double)i / (rand() + 1));
	}

	for (auto it = data.begin(); it != data.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	data.shrink_to_fit();

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;

	/*int* arr = new int[10];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand();
	}

	delete arr;*/

	/*Car audi;
	Car subaru;
	Car ford;*/

	//Car* audi = new Car();
	//Car* subaru = new Car();
	//Car* ford = new Car();

	//audi->getHP();

	//delete audi;
	//delete subaru;
	//delete ford;

	//audi.setHP(-1000);

	//std::cout << "HP: " << audi.getHP() << std::endl;

	//MyClass a;
	//std::cout << "Object A (addr): " << &a << std::endl;
	//a.setValue(10);
	//std::cout << "A value: " << a.getValue() << std::endl;

	//MyClass b;
	//std::cout << "Object B (addr): " << &b << std::endl;
	//b.setValue(20);
	//std::cout << "B value: " << b.getValue() << std::endl;

	/*int value = 10;

	int* ptr_value = &value;

	std::cout << ptr_value << std::endl;
	std::cout << *ptr_value << std::endl;
	std::cout << value << std::endl;
	std::cout << "====================================\n";
	
	*ptr_value = 100;

	std::cout << ptr_value << std::endl;
	std::cout << *ptr_value << std::endl;
	std::cout << value << std::endl;

	int* arr = new int[10];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	delete arr;*/

	return 0;
}







//MyClass() {
//	std::cout << "Constructor" << std::endl;
//}
//
//~MyClass() {
//	std::cout << "Destructor" << std::endl;
//}