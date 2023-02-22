#include <iostream>
#include <vector>
#include <chrono>
#include <windows.h>


//int search(std::vector<int>& data, int left, int right, int target) {
//	if (data.size() > 0 && left < right && left >= 0 && right <= data.size()) {
//		for (int i = left; i < right; i++)
//		{
//			if (data[i] == target) {
//				return i;
//			}
//		}
//	}
//	return -1;
//}
//
//int searchBin(std::vector<int>& data, int left, int right, int target) {
//	int index_mid = 0;
//
//	while (left <= right)
//	{
//		index_mid = (left + right) / 2;
//
//		if (target < data[index_mid]) {
//			right = index_mid - 1;
//		}
//		else if (target > data[index_mid]) {
//			left = index_mid + 1;
//		}
//		else {
//			return index_mid;
//		}
//	}
//	return -1;
//}
//
//class BankAccount {
//private:
//	BankAccount() = default;
//
//	BankAccount(long serialNumber) {
//		this->serialNumber = serialNumber;
//	}
//
//	void setSerialNumber(long serialNumber)
//	{
//		this->serialNumber = serialNumber;
//	}
//
//	long serialNumber;
//
//	friend class Bank;
//};
//
//class Bank {
//public:
//	void addClient(long serialNumber) {
//		accounts.push_back(BankAccount(serialNumber));
//	}
//
//private:
//	std::vector<BankAccount> accounts;
//};

class Image {
private:
	class Pixel {
	public:
		Pixel(short r, short g, short b) {
			this->r = r;
			this->g = g;
			this->b = b;
		}

	private:
		int r;
		int g;
		int b;
	};

	std::vector<Pixel*> pixels;

public:
	Image() = default;

	void addPixel(int r, int g, int b) {
		pixels.push_back(new Pixel(r, g, b));
	}

	~Image() {
		for (auto& pixel : pixels)
		{
			delete pixel;
		}
	}

};

//class A {
//public:
//	int a;
//	int b;
//	long long c;
//	long long c1;
//	long long c2;
//	long long c3;
//	long long c4;
//	long long c5;
//};

class Engine {
public:
	Engine() {
		CONSOLE_SCREEN_BUFFER_INFO csbi;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

		for (size_t i = 0; i < width * height; i++)
		{
			screenBuffer.push_back(' ');
		}
	}

	void setPixel(short x, short y, wchar_t wch) {
		screenBuffer[y * width + x] = wch;
	}

	void draw() {
		wprintf(screenBuffer.c_str());
	}

private:
	int width, height;
	std::wstring screenBuffer;
};

int main()
{
	Engine engine;

	float x = 0.0f;

	while (true) {
		engine.setPixel(x, 10, 'W');
		engine.draw();
		x += 0.1;
	}




	/*for (int i = 0; i < length; i++)
	{

	}*/

	//std::cout << "A* SIZEOF => " << sizeof(A*) << std::endl;
	//std::cout << sizeof(A) << std::endl;
	/*BankAccount k;
	Bank centralBank;
	centralBank.addClient(348928429348);
	centralBank.addClient(348234234234);
	centralBank.addClient(348232342342);*/

	//const int size = 1000000;
	//std::vector<int> data;
	//data.reserve(size);

	//for (int i = 0; i < size; i++)
	//	data.push_back(i);

	//unsigned long long res = 0;
	//std::chrono::steady_clock::time_point begin;
	//std::chrono::steady_clock::time_point end;
	//for (size_t i = 0; i < 20; i++)
	//{
	//	begin = std::chrono::steady_clock::now();
	//	//res = search(data, 0, data.size(), size - 2);
	//	res += searchBin(data, 0, data.size(), size - 2);
	//	end = std::chrono::steady_clock::now();
	//}

	//std::cout << "Index: " << res / 20 << std::endl;

	//std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << std::endl;

	return 0;
}