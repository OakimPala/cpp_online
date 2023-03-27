#include <iostream>
#include <vector>
#include <chrono>

//class Animal {
//public:
//	Animal() {
//		std::cout << this << std::endl;
//		weight = 0;
//	}
//
//	int getWeight() {
//		return weight;
//	}
//
//	void setWeight(int weight) {
//		if (weight > 0 && weight < 10000) {
//			this->weight = weight;
//		}
//		else {
//			this->weight = 0;
//		}
//	}
//
//	~Animal() {
//		std::cout << "Destructor" << std::endl;
//	}
//
//private:
//	int weight;
//};

//void foo() {
//	Animal* cat = new Animal();
//	std::cout << "Size of an animal object: " << sizeof(Animal) << std::endl;
//
//	cat->getWeight();
//	for (size_t i = 0; i < 10; i++)
//	{
//		std::cout << i;
//	}
//	delete cat;
//}

int search(std::vector<int>& data, int target) {
	for (size_t i = 0; i < data.size(); i++)
	{
		if (data[i] == target) {
			return i;
		}
	}
	return -1;
}

int binarySearch(std::vector<int>& data, int target) {
	int index_mid = 0;
	int left = 0;
	int right = data.size();

	while (left < right)
	{
		index_mid = (left + right) / 2;

		if (target < data[index_mid])
			right = index_mid - 1;
		else if (target > data[index_mid])
			left = index_mid + 1;
		else
			return index_mid;
	}

	return -1;
}

int main()
{
	const int size = 1000000;
	std::vector<int> data;

	for (size_t i = 0; i < size; i++)
		data.push_back(i);

	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

	// int res = search(data, size - 3);
	int res = binarySearch(data, size - 3);
	
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << std::endl;
	
	std::cout << "Index: " << res << std::endl;

	/*foo();

	for (size_t i = 0; i < 9; i++)
	{
		std::cout << i;
	}*/

	//cat.setWeight(10);
	//std::cout << "Weihgt of my cat is eqaul: " << cat.getWeight() << std::endl;
	//std::cout << "Addr of my cat: " << &cat << std::endl;

	//const int size = 10;
	//std::vector<std::vector<int>> data;

	//for (int i = 0; i < size; i++)
	//{
	//	std::vector<int> temp;
	//	for (int j = 0; j < size; j++)
	//	{
	//		temp.push_back(0);
	//	}
	//	data.push_back(temp);
	//}

	//for (auto it_i = data.begin(); it_i != data.end(); it_i++)
	//{
	//	for (auto it_j = (*it_i).begin(); it_j != (*it_i).end(); it_j++)
	//	{
	//		std::cout << *it_j << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//for (size_t i = 0; i < data.size(); i++)
	//	data[i].clear();
	//
	//data.clear();

	//std::cout << "std::vector<std::vector<int>>:" << data.size() << ' ' << data.capacity() << std::endl;



	//for (size_t i = 0; i < data.size(); i++)
	//{
	//	for (size_t j = 0; j < data[i].size(); j++)
	//	{
	//		std::cout << data[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	return 0;
}