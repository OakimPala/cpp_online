#include <iostream>
#include <vector>

class Point {
public:
	int getX() {
		return x;
	}

	void setX(int x_) {
		x = x_;
	}

	
	int getY() {
		return y;
	}

	void setY(int y_) {
		y = y_;
	}

	
	int getZ() {
		return z;
	}

	void setZ(int z_) {
		z = z_;
	}

private:
	int x = 0, y = 0, z = 0;
};

//namespace A {
//	void foo() {
//		std::cout << __FUNCTION__ << std::endl;
//	}
//}
//
//namespace B {
//	void foo() {
//		std::cout << __FUNCTION__ << std::endl;
//	}
//}

//void printSmth(int*, int*);

int main()
{
	int* a;

	while (true)
	{
		a = new int();
	}

	std::vector<Point*> v1;
	
	for (unsigned i = 0; i < 10; i++)
	{
		v1.push_back(new Point());

		// rand() % 100 + 1
		v1[i]->setX(rand() % 100 + 1);
		v1[i]->setY(rand() % 100 + 1);
		v1[i]->setZ(rand() % 100 + 1);

		std::cout << "x: "
			<< v1[i]->getX() << " y: "
			<< v1[i]->getY() << " z: "
			<< v1[i]->getZ() <<
			std::endl;
	}

	for (unsigned i = 0; i < v1.size(); i++)
	{
		delete v1[i];
	}

	//v1.push_back(1);
	//v1.push_back(2);
	//v1.push_back(3);
	//v1.push_back(4);

	//for (unsigned i = 0; i < v1.size(); i++)
	//{
	//	std::cout << v1[i] << std::endl;
	//}

	Point* p1 = new Point();

	p1->getX();

	delete p1;

	// Ctrl + C >> Ctrl + K >> Ctrl + C
	// Ctrl + K >> Ctrl + C
	// Ctrl + D

	/*int a = 5;
	int b = 5;

	std::cout << "val: " << a << std::endl;
	std::cout << "addr: 0x" << &a << std::endl;

	std::cout << "sizeof(int): " << sizeof(int) << std::endl;
	std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;

	std::cout << "a: " << a << " b: " << b << std::endl;

	printSmth(&a, &b);

	std::cout << "a: " << a << " b: " << b << std::endl;*/

	return 0;
}

//void printSmth(int* a, int* b) {
//	std::cout << __FUNCTION__ << std::endl;
//	
//	*a = 10;
//	*b = 20;
//}