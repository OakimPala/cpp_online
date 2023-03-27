#include "Car.h"

Car::Car() {
    hp = 0;
    wheelSize = 0;
    weigth = 0;

    data = new int;

    //std::cout << "Constructor 0" << std::endl;
}

Car::Car(int new_hp, int new_wheelSize) {
    hp = new_hp;
    wheelSize = new_wheelSize;
    weigth = 0;

    data = new int;

    std::cout << "Constructor 2" << std::endl;
}

Car::Car(int new_hp, int new_wheelSize, int new_weigth) {
    hp = new_hp;
    wheelSize = new_wheelSize;
    weigth = new_weigth;

    data = new int;

    std::cout << "Constructor 3" << std::endl;
}

Car::~Car() {
    delete data;
    //std::cout << "Destructor" << std::endl;
}

void Car::setHP(int new_hp) {
    hp = new_hp;
}

int Car::getHP() {
    return hp;
}

void Car::setWheelSize(int new_wheelSize) {
    wheelSize = new_wheelSize;
}

int Car::getWheelSize() {
    return wheelSize;
}

void Car::setWeigth(int new_weigth) {
    weigth = new_weigth;
}

int Car::getWeigth() {
    return weigth;
}