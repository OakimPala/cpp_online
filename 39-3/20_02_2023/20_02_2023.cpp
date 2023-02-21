#include <iostream>
#include <vector>

//// Базовый
//class B {
//protected: /* Объявление компонентов в базовом классе */
//    int b = 0;
//};
//
//// Производный
//class A : public /* Вид наследования */  B
//{
//public:
//    A() = default;
//
//    A(int a, int b) {
//        std::cout << this << std::endl;
//        this->a = a;
//        this->b = b;
//    }
//
//    void output() {
//        std::cout << a << ' ' << b << std::endl;
//    }
//
//protected:
//    int a = 0;
//};

//void foo(int a) {
//    a = 10;
//}

//class C : public A {
//public:
//    C() {
//        std::cout << "From C class: a = " << a << ' ' << " b = " << b << std::endl;
//    }
//private:
//
//};

class Primetive {
public:
    virtual void move(int x, int y) {
        this->x += x;
        this->y += y;

        std::cout << "Primetive is moving: " << x << ' ' << y << std::endl;
    }

    virtual void draw() {
        // ...
    }

protected:
    int x = 0;
    int y = 0;
};

class Cube : public Primetive {
public:
    void move(int x, int y) override {
        this->x += x;
        this->y += y;

        std::cout << "Cube is moving: " << x << ' ' << y << std::endl;
    }

    void draw() override {
        // ...
    }
};

class Sphere : public Primetive {
public:
    void move(int x, int y) override {
        this->x += x;
        this->y += y;

        std::cout << "Sphere is moving: " << x << ' ' << y << std::endl;
    }

    void draw() override {
        // ...
    }
};

int main()
{
    /*std::vector<Primetive*> objectContainer;

    Cube obj_cube_1;
    Cube obj_cube_2;

    Sphere obj_sphere_1;
    Sphere obj_sphere_2;

    objectContainer.push_back(&obj_cube_1);
    objectContainer.push_back(&obj_cube_2);
    objectContainer.push_back(&obj_sphere_1);
    objectContainer.push_back(&obj_sphere_2);

    for (auto& obj : objectContainer){
        std::cout << "Addr: " << obj << " Type of data: " << typeid(*obj).name() << std::endl;
        obj->draw();
    }*/

    /*std::vector<int> data{ 1, 2, 3, 4, 5, 6, 123, 32234, 342 };

    for (const auto& el : data)
        std::cout << el << std::endl;*/

    //int a = 9;
    //foo(a);

    //std::cout << a << std::endl;
    //A obj_a(10, 20);
    //std::cout << &obj_a << std::endl;
    //
    //obj_a.output();

    //C obj_c;


    return 0;
}

