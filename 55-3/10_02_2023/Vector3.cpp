#include "Vector3.h"

Vector3::Vector3() {
	std::cout << "Constructor: " << this << std::endl;
	x = y = z = 0;
}

Vector3::Vector3(int x, int y, int z) {
	std::cout << "Constructor: " << this << std::endl;

	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::~Vector3() {
	std::cout << "Destructor: " << this << std::endl;
}

int Vector3::getX() const {
	return x;
}

void Vector3::setX(int x) {
	this->x = x;
}

int Vector3::getY() const {
	return y;
}

void Vector3::setY(int y) {
	this->y = y;
}

int Vector3::getZ() const {
	return z;
}

void Vector3::setZ(int z) {
	this->z = z;
}