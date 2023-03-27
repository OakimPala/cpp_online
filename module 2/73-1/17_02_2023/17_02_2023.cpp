#include <iostream>
#include <vector>

//class A {
//public:
//	std::pair<int, int> twoSum(std::vector<int>& nums, int target) {
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = i + 1; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target) {
//					return { i, j };
//				}
//			}
//		}
//		return { 0, 0};
//	}
//};

//class B {
//protected:
//	int x;
//	int y;
//	int z;
//};
//
//class A : public B { 
//public:
//	A() {
//		std::cout << "Constructor" << std::endl;
//	}
//
//	~A() {
//		std::cout << "Destructor" << std::endl;
//	}
//};

class Primetive {
public:
	virtual void move(int x, int y) {
		this->x = x;
		this->y = y;

		std::cout << "Primetive is moving.\n";
	}

protected:
	int x;
	int y;
};

class Cube : public Primetive {
public:
	void move(int x, int y) override {
		this->x = x;
		this->y = y;

		std::cout << "Cube is moving.\n";
	}
};

class Sphere : public Primetive {
public:
	void foo() {
		std::cout << __FUNCTION__ << std::endl;
	}

	void move(int x, int y) override {
		this->x = x;
		this->y = y;

		std::cout << "Sphere is moving.\n";
	}
};

int main()
{
	Cube cube;
	Cube cube2;
	Sphere sphere;
	Sphere sphere2;

	std::vector<Primetive*> objectsConteiner;

	objectsConteiner.push_back(&cube);
	objectsConteiner.push_back(&cube2);
	objectsConteiner.push_back(&sphere);
	objectsConteiner.push_back(&sphere2);

	for (int i = 0; i < objectsConteiner.size(); i++)
	{
		// objectsConteiner[i]->foo();
		std::cout << "Obj (addr): 0x" << objectsConteiner[i] << " Type of object: " << typeid(*objectsConteiner[i]).name() << std::endl;
	}

	/*std::vector<int> data{ 2, 7, 11, 14 };
	
	A obj_a;

	auto answ = obj_a.twoSum(data, 25);
	std::cout << answ.first << ',' << answ.second << std::endl;*/


	return 0;
}
