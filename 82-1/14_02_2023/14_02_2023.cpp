#include <iostream>
#include <vector>

int main()
{
	const int m = 5;
	const int n = m;
	
	std::vector<std::vector<int>> data;

	for (int i = 0; i < m; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < n; j++)
		{
			temp.push_back(rand() % 10);
		}
		data.push_back(temp);
	}

	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++){
			std::cout << data[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		data[i].clear();
		data[i].shrink_to_fit();
	}

	data.clear();
	data.shrink_to_fit();

	//int** arr = new int*[m];

	//for (int i = 0; i < n; i++)
	//	arr[i] = new int[n];

	//for (int i = 0; i < m; i++)
	//	for (int j = 0; j < n; j++) {
	//		if (i == m/2 || j == m/2) {
	//			arr[i][j] = 1;
	//		}
	//		else {
	//			arr[i][j] = 0;
	//		}
	//	}

	//for (int i = 0; i < m; i++) {

	//	for (int j = 0; j < n; j++){
	//		std::cout << arr[i][j] << ' ';
	//	}

	//	std::cout << std::endl;
	//}

	//for (int i = 0; i < n; i++)
	//	delete[] arr[i];

	//delete[] arr;

	return 0;
}