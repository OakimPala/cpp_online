#include <iostream>
#include <vector>

using namespace std;

void incVec(std::vector<int>& ref_a) {
	for (size_t i = 0; i < ref_a.size(); i++)
	{
		ref_a[i]++;
	}
}

class Point {
public:
	void setX(int x) {
		this->x = x;
	}

	int getX() const {
		return x;
	}
private:
	int x = 0;
};

//class Model {
//public:
//	Model() {
//		std::cout << "Constructor 1" << std::endl;
//		this->size = 10;
//		data = new int[10];
//	}
//
//	Model(const Model& obj) {
//		std::cout << "Constructor COPY" << std::endl;
//
//		this->size = obj.size;
//		this->data = new int[obj.size];
//
//		for (size_t i = 0; i < obj.size; i++)
//			this->data[i] = obj.data[i];
//	}
//
//	Model(int size) {
//		std::cout << "Constructor 2" << std::endl;
//
//		if (size > 0){
//			data = new int[size];
//			this->size = size;
//		}
//		else{
//			data = new int[10];
//			this->size = 10;
//		}
//	}
//
//	~Model() {
//		std::cout << "Destructor" << std::endl;
//		delete[] data;
//	}
//
//private:
//	int size;
//	int* data;
//};

class Engine {
public:
	Engine(int hp) {
		this->hp = hp;
	}

	int getHP() {
		return hp;
	}

private:
	int hp;
};

class Car {
public:
	Car(Engine* engine, std::string mark){
		this->engine = engine;
		this->mark = mark;
	}

	void getInfo() {
		std::cout << "Mark: " << mark << std::endl;
		std::cout << "Engine HP: " << engine->getHP() << std::endl;
		std::cout << "Engine (addr): " << engine << std::endl;
	}

	~Car() {
		delete engine;
	}

private:
	std::string mark = "";
	Engine* engine;
};

int main()
{
	Car* car = new Car(new Engine(500), "Audi");

	car->getInfo();

	delete car;

	//std::cout << "\n\n" << engine << std::endl;

	//delete engine;

	
	//Model model;

	//Model model2(model);


	/*std::vector<Point> points;

	for (size_t i = 0; i < 5; i++)
	{
		points.push_back(Point());
	}

	for (const auto& point : points)
	{
		std::cout << point.getX() << std::endl;
	}*/

	//Model model;
	//foo(&model);
	/*int a = 10789;
	
	std::vector<int> data{ 1, 2, 3, 4, 5, 6, 7 };

	incVec(data);

	for (const auto& el : data){
		el = 10;
	}

	for (auto& el : data){
		std::cout << el << std::endl;
	}*/

	//int& value_ref = value;

	//std::cout << value << std::endl;
	//std::cout << value_ref << std::endl << std::endl;

	//value_ref = 324892384;

	//std::cout << value << std::endl;
	//std::cout << value_ref << std::endl;

	/*int* arr = new int[10];

	for (size_t i = 0; i < 10; i++)
		arr[i] = 0;

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << *(arr + i) << std::endl;
	}

	delete[] arr;*/

	/*Model* model = new Model;

	delete model;*/

	//std::cout << sizeof(int*) << std::endl;
	//std::cout << sizeof(double*) << std::endl;
	//std::cout << sizeof(float*) << std::endl;
	//std::cout << sizeof(short*) << std::endl;
	//std::cout << sizeof(bool*) << std::endl;



	return 0;
}