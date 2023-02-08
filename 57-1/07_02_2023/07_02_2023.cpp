#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>

class Car {
public:

	/*Car() {
		hp = 0;
		wheelSize = 0;
		mark = "";
		color = "";
	}*/

	Car(int _hp, int _wheelSize, std::string _mark, std::string _color) {
		hp = _hp;
		wheelSize = _wheelSize;
		mark = _mark;
		color = _color;

		vertices = new int[100000000];
		indices = new int[100000000];
	}

	~Car() {
		delete vertices;
		delete indices;
	}

	void setHP(int val) {
		if (val > 0 && val < 2500) {
			hp = val;
		}
		else {
			val = 1;
		}
	}

	int getHP() {
		return hp;
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
	Car audi(1000, 20, "Audi", "Blue");
}

int main()
{
	foo();
	// audi.setHP(-100);

	//std::multiset<char> st;

	////std::make_pair();
	////{};

	//for (char i = 0; i < 10; i++)
	//{
	//	//mp.insert({i, "qwerty"});
	//	st.emplace(i);
	//}

	//for (auto el : st)
	//{
	//	std::cout << el << std::endl;
	//}

	//std::map<char, char> mp;

	////std::make_pair();
	////{};
	//char a = 48, b = 48;

	//for (size_t i = 0; i < 10; i++, a+=4, b+=3)
	//{
	//	//mp.insert({i, "qwerty"});
	//	mp.emplace(a, b);
	//}

	//for (auto el : mp)
	//{
	//	std::cout << el.first << '\t' << el.second << std::endl;
	//}

	//std::list<std::pair<char, char>> list1;

	//for (size_t i = 0; i < 10; i++)
	//	list1.push_back({rand() % 128, rand() % 128});

	///*for (auto& el : list1) {
	//	el.first = 0;
	//	el.second = 0;
	//}*/

	//for (auto el : list1) {
	//	std::cout << el.first << '\t' << el.second << std::endl;
	//}

	//std::pair<int, std::string> p1{10, "some text"};

	//std::cout << p1.first << ' ' << p1.second << std::endl;

//	std::vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	// v1.push_back(A(10, 10));
//	// v1.emplace_back(10, 10);
//	// v1.insert(v1.end()-1, 10);
//
////	size 10
////	cap 13
//	//v1.clear();
//
//	// v1.pop_back();
//	v1.erase(v1.begin() + 1, v1.end() - 1);
//
//	v1.shrink_to_fit();
//	std::cout << "S: " << v1.size() << std::endl;
//	std::cout << "C: " << v1.capacity() << std::endl;
//
//	// std::cout << *v1.end() << std::endl;
//
//	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
//		std::cout << *it << std::endl;
//	}

	return 0;
}