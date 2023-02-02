#include <iostream>
#include <vector>
#include <map>
#include <set>

//struct Node {
//	int data;
//	Node* next;
//	Node* prev;
//};

//std::pair<int, int> foo() {
//	return { 10, 10 };
//}
//class V {
//public:
//	V(int a) { std::cout << "Constructor\n"; this->a = a; }
//	int a;
//	~V() {
//		std::cout << "Des\n";
//	}
//};

class Person
{
public:
	Person();
	Person(int, int, bool);

	Person* getThis() {
		return this;
	}

	static int getDefaultHP() {
		return hp;
	}

	~Person() {}

private:
	static int hp;
	int endurance;
	bool enemy;
};

Person::Person() {
	hp = 50;
	endurance = 50;
	enemy = false;
}

Person::Person(int hp, int endurance, bool enemy) {
	//this->hp = hp;
	this->endurance = endurance;
	this->enemy = enemy;
}

int main()
{
	Person::getDefaultHP();

	Person person1(100, 70, false);

	std::cout << "obj addr: " << &person1 << " getThis: " << person1.getThis() << std::endl;

	Person person2;

	std::cout << "obj addr: " << &person2 << " getThis: " << person2.getThis() << std::endl;

	//int* arr = nullptr;

	/*for (size_t i = 0; i < 10; i++)
	{
		srand(time(NULL));
		std::cout << rand() << std::endl;
	}*/
	/*std::multiset<int> st;

	st.insert(10);
	st.insert(10);
	st.insert(10);
	st.insert(20);
	st.insert(20);
	st.insert(20);
	st.insert(30);
	st.insert(30);
	st.insert(30);

	for (auto& el : st) {
		std::cout << el << ' ' << el << std::endl;
	}*/

	// id even_number (10 elements)
	/*std::map<unsigned, unsigned> mp;
	
	auto res1 = mp.emplace(1, 10);
	auto res2 = mp.emplace(1, 12);
	auto res3 = mp.emplace(1, 14);
	auto res4 = mp.emplace(2, 20);
	auto res5 = mp.emplace(2, 22);
	auto res6 = mp.emplace(2, 24);

	for (auto& el : mp) {
		std::cout << el.first << ' ' << el.second << std::endl;
	}*/

	/*std::vector<V> a;
	a.push_back(V(10));

	std::cout << "A: " << a[0].a << std::endl;*/

	//mp.emplace(1, 3);
	//mp.emplace(1, 323);
	//mp.emplace(1, 323);
	//mp.emplace(1, 323);
	//mp.emplace(1, 323);
	//mp.insert(std::pair<unsigned, unsigned>(1, 2));
	//mp.insert({1, 2});

	///*std::cout << mp["one"] << std::endl;
	//std::cout << mp["two"] << std::endl;
	//std::cout << mp["three"] << std::endl;*/

	//for (auto it = mp.begin(); it != mp.end(); it++)
	//{
	//	std::cout << (*it).first << ' ' << (*it).second << std::endl;
	//}

	/*Node* root;

	root = new Node;
	root->next = new Node;

	root->next->next = new Node;*/

	/*std::vector<std::pair<int, int>> v1;

	v1.push_back(std::make_pair(rand(), rand()));
	v1.push_back(std::make_pair(rand(), rand()));
	v1.push_back(std::make_pair(rand(), rand()));*/

	//int a = 10;

	//int b = --a;

	//std::cout << b << std::endl;

	/*for (auto it = --v1.end(); it != (v1.begin() - 1); it--) {

		std::cout << (*it).first << std::endl;
	}*/

	//std::pair<int, std::string> p1;//{10, "ASUS"};

	//p1.first = 10; 
	//p1.second = "ASUS";

	//std::cout << "first: " << p1.first << " second: " << p1.second << std::endl;


	//std::vector<int> v1;

	//v1.push_back(10);
	//v1.insert(v1.end(), 30);
	//v1.insert(v1.end(), 40);
	//v1.insert(v1.end(), 50);
	//v1.insert(v1.end(), 60);

	////std::cout << "s " << v1.size() << std::endl;
	////std::cout << "c " << v1.capacity() << std::endl;

	////v1.clear();
	//v1.erase(v1.begin() + 1, v1.end() - 1);
	//v1.shrink_to_fit();

	//std::cout << "s " << v1.size() << std::endl;
	//std::cout << "c " << v1.capacity() << std::endl;

	//for (auto &el : v1) {
	//	std::cout << el << std::endl;
	//}

	return 0;
}