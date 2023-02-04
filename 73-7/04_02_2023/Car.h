#pragma once
#include <iostream>

class Car {
public:
    Car();
    Car(int, int);
    Car(int, int, int);

    ~Car();

    int getHP();
    int getWeigth();
    int getWheelSize();

    void setHP(int);
    void setWeigth(int);
    void setWheelSize(int);

private:
    int hp;
    int wheelSize;
    int weigth;
    int* data;
};