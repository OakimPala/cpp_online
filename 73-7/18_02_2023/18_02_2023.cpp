#include <iostream>
#include <vector>
#include <chrono>

//int search(std::vector<int>& data, int value) {
//	for (int i = 0; i < data.size(); i++)
//	{
//		if (data[i] == value) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//int searchBin(std::vector<int>& data, int left, int right, int value) {
//	int mid_index = 0;
//	while (true)
//	{
//		mid_index = (left + right) / 2;
//
//		if (value < data[mid_index]) {
//			right = mid_index - 1;
//		}
//		else if (value > data[mid_index])
//		{
//			left = mid_index + 1;
//		}
//		else {
//			return mid_index;
//		}
//
//		if (left > right) {
//			return -1;
//		}
//	}
//}

class B {
protected:
	int b;
};

class A : public B {
public:
	A() {
		b = 10;
	}
protected:
	int value;
};

int main()
{
	A a;


	////std::cout << (int)(7 / 2) << std::endl;
	//const int size = 10000000;
	//std::vector<int> data;
	//data.reserve(size);

	////std::cout << "Max size of vector is equal: " << data.max_size() << std::endl;

	//for (int i = 0; i < size; i++)
	//{
	//	data.push_back(i);
	//}

	//std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	////search(data, size - 3);
	//searchBin(data, 0, data.size(), size - 3);
	//std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	//std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << std::endl;

	return 0;
}
