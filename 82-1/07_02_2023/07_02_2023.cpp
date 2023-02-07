#include <iostream>
#include <set>
#include <vector>
#include <map>

#include <list>

//struct _pair {
//	_pair(int a, int b) {
//		first = a;
//		second = b;
//	}
//
//	int first;
//	int second;
//};

class Car
{
public:
	Car(int hp, int wheelSize, std::string mark, std::string color) {
		this->hp = hp;
		this->wheelSize = wheelSize;
		this->mark = mark;
		this->color = color;

		vertices = new int[1000000];
		indices = new int[10000000];
	}

	void setHP(int val) {
		if (val > 0) {
			hp = val;
		}
		else {
			hp = 0;
		}
	}

	int getHP() {
		return hp;
	}

	~Car() {
		delete vertices;
		delete indices;
	}

private:
	int* vertices;
	int* indices;

	int hp;
	int wheelSize;
	std::string mark;
	std::string color;
};

void foo() {
	Car audi(1000, 20, "audi", "blue");
}

int main()
{
	foo();
	//std::set<int> mp;

	//int i = 20;
	//for (; i >= 0; i -= 2)
	//	mp.insert(i);

	////i;

	//mp.insert(100);
	//mp.insert(100);
	//mp.insert(100);
	//mp.insert(100);

	//auto it_res = mp.find(2);

	//if (it_res != mp.end()) {
	//	std::cout << *it_res << std::endl;
	//}

	//for (auto it = mp.begin(); it != mp.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}

	/*std::map<int, std::string> mp;

	for (size_t i = 20; i > 0; i -= 2)
		mp.insert(std::make_pair(i, "text"));
	
	auto it_res = mp.find(3);

	if (it_res != mp.end()) {
		std::cout << (*it_res).first << ' ' << (*it_res).second << std::endl;
	}
		
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		std::cout << (*it).first << ' ' << (*it).second << std::endl;
	}*/

	//std::list<int> list1;

	//for (size_t i = 0; i < 10; i++)
	//	list1.push_back(rand());

	//list1.push_back(100);
	//list1.push_back(200);
	//list1.push_back(200);
	//list1.push_back(100);
	//list1.push_back(100);
	//list1.push_back(100);

	//list1.unique();
	//list1.sort();

	//for (auto it = list1.begin(); it != list1.end(); it++)
	//	std::cout << *it << std::endl;

	//std::pair<int, int> p1{10, 10};
	//std::vector<std::pair<int, int>> v1;

	//for (size_t i = 0; i < 10; i++)
	//	v1.push_back(std::make_pair(i * 2, i * 2 + 1));

	//v1.insert(v1.begin() + 2, std::make_pair(5000, 5000));

	//// get iterator
	//// begin() cbegin() crbegin()
	//// end() cend() crend()

	//v1.emplace_back(23, 67);

	//std::cout << "===========11111111111111=========\n";
	//std::cout << "S: " << v1.size() << std::endl;
	//std::cout << "C: " << v1.capacity() << std::endl;
	//
	//std::cout << "\n\n===========22222222222=============\n";
	//v1.shrink_to_fit();

	//std::cout << "S: " << v1.size() << std::endl;
	//std::cout << "C: " << v1.capacity() << std::endl;

	///*auto it2 = mp.end();

	//if (it2 != mp.end()) {
	//	std::cout << "Find: " << (*it2).second;
	//}
	//else {
	//	std::cout << "Was not found.\n";
	//}*/


	//for (auto it = v1.begin(); it != v1.end(); it++)
	//	std::cout << (*it).first << ' ' << (*it).second << std::endl;

	return 0;
}