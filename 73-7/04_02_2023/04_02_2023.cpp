#include <iostream>
#include <vector>

#include "Car.h"

//class A {
//public:
//    A(int a, int b) { sum = a + b; }
//    int get() const { return sum; }
//    void set(int sum) { this->sum = sum; }
//private:
//    int sum;
//};

// setWheelSize // method

// Car // class

// car1 // object of class

int main()
{
    /*Car car1;
    std::cout << "HP: " << car1.getHP() << std::endl;
    std::cout << "Weigth: " << car1.getWeigth() << std::endl;
    std::cout << "Wheel size:" << car1.getWheelSize() << std::endl;

    Car car2(300, 18);
    std::cout << "HP: " << car2.getHP() << std::endl;
    std::cout << "Weigth: " << car2.getWeigth() << std::endl;
    std::cout << "Wheel size:" << car2.getWheelSize() << std::endl;

    Car car3(100, 10, 500);
    std::cout << "HP: " << car3.getHP() << std::endl;
    std::cout << "Weigth: " << car3.getWeigth() << std::endl;
    std::cout << "Wheel size:" << car3.getWheelSize() << std::endl;*/

    std::vector<Car> v1;

    while (true) {
        v1.push_back(Car());
        v1.clear();
        v1.shrink_to_fit();
    }



    //std::vector<A> v1;
    //
    //for (size_t i = 0; i < 10; i++)
    //{
    //    //v1.push_back(A(i, i));
    //    v1.emplace_back(i, i);
    //}

    ////std::cout << (*--v1.end()).get() << std::endl;

    ////std::cout << "Last element: " << v1.back().get() << std::endl;
    //
    ///*for (auto it = v1.begin(); it != v1.end(); it++)
    //{

    //}*/
    //
    //// std::vector<A>
    //// A
    //std::cout << "Type of begin(): " << typeid(v1.begin()).name() << '\n';
    //std::cout << "Type of front(): " << typeid(v1.front()).name() << '\n';

    /*std::cout << "=====================================\n";

    A& a_val = v1.front();

    a_val.set(100000000);
    std::cout << a_val.get() << std::endl;

    std::cout << "=====================================\n";*/

    //v1.erase(v1.begin(), v1.end());

    //v1.clear();
    //v1.shrink_to_fit();

    //for (size_t i = 0; i < v1.size(); i++)
    //    std::cout << v1[i].get() << std::endl;
    

    return 0;
}