#include "Point.h"

Point::Point() {
	x = y = z = 0;
	//std::cout << "Constructor\n";
}

int Point::getX() {
	return x;
}

void Point::setX(int x_) {
	x = x_;
}

int Point::getY() {
	return y;
}

void Point::setY(int y_) {
	y = y_;
}

int Point::getZ() {
	return z;
}

void Point::setZ(int z_) {
	z = z_;
}

Point::~Point() {
	//std::cout << "Destructor\n";
}