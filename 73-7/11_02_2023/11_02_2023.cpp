#include <iostream>
#include <algorithm>
#include <vector>

//class Train {
//public:
//	Train(int maxSpeed) {
//		std::cout << "Constructor: " << this << std::endl;
//		this->maxSpeed = maxSpeed;
//		this->weight = 0;
//	}
//
//	void setWeight(int weight) {
//		if (weight > 0 && weight < 1000000) {
//			this->weight = weight;
//		}
//		else {
//			this->weight = 0;
//		}
//	}
//
//	int getWeight() {
//		return weight;
//	}
//
//	int getMaxSpeed() {
//		return maxSpeed;
//	}
//
//	~Train() {
//		std::cout << "Destructor: " << this << std::endl;
//	}
//
//private:
//	int maxSpeed;
//	int weight;
//};

//int i = 0;
//
//void foo() {
//	std::cout << &i << std::endl;
//}

bool pred(int a, int b) {
	return a > b;
}

bool pred2(int a) {
	return a > 20;
}

void change(int* value) {
	*value = rand();
}

void _sum(int a, int b, int* res) {
	*res = a + b;
}

void incVec(std::vector<int>& data) {
	for (auto& el : data)
	{
		el++;
	}
}

class Model {
public:
	Model(int size) {
		std::cout << "Constructor: " << this << std::endl;
		data = new int[size];
		this->size = size;
	}

	Model(const Model& obj) {
		std::cout << "Constructor: " << this << std::endl;
		this->size = obj.size;
		data = new int[obj.size];

		for (size_t i = 0; i < obj.size; i++)
			data[i] = obj.data[i];
	}

	~Model() {
		std::cout << "Destructor: " << this << std::endl;
		delete[] data;
	}

private:
	int* data;
	int size;
};

int main()
{
	//int value_dec = 10;
	//int value_bin = 0b101010;
	//int value_oct = 0345;
	//int value_hex = 0x0000FFFF;

	Model model(10);

	Model model2(model);

	/*std::vector<int> data{ 1, 2, 3, 4, 5 };

	incVec(data);

	for (const auto& el : data)
		std::cout << el << std::endl;

	int value = 10;

	int& ref_value = value;

	ref_value = 20;

	std::cout << "value: " << value << std::endl;
	std::cout << "ref_value: " << ref_value << std::endl;*/

	//int res = 0;
	//change(&value);
	//_sum(5, 6, &res);
	//std::cout << "RES: " << res << std::endl;

	//int* ptr_value = &value;

	//std::cout << "value: " << value << std::endl;
	//std::cout << "ptr_value: " << ptr_value << std::endl;
	//
	//*ptr_value = 102131;


	//std::cout << "value: " << value << std::endl;
	//std::cout << "*ptr_value: " << *ptr_value << std::endl;
	//std::cout << "ptr_value: " << ptr_value << std::endl;

	//srand(time(NULL));
	//int* arr = new int[10];

	///*std::cout << "index 0: " << *arr << std::endl;
	//std::cout << "index 1: " << *(arr + 1) << std::endl;
	//std::cout << "index 2: " << *(arr + 2) << std::endl;*/

	//for (size_t i = 0; i < 10; i++)
	//	arr[i] = rand() % 100;

	//std::sort(arr, arr + 10, pred);

	//for (size_t i = 0; i < 10; i++)
	//{
	//	std::cout << arr[i] << std::endl;
	//}

	//delete[] arr;

	//std::vector<int> data;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	data.push_back(rand() % 30);
	//}

	////std::sort(data.begin(), data.end(), pred2);
	//int result = std::count_if(data.begin(), data.end(), pred2);
	//	
	//std::cout << "Result: " << result << std::endl;

	//for (const auto& el : data)
	//{
	//	std::cout << el << std::endl;
	//}

	//const int m = 3;
	//const int n = m;

	//std::vector<std::vector<int>> mat;

	//for (int i = 0; i < m; i++)
	//{
	//	std::vector<int> temp;
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (i == j) {
	//			temp.push_back(1);
	//		}
	//		else {
	//			temp.push_back(0);
	//		}
	//	}
	//	mat.push_back(temp);
	//}

	//for (int i = 0; i < m; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		std::cout << mat[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//for (size_t i = 0; i < mat.size(); i++)
	//{
	//	mat[i].clear();
	//}

	//mat.clear();

	//int i;
	//for (i = 0; i < 10; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//std::cout << &i << std::endl;
	//foo();

	//Train train;
	//std::cout << "Train 1: " << &train << std::endl;

	//Train train2;
	//std::cout << "Train 2: " << &train2 << std::endl;

	// Train* train = new Train(100);     (->)
	// Train train(100);     (.)

	return 0;
}