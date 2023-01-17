#pragma once
class Point
{
public:
	int getX();
	int getY();
	int getZ();

	void setX(int);
	void setY(int);
	void setZ(int);

private:
	int x = 0, y = 0, z = 0;
};