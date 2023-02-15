#include <iostream>

class Model {
public:
	Model() {
		std::cout << "Constructor: " << this << std::endl;
		weight = 0;
	}

	Model(int weight) {
		std::cout << "Constructor: " << this << std::endl;
		this->weight = weight;
	}

	~Model() {
		std::cout << "Destructor: " << this << std::endl;
	}

	int getWeight() {
		return weight;
	}

	void setWeight(int weight){
		this->weight = weight;
	}

private:
	int weight;
};

int main()
{
	const int size = 10;
	int** arr = new int*[size];

	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (size - j - 1 == i) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = 0;

			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;

	//Model model(1000);
	//
	//std::cout << "model (addr): " << &model << std::endl;

	return 0;
}