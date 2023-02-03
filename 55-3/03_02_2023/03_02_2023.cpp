#include <iostream>
#include <vector>
#include <list>

//class A {
//public:
//	A(int a, int c) {
//		b = a + c;
//	}
//	int b;
//};

//template <class T, class K> class Point {
//public:
//	T x;
//	K y;
//};

class Car
{
public:
	Car(int val) {
		numberOfSeats = val;
	}

	Car(int val1, int val2) {
		numberOfSeats = val1;
		wheelRadius = val2;
	}

	int getNumberOfSeats() {
		return numberOfSeats;
	}

	int getWheelRadius() {
		return wheelRadius;
	}

private:
	int numberOfSeats = 0;
	int wheelRadius = 0;
};

int main()
{
	Car car1(5, 20);
	std::cout << car1.getNumberOfSeats() << std::endl;


	/*Point<int, float> p1;
	std::cout << "Type of data: " << typeid(p1.x).name() << ' ' << typeid(p1.y).name() << std::endl;

	Point<double, short> p2;
	std::cout << "Type of data: " << typeid(p2.x).name() << ' ' << typeid(p2.y).name() << std::endl;*/

	/*std::list<int> list1;

	list1.push_back(30);
	list1.push_back(30);
	list1.push_back(30);
	list1.push_back(20);
	list1.push_back(10);
	list1.push_back(90);
	list1.push_back(30);

	list1.unique();
	list1.sort();*/

	//for (size_t i = 0; i < 10; i++)
	//	list1.push_back(i * i);

	/*std::cout << "First element: " << list1.front() << std::endl;
	std::cout << "Last element: " << list1.back() << std::endl;*/

	/*for (const auto& el : list1)
		std::cout << el << std::endl;*/

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//	v1.push_back(i * i);

	////v1.erase(v1.begin() + 1, v1.end() - 1);

	//for (const auto& el : v1)
	//	std::cout << el << std::endl;

	

	//int a = 10;
	//int b = ++a;
	//std::cout << b << std::endl;

	/*
	for (auto& el : v1)
	{
		std::cout << el << std::endl;
	}
	*/

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
	//	// *it = 10;
	//	std::cout << *it << std::endl;
	//}

	//for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
	//	// *it = 10;
	//	std::cout << *it << std::endl;
	//}

	//for (std::vector<int>::iterator it = --v1.end(); it >= v1.begin(); it--) {
	//	// *it = 10;
	//	std::cout << *it << std::endl;
	//}

	//for (std::vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++) {
	//	// *it = 10;
	//	std::cout << *it << std::endl;
	//}
	//for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
	//	// *it = 10;
	//	std::cout << *it << std::endl;
	//}


	////A a(10, 20);

	//std::vector<int> v1;
	//
	////v1.push_back(a);
	////v1.emplace_back(10, 20);

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i * i);

	//	std::cout << "Size: " << v1.size() << std::endl;
	//	std::cout << "Capacity: " << v1.capacity() << "\n\n";
	//}

	////v1.clear();
	////v1.shrink_to_fit();
	//std::cout << "================\nSize: " << v1.size() << std::endl;
	//std::cout << "Capacity: " << v1.capacity() << std::endl;

	/*int* arr = new int[3]();

	for (size_t i = 0; i < 3; i++)
	{
		arr[i] = rand();
	}

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	delete arr;*/

	return 0;
}
