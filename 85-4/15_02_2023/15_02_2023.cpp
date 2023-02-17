#include <iostream>
#include <vector>
#include <map>

int main()
{
	const int size = 10;

	int data[size][size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j || i + j == size - 1) {
				data[i][j] = 1;
			}
			else {
				data[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			std::cout << data[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	/*const int size = 10;

	int** data = new int*[size];

	for (int i = 0; i < size; i++)
		data[i] = new int[size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j || i + j == size - 1) {
				data[i][j] = 1;
			}
			else {
				data[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			std::cout << data[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		delete[] data[i];
	}

	delete[] data;*/


	//const int size = 10;

	//std::vector<std::vector<int>> data;

	//for (int i = 0; i < size; i++) {
	//	std::vector<int> temp;
	//	for (int j = 0; j < size; j++) {
	//		temp.push_back(0);
	//	}
	//	data.push_back(temp);
	//}

	//for (int i = 0; i < data.size(); i++) {
	//	for (int j = 0; j < data[i].size(); j++)
	//	{
	//		//std::cout << data[i][j] << ' ';

	//		std::cout << data.at(i).at(j) << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//for (int i = 0; i < data.size(); i++) {
	//	data[i].clear();
	//}

	//data.clear();
	

	return 0;
}