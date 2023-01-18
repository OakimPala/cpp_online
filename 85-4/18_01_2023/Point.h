#pragma once
#include <iostream>
//#ifndef POINT_H_
//#define POINT_H_

// private public protected
class Point {
public:
	Point() {
		std::cout << "Constructor " << this << std::endl;
		x = y = z = 0;
	}

	~Point() {
		std::cout << "Destructor " << this << std::endl;
	}

	// Getters
	int getX();
	int getY();
	int getZ();
	// !Getters

	// Setters
	void setX(int);
	void setY(int);
	void setZ(int);
	// !Setters

private:
	int x, y, z;
};

//#endif // !POINT_H_