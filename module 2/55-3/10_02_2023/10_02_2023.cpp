#include <iostream>
#include <vector>
#include <string>

#include "Vector3.h"

int main()
{
	std::vector<Vector3> vectors;

	/*int value_bin = 0b101010;
	int value_oct = 0132;
	int value_hex = 0x0000FFF;*/

	for (size_t i = 0; i < 2; i++)
	{
		vectors.push_back(Vector3(rand() % 100, rand() % 100, rand() % 100));
	}

	// auto
	// std::vector<Vector3>::iterator

	for (const auto& vector : vectors)
	{
		std::cout << vector.getX() << ' ' <<
			vector.getY() << ' ' <<
			vector.getZ() << std::endl;
	}
	
	/*float a = 0.3333333333333;

	Vector3 v1(34, 21, 43);

	std::cout << std::to_string(a) + "\n";*/

	//v1.setX(10);

	//std::cout << v1.getX() << ' ' << 
	//			 v1.getY() << ' ' << 
	//			 v1.getZ() << std::endl;

	//std::cout << &v1 << std::endl;

	return 0;
}