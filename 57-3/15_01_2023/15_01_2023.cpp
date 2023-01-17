//#include <iostream>
#include "Point.h"
#include <vector>

#define RAND rand() % 10 + 1

int main()
{
	std::vector<Point*> v1;

	for (unsigned i = 0; i < 100; i++)
	{
		v1.push_back(new Point());

		v1[i]->setX(RAND);
		v1[i]->setY(RAND);
		v1[i]->setZ(RAND);

		std::cout << "x: " << v1[i]->getX()
			<< " y: " << v1[i]->getY()
			<< " z: " << v1[i]->getZ()
			<< std::endl;
	}

	//Point* point = new Point();

	/*Point* point;

	while (true) {
		point = new Point();
	}*/

	//delete point;
	return 0;
}

//#include <iostream>
//
//__forceinline void mul(int, int, int*);
//
//void printSmth(int);
//
//int main()
//{
//	int res = 0;
//	//std::cout << MUL(1 + 2, 2 + 1) << std::endl;
//	//printSmth(A);
//	mul(1 + 2, 2 + 1, &res);
//
//	std::cout << res << std::endl;
//	return 0;
//}
//
//void printSmth(int a) {
//	std::cout << "print" << std::endl;
//}
//
//__forceinline void mul(int a, int b, int* res) {
//	*res = a * b;
//	return;
//}