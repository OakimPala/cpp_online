#include "Point.h"
#include <vector> // STL

//#define MUL(a, b) ((a) * (b))

// Comment: Ctrl + C >> Ctrl + K >> Ctrl + C
// Uncoment: Ctrl + K >> Ctrl + U
// Dublicate: Ctrl + D
// Highlight section: Alt + LEFT MOUSE
// Rename: Ctrl + R
// Move: Alt + (стрелки)

void change(int*);

int main()
{
	srand(time(NULL));

	std::vector<Point*> v1;

	for (unsigned i = 0; i < rand() % 100 + 1; i++)
	{
		v1.push_back(new Point());

		v1[i]->setX(rand() % 800 + 1);
		v1[i]->setY(rand() % 800 + 1);
		v1[i]->setZ(rand() % 800 + 1);

		printf("x: %3d y: %3d z: %3d\n", 
			v1[i]->getX(), v1[i]->getY(), v1[i]->getZ());
	}

	for (unsigned i = 0; i < v1.size(); i++)
	{
		delete v1[i];
	}

	Point* p1 = new Point();
	Point* p2 = new Point();

	delete p1;
	delete p2;

	//int a = MUL(1 + 2, 2 + 1);
	// 1 + 2 * 2 + 1
	//Point p1;
	//p1.setX(10);
	
	/*std::cout << "x: " << p1.getX() << std::endl;
	
	std::cout << "adrr p1: " << &p1 << std::endl;
	std::cout << "adrr p2: " << &p2 << std::endl;
	std::cout << "=======================" << std::endl;*/

	//int a = 10;
	//change(&a);

	//std::cout << a << std::endl;

	return 0;
}

void change(int* a) {
	*a = 102;
	return;
}