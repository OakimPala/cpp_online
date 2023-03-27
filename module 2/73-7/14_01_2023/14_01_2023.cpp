#include <iostream>
#include <vector>

class Point
{
public:
	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	int getZ() {
		return z;
	}

	void setY(int y_) {
		y = y_;
	}

	void setX(int x_) {
		x = x_;
	}

	void setZ(int z_) {
		z = z_;
	}

private:
	int x = 0, y = 0, z = 0;
};

int main()
{
	/*std::vector<Point*> v1;

	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(new Point());

		v1[i]->setX(rand() % 10);
		v1[i]->setY(rand() % 10);
		v1[i]->setZ(rand() % 10);
	}

	for (size_t i = 0; i < v1.size(); i++)
	{
		std::cout << "x: " << v1[i]->getX()
			<< " y: " << v1[i]->getY()
			<< " z: " << v1[i]->getZ()
			<< std::endl;
	}*/

	std::vector<int> vec2;

	for (size_t i = 0; i < 50; i++)
	{

	}


	Point* p1 = new Point();

	// -> (for pointers (heap))
	// . (for objects (stack))

	p1->setX(5);
	p1->setY(-5);
	p1->setZ(15);


	delete p1;

	return 0;
}


//#include <iostream>
//
//void printSmth(int*, int*);
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	printSmth(&a, &b);
//
//	// Ctrl + C >> Ctrl + K >> Ctrl + C (coment)	
//	// Ctrl + K >> Ctrl + U	(uncoment)
//	// Ctrl + R	(rename)
//	// alt + LEFT MOUSE
//
//	/*std::cout << "sizeof int*: " << sizeof(int*) << std::endl;
//	std::cout << "sizeof double*: " << sizeof(double*) << std::endl;
//	std::cout << "sizeof float*: " << sizeof(float*) << std::endl;*/
//
//	std::cout << __FUNCTION__ << "| a: " << a << " b: " << b << std::endl;
//	std::cout << __FUNCTION__ << "| ptr_a: 0x" << &a << " ptr_b: 0x" << &b << std::endl;
//
//	return 0;
//}
//
//void printSmth(int* ptr_a, int* ptr_b) {
//	std::cout << __FUNCTION__ << "| a: " << *ptr_a << " b: " << *ptr_b << std::endl;
//	std::cout << __FUNCTION__ << "| ptr_a: 0x" << ptr_a << " ptr_b: 0x" << ptr_b << std::endl;
//
//	*ptr_a = *ptr_a * 10;
//	*ptr_b = *ptr_b * 10;
//}