#include <iostream>

__forceinline int mul(int a, int b);

void printSmth(int*, int*, int*);

int main()
{

	//std::vector<Point*> vec1;

	//for (unsigned i = 0; i < 10; i++)
	//{
	//	vec1.push_back(new Point());
	//	vec1[i]->setX(i);
	//	vec1[i]->setY(i * 10);
	//	std::cout << "x: " << vec1[i]->getX()
	//		<< "y: " << vec1[i]->getY()
	//		<< std::endl;
	//}

	////Point p1;

	////p1.setX(10);
	////p1.setY(20);
	////p1.setZ(30);

	////std::cout << "x: " << p1.getX() << std::endl;
	////std::cout << "y: " << p1.getY() << std::endl;
	////std::cout << "z: " << p1.getZ() << std::endl;

	int a = 0b00000001;
	int b = 002;
	int c = 0x00000003;

	int* ptr_a = &a;

	printSmth(&a, &b, &c);

	std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;

	//#define MUL(a, b) (a * b)

	int res = mul(1 + 2, 2 + 1);

	return 0;
}

__forceinline int mul(int a, int b) {
	return a * b;
}

void printSmth(int* a, int* b, int* c) {
	std::cout << "a: " << *a
		<< " b: " << *b
		<< " c: " << *c
		<< std::endl;

	*a = 10;
	*b = 20;
	*c = 30;
}