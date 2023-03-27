#pragma once
class Point
{
public:
	// Getters
	int getX();
	int getY();
	int getZ();
	// !Getters

	// Setters
	void setX(int x);
	void setY(int y);
	void setZ(int z);
	// !Setters

private:
	int x = 0, y = 0, z = 0;
};

