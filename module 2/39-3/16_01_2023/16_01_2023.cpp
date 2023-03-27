#include <iostream>
#include <vector>
#include "Point.h"

//#define MUL(a, b) (a * b)
void mul(int*, int*);

int main()
{
	std::vector<Point*> v1;

	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(new Point());

		v1[i]->setX(i * i);
		v1[i]->setY(i * i);
		v1[i]->setZ(i * i);
		
		std::cout << "x: " << v1[i]->getX() <<
			" y: " << v1[i]->getY() <<
			" z: " << v1[i]->getZ() <<
			std::endl;
	}

	/*Point* p1 = new Point();

	std::cout << p1->getX() << std::endl;

	delete p1;*/


	/*Point p2;

	p1.setX(2);

	std::cout << p1.getX() << std::endl;*/

	//int a = 1;
	//int b = 2;

	//mul(&a, &b);

	//std::cout << "a: " << a << " b: " << b << std::endl;

	// Ctrl + C >> Ctrl + K >> Ctrl + C
	// Ctrl + K >> Ctrl + U
	// Ctrl + D
	// Ctrl + R
	// Alt + LEFT MOUSE

	return 0;
}

void mul(int* a, int* b) {
	std::cout << *a * *b << std::endl;
	*a = 10;
	*b = 20;
}