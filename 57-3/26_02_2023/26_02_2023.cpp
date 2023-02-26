#include <iostream>
#include <vector>
//#include <list>
//#include <io.h>
//#include <fcntl.h>
//
//std::vector<long long> incryptCesar(std::vector<long long> data, const int key) {
//	for (int i = 0; i < data.size(); i++)
//		data[i] += key;
//
//	return data;
//}
//
//std::vector<long long> decryptCesar(std::vector<long long> data, const int key) {
//	for (int i = 0; i < data.size(); i++)
//		data[i] -= key;
//
//	return data;
//}
//
//void setStringToVector(std::vector<long long>& data, std::wstring str) {
//	for (int i = 0; i < str.length(); i++)
//	{
//		data.push_back(str[i]);
//	}
//}
//
//void printStringFromVector(std::vector<long long> data) {
//	// long long -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
//	// wchar_t 0 to 65,535
//
//	for (int i = 0; i < data.size(); i++)
//	{
//		if (data[i] >= WCHAR_MIN && data[i] <= WCHAR_MAX)
//			std::wcout << (wchar_t)data[i];
//		else
//			std::wcout << L'*';
//	}
//}

class BankAccount {
private:
	BankAccount(long serialNumber) {
		this->serialNumber = serialNumber;
	}

	long serialNumber = 0;

	friend class Bank;
};

class Bank {
public:
	void addClient(long serialNumber) {
		accounts.push_back(BankAccount(serialNumber));
	}

private:
	std::vector<BankAccount> accounts;
};

int main()
{
	Bank centralBank;

	centralBank.addClient(4567876543);
	centralBank.addClient(4567865433);
	centralBank.addClient(8743979284);

	//_setmode(_fileno(stdout), _O_U16TEXT);

	//const int key = INT_MAX;

	//std::vector<long long> data;

	//std::wstring str = 
	//	L"Sed ut perspiciatis unde omnis iste natus error sit voluptatem "
	//	L"accusantium doloremque laudantium, totam rem aperiam, eaque ipsa "
	//	L"quae ab illo inventore veritatis et quasi architecto beatae vitae "
	//	L"dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit "
	//	L"aspernatur aut odit aut fugit, sed quia consequuntur magni dolores "
	//	L"eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam "
	//	L"est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci "
	//	L"velit, sed quia non numquam eius modi tempora incidunt ut labore "
	//	L"et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima "
	//	L"veniam, quis nostrum exercitationem ullam corporis suscipit "
	//	L"laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem "
	//	L"vel eum iure reprehenderit qui in ea voluptate velit esse quam "
	//	L"nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo "
	//	L"voluptas nulla pariatur?";

	//setStringToVector(data, str);

	//std::wcout << L"String: "; 
	//printStringFromVector(data);
	//std::wcout << L"\n\n";

	//std::wcout << L"Incrypt string: "; 
	//data = incryptCesar(data, key);
	//printStringFromVector(data);
	//std::wcout << L"\n\n";

	//std::wcout << L"Decrypt string: ";
	//data = decryptCesar(data, key);
	//printStringFromVector(data);
	//std::wcout << L"\n\n";

	/*data = incryptCesar(data, key);
	std::wcout << L"Incrypt string: " << data << L"\n\n";

	data = decryptCesar(data, key);
	std::wcout << L"Decrypt string: " << data << L"\n\n";*/

	//std::list<long long> data;

	//for (int i = 0; i < 10; i++)
	//	data.push_back(i * i * i);

	//for (std::list<long long>::iterator i = data.begin(); i != data.end(); i++)
	//{
	//	std::cout << *i << std::endl;
	//}
	
	return 0;
}