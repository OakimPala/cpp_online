#include <iostream>
#include <vector>

//class Car {
//public:
//	void setWheelSize(int a) {
//		wheelSize = a;
//	}
//
//	int getWheelSize() {
//		return wheelSize;
//	}
//
//private:
//	int wheelSize;
//};

class Train {
public:
	Train() {
		std::cout << "Train was created" << std::endl;
	}

	Train(int val) {
		weight = val;
	}

	Train(int val1, int val2) {
		weight = val1;
		wheelSize = val2;
	}

	~Train() {
		std::cout << "Train was destroyed" << std::endl;
	}

	void setWeight(int val) {
		weight = val;
	}
	int getWeight() {
		return weight;
	}

	void turnOnLight() {
		std::cout << "Light (on)" << std::endl;
	}
	void turnOffLight() {
		std::cout << "Light (off)" << std::endl;
	}
	void forward() {
		std::cout << "forward" << std::endl;
	}
	void backward() {
		std::cout << "backward" << std::endl;
	}

private:
	int weight;
	int wheelSize;
};

int main()
{
	Train train(10000, 20);
	std::cout << "Train weight: " << train.getWeight() << std::endl;

	Train train2(20000, 30);
	std::cout << "Train weight: " << train.getWeight() << std::endl;

	/*std::vector<int> v1;

	for (int i = 0; i < 10; i++)
		v1.push_back(i * i);*/

	//v1.clear();
	//v1.begin();
	//v1.end();
	//v1.erase(v1.begin(), v1.end() - 2);
	/*v1.erase(v1.begin() + 2);


	for (int i = 0; i < v1.size(); i++)
		std::cout << v1[i] << std::endl;*/

	//v1.push_back(20);
	//v1.push_back(30);
	//v1.push_back(40);

	//for (std::vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	//{
	//	std::cout << *i << std::endl;
	//}

	/*int* arr = new int[10];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = i * i;
		std::cout << arr[i] << std::endl;
	}

	delete arr;*/

	/*std::vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	}*/

	//Car audi;
	////audi.wheelSize = 20;

	//audi.setWheelSize(10);

	//std::cout << "audi.getWheelSize() = " << audi.getWheelSize() << std::endl;

	//Car subaru;

	//subaru.setWheelSize(20);
	////subaru.wheelSize = 15;

	//std::cout << "subaru.getWheelSize() = " << subaru.getWheelSize() << std::endl;

	return 0;
}