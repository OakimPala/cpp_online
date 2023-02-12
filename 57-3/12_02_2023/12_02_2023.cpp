#include <iostream>
#include <vector>

//void change(int val) {
//	val = 20;
//}

//int b = 5;
//
//void prB() {
//	std::cout << "b (addr): " << &b << std::endl;
//}

//void change(int& value) {
//	value = 10;
//}
//
//void change2(std::vector<int>& data) {
//	for (auto& el : data)
//		el /= 2;
//}
//
//void printVec(std::vector<std::vector<int>> data) {
//	for (size_t i = 0; i < data.size(); i++)
//	{
//		for (size_t j = 0; j < data[i].size(); j++) {
//			std::cout << data[i][j] << ' ';
//		}
//		std::cout << std::endl;
//	}
//}

class Model {
public:
	Model(int size) {
		std::cout << "Constructor: " << this << std::endl;
		this->size = size;

		if (size > 0) {
			vertices = new int[size];
		}
		else {
			vertices = new int[10];
		}
	}

	Model(int weight, int size) {
		std::cout << "Constructor: " << this << std::endl;
		this->weight = weight;
		this->size = size;

		if (size > 0) {
			vertices = new int[size];
		}
		else {
			vertices = new int[10];
		}
	}

	Model(const Model& obj) {
		std::cout << "Constructor COPY: " << this << std::endl;
		weight = obj.weight;
		size = obj.size;

		vertices = new int[obj.size];

		for (size_t i = 0; i < obj.size; i++)
			vertices[i] = obj.vertices[i];
	}

	void setWeight(int weight) {
		this->weight = weight;
	}

	int getWeight() const {
		return weight;
	}

	~Model() {
		std::cout << "Destructor: " << this << std::endl;
		delete[] vertices;
	}

private:
	int* vertices;
	int weight;
	int size;
};

int main()
{
	Model model(100);
	Model model2(model);


	//int m = 10;
	//int n = m;

	//int** data = new int*[m];

	//for (size_t i = 0; i < m; i++)
	//	data[i] = new int[n];

	//for (size_t i = 0; i < m; i++)
	//{
	//	for (size_t j = 0; j < n; j++) {
	//		if (i == j) {
	//			data[i][j] = 1;
	//		}
	//		else {
	//			data[i][j] = 0;
	//		}
	//	}
	//}

	//for (size_t i = 0; i < m; i++)
	//{
	//	for (size_t j = 0; j < n; j++) {
	//		std::cout << data[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//for (size_t i = 0; i < m; i++)
	//	delete[] data[i];

	//delete[] data;

	/*int m = 10;
	int n = m;

	std::vector<std::vector<int>> data;
	
	for (size_t i = 0; i < m; i++)
	{
		std::vector<int> temp;
		for (size_t j = 0; j < n; j++) {
			if (i < j) {
				temp.push_back(1);
			}
			else {
				temp.push_back(0);
			}
		}
		data.push_back(temp);
	}
	
	printVec(data);

	for (size_t i = 0; i < data.size(); i++)
	{
		data[i].clear();
	}
	data.clear();

	printVec(data);*/

	/*for (const auto& vec : data) {
		for (const auto& el : vec) {
			std::cout << el << ' ';
		}
		std::cout << std::endl;
	}*/

	//change2(data);

	//for (const auto& abc : data)
	//	std::cout << abc << std::endl;

	//int g = 100;
	//change(g);

	//std::cout << g << std::endl;
	////int b;
	////for (b = 10; b < 20; b++)
	////	std::cout << b << std::endl;

	////std::cout << "b (addr): " << &b << std::endl;
	////prB();

	//Model obj;
	//obj.setWeight(10);
	//std::cout << "obj (addr): " << &obj << std::endl;
	//std::cout << "Get weight: " << obj.getWeight() << std::endl;

	//int* ptr = new int;
	//*ptr = 0;

	//std::cout << *ptr << std::endl;
	//std::cout << ptr << std::endl;

	//delete ptr;

	return 0;
}