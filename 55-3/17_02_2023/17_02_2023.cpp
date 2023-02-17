#include <iostream>
#include <vector>

//class A { 
//public:
//	std::vector<int> twoSum(std::vector<int>& nums, int target) {
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = i + 1; j < nums.size(); j++)
//			{	
//				if (nums[i] + nums[j] == target) {
//					return std::vector<int>{i, j};
//				}
//			}
//		}
//		return std::vector<int>{0, 0};
//	}
//};

//// Бызовый класс
//class A {
//protected:
//	int a;
//};
//
//// Производный класс
//class B : protected A {
//public:
//	B() {
//		a = 10;
//	}
//	int b;
//};

class Primetive {
public:
	virtual void move(int x, int y) {
		this->x += x;
		this->y += y;
		std::cout << "Primetive is moving.\n";
	}

protected:
	int x;
	int y;
};

class Cube : public Primetive {
public:
	void foo() {
		std::cout << __FUNCTION__ << std::endl;
	}

	void move(int x, int y) override {
		this->x += x;
		this->y += y;
		std::cout << "Cube is moving.\n";
	}
};

class Sphere : public Primetive {
public:
	void move(int x, int y) override {
		this->x += x;
		this->y += y;
		std::cout << "Sphere is moving.\n";
	}
};

class Engine {
public:
	void draw() {
		for (int i = 0; i < objectTable.size(); i++)
		{
			// objectTable[i]->foo();
			std::cout << "Obj: 0x" << objectTable[i] << " Type: " << typeid(*objectTable[i]).name() << std::endl;
		}
	}

	void addObject(Primetive* primetive) {
		objectTable.push_back(primetive);
	}

private:
	std::vector<Primetive*> objectTable;
};

int main()
{
	Cube cube;
	Cube cube2;

	Sphere sphere;
	Sphere sphere2;

	Engine engine;

	engine.addObject(&cube);
	engine.addObject(&cube2);
	engine.addObject(&sphere);
	engine.addObject(&sphere2);

	while (1) {
		engine.draw();

		system("cls");
	}

	//std::vector<int> data{ 2, 7, 14, 15 };

	//A a;
	//std::vector<int> answ = a.twoSum(data, 29);

	//std::cout << '[' << answ[0] << ", " << answ[1] << ']' << std::endl;

	//int arr[10] = { 0 }; // Zeros
	//int* arr = new int[10](); // Zeros
	//int* arr = new int[10]; // liter

	//const int size = 10;
	//int** arr = new int*[size];

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = new int[size];
	//}

	//// Output

	//for (int i = 0; i < size; i++)
	//{
	//	delete[] arr[i];
	//}

	//delete[] arr;

	//std::cout << "int***: " << sizeof(int***) << std::endl;
	//std::cout << "int**: " << sizeof(int**) << std::endl;
	//std::cout << "int*: " << sizeof(int*) << std::endl;
	//std::cout << "double*: " << sizeof(double*) << std::endl;
	//std::cout << "float*: " << sizeof(float*) << std::endl;
	//std::cout << "short*: " << sizeof(short*) << std::endl;
	//std::cout << "A*: " << sizeof(A*) << std::endl;

	return 0;
}