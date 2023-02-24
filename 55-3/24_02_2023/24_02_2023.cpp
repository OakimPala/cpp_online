#include <iostream>
#include <Windows.h>
#include <vector>
#include <io.h>
#include <fcntl.h>

std::vector<long> incryptCesar(std::vector<long> data, const int key) {
	for (int i = 0; i < data.size(); i++)
		data[i] += key;
	
	return data;
}

std::vector<long> decryptCesar(std::vector<long> data, const int key) {
	for (int i = 0; i < data.size(); i++)
		data[i] -= key;
	
	return data;
}

std::vector<long> addStringToVector(std::wstring source) {
	std::vector<long> temp;
	for (size_t i = 0; i < source.length(); i++)
		temp.push_back((long)source[i]);
	return temp;
}

void printVector(std::vector<long> data) {
	for (const auto& el : data) {
		std::wcout << (wchar_t)el;
	}
	std::wcout << std::endl;
}

int main()
{
	//SetConsoleOutputCP(CP_UTF8);
	_setmode(_fileno(stdout), _O_U16TEXT);

	const int key = 789;
	std::vector<long> data = addStringToVector(L"qwerty");

	std::wcout << L"String: "; printVector(data);

	data = incryptCesar(data, key);

	std::wcout << "Incrypt string: "; printVector(data);

	data = decryptCesar(data, key);
	std::wcout << "Decrypt string: "; printVector(data);

	return 0;
}