#include "Car.h"

void Car::setHP(int val) {
	if (val > 0 && val < 500) {
		hp = val;
	}
	else {
		hp = 1;
	}
}

int Car::getHP() {
	return hp;
}