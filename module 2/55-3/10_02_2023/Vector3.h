#pragma once
#include <iostream>

class Vector3
{
public:
	Vector3();
	Vector3(int, int, int);
	~Vector3();

	int getX() const;
	int getY() const;
	int getZ() const;

	void setX(int);
	void setY(int);
	void setZ(int);

private:
	int x, y, z;
};