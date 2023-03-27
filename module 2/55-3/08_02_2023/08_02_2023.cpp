#include <iostream>
#include <vector>
#include <list>

#include "Car.h"

//void incrementVec(std::vector<int>& v1) {
//	for (auto& el : v1) el++;
//}

class MyClass
{
public:
	MyClass() {
		std::cout << "Constructor: " << this << std::endl;
	}

	void setValue(int value) {
		this->value = value;
	}

	int getValue() {
		return value;
	}

	~MyClass() {
		std::cout << "Destructor: " << this << std::endl;
	}

private:
	int value = 10;
};

int main()
{
	MyClass a;
	
	std::cout << "a (addr): " << &a << std::endl;

	MyClass b;

	std::cout << "b (addr): " << &b << std::endl;

	system("pause");
	// size_t
	// this

	//std::vector<long long> v1;
	//

	//for (size_t i = 20; i >= 0; i-=2)
	//{
	//	v1.push_back(i);
	//	std::cout << "MAX: " << v1.max_size() << ' ' << i << std::endl;
	//}

	//Car car;

	//car.setHP(500);

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i * i);
	//}

	//incrementVec(v1);

	//for (auto& el : v1)
	//{
	//	std::cout << el << std::endl;
	//}

	//int val = 123;
	//	
	///*int val_dec = 13542;
	//int val_bin = 0b1010;
	//int val_oct = 045;
	//int val_hex = 0x00000FFF;*/

	//int* ptr_val = &val;
	//
	//int& val_ref = *ptr_val;

	//int* val_ref_ptr = &val_ref;

	////*ptr_val = 321;
	//val_ref = 321;
	//std::cout << val << std::endl;
	////std::cout << *ptr_val << std::endl;
	//std::cout << &val_ref << std::endl;
	//std::cout << &val << std::endl;
	
	//int* ptr = new int;
	//for (size_t i = 0; i < 50; i++)
	//{
	//	std::cout << (ptr + i) << ' ' << *(ptr + i) << std::endl;
	//}
	//delete ptr;


	/*std::vector<int> v1;

	v1.push_back(5);
	v1.insert(v1.begin(), 10);
	v1.emplace_back(10);

	v1.erase(v1.begin(), v1.end());

	v1.shrink_to_fit();

	for (auto el : v1) {
		std::cout << el << std::endl;
	}*/

	return 0;
}