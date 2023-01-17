#pragma once
#include <iostream>

class Point
{
public:
	Point();

	int getX();
	int getY();
	int getZ();

	void setX(int);
	void setY(int);
	void setZ(int);

	~Point();
private:
	int x, y, z;
};
