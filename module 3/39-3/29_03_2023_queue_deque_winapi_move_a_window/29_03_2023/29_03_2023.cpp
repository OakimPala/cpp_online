#include <iostream>
#include <Windows.h>

//#include <queue>
//#include <deque>
//#include <vector>

/*
class A {
public:
	A(int a){}
};
*/

/*
template <class T>
void print_deq(const std::deque<T> dq) {
	for (int i = 0; i < dq.size(); i++)
		std::cout << dq.at(i) << ' ';
}
*/

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow)
{
	/*
	////std::vector<std::vector<int>> two_demecional;

	////int** arr_2d = new int* [10];

	////for (int i = 0; i < 10; i++)
	////{
	////	arr_2d[i] = new int[10];
	////}

	//// QUEUE (Простая очередь) 
	//std::queue<std::string> qu;
	//std::queue<std::string> qu2;

	//if (qu.empty() || qu.size() == 0) {
	//	qu.push("Alex");
	//	qu.emplace("Ben"); // с C++11 стандарта
	//	qu.push("Jane");
	//	
	//	qu2.push("Alex 2");
	//	qu2.emplace("Ben 2"); // с C++11 стандарта
	//	qu2.push("Jane 2");
	//}

	//qu.swap(qu2);

	//std::cout << "The frist element: " << qu.front() << std::endl;
	//std::cout << "The second element: " << qu.back() << std::endl << std::endl;

	//for (;!qu.empty();)
	//{
	//	std::cout << qu.front() << std::endl;
	//	qu.pop();
	//}

	//std::cout << "Size of queue: " << qu.size() << std::endl;

	//// DEQUE (DOUBLE ENDED QUEUE)

	//std::deque<int> dqu = {1, 2, 3, 4, 5};

	//dqu.push_back(10);
	//dqu.push_front(10);

	//std::cout << "\n\nBefore resize: \n";
	//print_deq<int>(dqu);

	//dqu.resize(3);

	//std::cout << "\n\nAfter resize: \n";
	//print_deq<int>(dqu);
	//
	//dqu.resize(10, 123);

	//std::cout << "\n\nAfter resize 2: \n";
	//print_deq<int>(dqu);
	*/

	// 000301D4

	HWND window = (HWND)0x00190AAA;

	int x = -1000;

	while (true)
	{
		MoveWindow(window, x, 150, 500, 500, true);
		UpdateWindow(window);
		Sleep(10);
		x++;
	}


	return 0;
}