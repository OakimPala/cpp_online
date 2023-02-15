#include <iostream>
#include <vector>
#include <chrono>

//struct Point {
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	int getX() {
//		return x;
//	}
//
//	int getY() {
//		return y;
//	}
//
//private:
//	int x;
//	int y;
//};
//
//Point getPosition() {
//	return Point(10, 20);
//}

//NLR
//LNR
//LRN

//enum class PRT
//{
//	NLR,
//	LNR,
//	LRN
//};
//
//struct Node
//{
//	int data;
//	Node* left;
//	Node* right;
//};
//
//Node* insert(int data, Node* tree) {
//	if (tree == nullptr) {
//		tree = new Node;
//
//		tree->data = data;
//		tree->left = nullptr;
//		tree->right = nullptr;
//	}
//	else if (data < tree->data) {
//		tree->left = insert(data, tree->left);
//	}
//	else {
//		tree->right = insert(data, tree->right);
//	}
//	return tree;
//}
//
//void printTree(Node* tree, PRT type) {
//	if (tree != nullptr) {
//		switch (type)
//		{
//		case PRT::NLR:
//			std::cout << tree->data << '|';
//			printTree(tree->left, type);
//			printTree(tree->right, type);
//			break;
//		case PRT::LNR:
//			printTree(tree->left, type);
//			std::cout << tree->data << '|';
//			printTree(tree->right, type);
//			break;
//		case PRT::LRN:
//			printTree(tree->left, type);
//			printTree(tree->right, type);
//			std::cout << tree->data << '|';
//			break;
//		default:
//			break;
//		}
//
//	}
//}
//
//void _free(Node* tree) {
//	if (tree != nullptr) {
//		_free(tree->left);
//		_free(tree->right);
//		delete tree;
//	}
//}

//int searchBinary(int arr[], int left, int right, int key) {
//	int mid_index = 0;
//	while (true)
//	{
//		mid_index = (left + right) / 2;
//		if (key < arr[mid_index]) {
//			right = mid_index - 1;
//		}
//		else if(key > arr[mid_index]) {
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
//
//}

int main()
{
	//const int m = 5;
	//const int n = m;

	//std::vector<std::vector<int>> data;

	//for (size_t i = 0; i < m; i++)
	//{
	//	std::vector<int> temp;
	//	for (size_t j = 0; j < n; j++)
	//	{
	//		if (j == 2 || i == 2) {
	//			temp.push_back(1);
	//		}
	//		else {
	//			temp.push_back(0);
	//		}
	//	}
	//	data.push_back(temp);
	//}

	//for (size_t i = 0; i < m; i++)
	//{
	//	for (size_t j = 0; j < n; j++)
	//	{
	//		std::cout << data[i][j] << ' ';
	//	}
	//	std::cout << std::endl;
	//}

	//const int size = 100000000;

	//int* arr = new int[size];

	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = i;
	//}

	//int index = -1;
	//const int key = size - 5;
	//

	//std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	//index = searchBinary(arr, 0, size, key);
	///*for (size_t i = 0; i < size; i++)
	//{
	//	if (key == arr[i]) {
	//		index = i;
	//	}
	//}*/
	//std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	//delete[] arr;

	//std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << std::endl;

	//std::cout << "index: " << index << std::endl;

	//Node* root = nullptr;

	//for (int i = 0; i < 10; i++)
	//{
	//	root = insert(rand() % 100, root);
	//}

	////printTree(root, PRT::LNR);

	//_free(root);

	//Point p1 = getPosition();

	//std::cout << "x: " << p1.getX() << " y: " << p1.getY() << std::endl;

	return 0;
}