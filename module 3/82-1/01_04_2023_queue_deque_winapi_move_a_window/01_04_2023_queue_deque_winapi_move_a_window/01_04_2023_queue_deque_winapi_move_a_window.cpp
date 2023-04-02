#include <iostream>
#include <windows.h>
//#include <queue>
//#include <deque>

/*
template <class T>
void print_pqu(std::priority_queue<T> pqu) {
	while (!pqu.empty())
	{
		std::cout << pqu.top() << std::endl;
		pqu.pop();
	}
}
*/

int main()
{
	/*
	// QUEUE (Простая очередь)
	std::queue<std::string> qu;
	std::queue<std::string> qu2;

	if (qu.empty() || qu.size() == 0) {
		qu.push("Alex");
		qu.push("Ben");
		qu.push("Jane");

		qu2.push("Alex 2");
		qu2.push("Ben 2");
		qu2.push("Jane 2");
	}

	qu.swap(qu2);

	std::cout << "The first element: " << qu.front() << std::endl;
	std::cout << "The last element: " << qu.back() << std::endl;

	while (!qu.empty())
	{
		std::cout << qu.front() << " size: " << qu.size() << std::endl;
		qu.pop();
	}

	std::cout << "Size of queue is: " << qu.size() << std::endl << std::endl;

	// Очередь с преоритетом (Priority queue)
	std::priority_queue<int> pqu;

	for (int i = 0; i < 10; i++)
		pqu.push(rand() % 100);
	
	print_pqu<int>(pqu);
	std::cout << "\n\n";

	// Дек (DOUBLE ENDED QUEUE)
	std::deque<std::string> dqu;

	dqu.push_back("Alex");
	dqu.push_back("Ben");
	dqu.push_back("Jane");

	dqu.erase(dqu.begin() + 1);

	for (int i = 0; i < dqu.size(); i++)
	{
		std::cout << dqu[i] << std::endl;
	}
	*/

	//HWND hwnd = (HWND)0x00480C2E;
	HWND hwnd = FindWindow(L"Notepad", NULL);

	// x = ro * sin(fi)
	// y = ro * cos(fi)

	//float fi = 0.0f;
	while (true) {
		//MoveWindow(hwnd, 100 + 100 * sin(fi), 100 + 100 * cos(fi), 500, 500, true);
		MoveWindow(hwnd, rand() % 1921, rand() % 1080, 500, 500, true);
		//UpdateWindow
		//Sleep(10);
	}

	return 0;
}