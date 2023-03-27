#include <iostream>
#include <vector>

int main()
{
	//const int size = 10;

	//int** data = new int*[size];

	//for (int i = 0; i < size; i++)
	//{
	//	data[i] = new int[size];
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		//data[i][j] = static_cast<float>(rand() / static_cast<float>(RAND_MAX));
	//		if (i == size - j - 1) {
	//			data[i][j] = 1;
	//		}
	//		else {
	//			data[i][j] = 0;
	//		}
	//	}
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		printf("%1d ", data[i][j]);
	//	}
	//	putchar('\n');
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	delete[] data[i];
	//}
	//
	//delete[] data;

	/*const int size = 10;

	std::vector<std::vector<float>> data;

	for (int i = 0; i < size; i++)
	{
		std::vector<float> temp;
		for (int j = 0; j < size; j++)
		{
			temp.push_back(static_cast<float>(rand() / static_cast<float>(RAND_MAX)));
		}
		data.push_back(temp);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%.2f ", data[i][j]);
		}
		putchar('\n');
		putchar('\n');
	}

	for (auto it = data.begin(); it != data.end(); it++)
		it->clear();

	data.clear();*/


	return 0;
}