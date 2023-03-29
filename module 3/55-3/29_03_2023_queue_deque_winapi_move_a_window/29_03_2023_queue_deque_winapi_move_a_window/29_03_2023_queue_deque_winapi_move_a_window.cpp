#include <iostream>
#include <windows.h>

//#include <deque>
//#include <queue>

/*
template <class T>
void print_dqu(const std::deque<T>& data) {
	for (size_t i = 0; i < data.size(); i++)
		std::cout << data[i] << ' ';
}
*/

int main()
{
	/*
	// QUEUE (ПРОСТАЯ ОЧЕРЕДЬ)

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

	std::cout << "The first element: " << qu.front() << std::endl;
	std::cout << "The last element: " << qu.back() << std::endl;
	
	qu.swap(qu2);

	while (!qu.empty())
	{
		std::cout << qu.front() << std::endl;
		qu.pop();
	}

	std::cout << "Queue size is eqaul: " << qu.size() << std::endl;

	// PRIORITY_QUEUE (ОЧЕРЕДЬ С ПРЕОРИТЕТАМИ)

	//std::priority_queue<int, std::vector<int>, std::greater<int>> pqu;
	std::priority_queue<int> pqu;

	srand(time(0));

	for (size_t i = 0; i < 20; i++)
	{
		pqu.push(rand() % 100);
	}

	while (!pqu.empty())
	{
		std::cout << pqu.top() << ' ';
		pqu.pop();
	}

	// DEQUE (DOUBLE ENDED QUEUE)
	std::deque<int> dqu = {1, 2, 3, 4, 5, 6};

	std::cout << "\n\nThe first element: " << dqu.front() << std::endl;
	std::cout << "The last element: " << dqu.back() << std::endl;

	dqu.push_front(30);
	dqu.push_back(40);

	print_dqu<int>(dqu);
	*/

	//HWND window = (HWND)0x00540B98;
	HWND window = FindWindow(L"Notepad", NULL);

	if (window != NULL) {
		float angle = 0;

		int width = 500;
		int height = 500;

		while (true)
		{
			MoveWindow(window, 200 * sin(angle) - 1500, 200 * cos(angle) + 200, width, height, true);
			UpdateWindow(window);
			Sleep(10);
			angle+=0.1;
		}
	}
	return 0;
}