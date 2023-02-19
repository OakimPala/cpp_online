#include <iostream>
#include <vector>
#include <chrono>

std::vector<int> twoSum(std::vector<int>& data, int target) {
	for (int i = 0; i < data.size(); i++)
	{
		for (int j = i + 1; j < data.size(); j++)
		{
			if (data[i] + data[j] == target) {
				return std::vector<int>{i, j};
			}
		}
	}
	return std::vector<int>{0, 0};
}

int search(std::vector<int>& data, int key) {
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] == key) {
			return i;
		}
	}
	return -1;
}

int binarySearch(std::vector<int>& data, int left, int right, int key) {
	int index_mid = 0;

	while (true)
	{
		index_mid = (left + right) / 2;
		if (key < data[index_mid]) {
			right = index_mid - 1;
		}
		else if (key > data[index_mid])
		{
			left = index_mid + 1;
		}
		else {
			return index_mid;
		}

		if (left > right) {
			return -1;
		}
	}
}

//class A
//{
//	int o = 0;
//
//public:
//	void twoSumm(std::vector<int>& data, int target)
//	{
//		for (int i = 0; i < data.size(); i++)
//		{
//			for (int n = 0; n < data.size(); n++)
//			{
//				if (data[i] + data[n] == target)
//				{
//					std::cout << i << " " << n << std::endl;
//					break;
//					o++;
//
//					if (o == 0) { 
//						std::cout << "No such elements\n"; 
//					}
//				}
//			}
//		}
//	}
//};

int main()
{
	const int size = 1000000;
	std::vector<int> data;

	for (int i = 0; i < size; i++)
		data.push_back(i);

	int res;

	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	res = search(data, size - 3);
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << std::endl;
	std::cout << "Index: " << res << std::endl << std::endl;

	// =============================================================

	begin = std::chrono::steady_clock::now();
	res = binarySearch(data, 0, data.size(), size - 3);
	end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << std::endl;
	std::cout << "Index: " << res << std::endl;



	/*std::vector<int> answ = twoSum(data, 27);

	std::cout << answ[0] << ' ' << answ[1] << std::endl;*/

	//A obj;
	//obj.twoSumm(data, 27);
	return 0;
}