#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iomanip>

//#include <tuple>

//class B {
//public:
//	int getField() { return field; }
//private:
//	int field;
//};
//
//class A {
//public:
//	B getB() { return obj; }
//private:
//	B obj;
//};

//std::pair<std::string, unsigned> get() {
//	//return std::make_pair("Person", rand() % 100);
//	return { "Person", rand() % 100 };
//}

//class MyClass
//{
//public:
//	MyClass(int val, int val2) { b = val; }
//
//private:
//	int b;
//};

//class Charactristics {
//public:
//	int wheelSize = 0;
//	int weight = 0;
//};

//class Car : public Charactristics {
//public:
//	Car(int wheelSize, int weight) {
//		this->wheelSize = wheelSize;
//		this->weight = weight;
//	}
//};

int main()
{
	//std::set<std::pair<int, std::string>> st;

	//st.insert(std::pair<int, std::string>(20, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(20, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(20, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(20, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(10, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(10, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(10, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(20, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(30, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(30, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(30, "djfsdofsdfpow"));
	//st.insert(std::pair<int, std::string>(30, "djfsdofsdfpow"));

	//for (auto& el : st) {
	//	std::cout << "Key: " << el.first << " Value: " << el.second << std::endl;
	//}

	/*for (auto& el : mp) {
		std::cout << "Key: " << std::setw(3) << el.first << " Value: " << std::setw(3) << el.second << std::endl;
	}*/

	/*std::multimap<int, std::string> mp;

	mp.emplace(10, "dsfjdsfjksd");
	mp.emplace(10, "djksfiweof");
	mp.emplace(10, "kjiofjdowejfod");
	mp.emplace(11, "kjiofjdowejfod");
	mp.emplace(12, "kjiofjdowejfod");
	mp.emplace(13, "kjiofjdowejfod");

	std::multimap<int, std::string>::iterator it;
	if ((it = mp.find(10)) != mp.end()) {
		std::cout << "FFF: Key: " << (*it).first << " Value: " << (*it).second << std::endl;
	}
	else {
		std::cout << "Not found." << std::endl;
	}

	for (auto& el : mp) {
		std::cout << "Key: " << std::setw(3) << el.first << " Value: " << std::setw(3) << el.second << std::endl;
	}*/

	//std::map<int, int> mp;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	mp.emplace(i * 2, i * 2 + 1);
	//}

	//auto it = mp.find(8);

	//if (it != mp.end()) {
	//	std::cout << (*it).second << std::endl;
	//}
	//else {
	//	std::cout << "Not found." << std::endl;
	//}

	/*mp.erase(4);
	mp.erase(8);*/

	//try {
	//	mp.at(3) = 10;
	//}catch (const std::exception& ex){
	//	std::cout << ex.what() << std::endl;
	//}

	//mp.at(3) = 1000000;
	//mp.at(8) = 1000000;

	/*for (auto& el : mp) {
		std::cout << "Key: " << std::setw(3) << el.first << " Value: " << std::setw(3) << el.second << std::endl;
	}*/
	
	/*for (auto& el : mp) {
		std::cout << "Key: " << std::setw(3) << el.first << " Value: " << std::setw(3) << el.second << std::endl;
	}*/
	//std::vector<MyClass> vm;

	//vm.push_back(MyClass(10, 20));
	////vm.push_back(10, 20);
	//vm.emplace_back(10, 20);

	/*std::map<std::string, std::string> mp;

	mp.insert(std::pair<std::string, std::string>("one", "fdjsflkjdkjf"));
	mp.insert({ "one", "fdjsflkjdkjf" });

	mp.emplace("one", "fdjsflkjdkjf");

	for (auto& el : mp) {
		std::cout << "Key: " << el.first << " Value: " << el.second << std::endl;
	}*/

	/*std::map<std::string, std::string> mp{
		{ "A", "QWER"},
		{ "B", "NJKFD"},
		{ "C", "FDKSJ"},
	};*/

	//for (auto& el : mp) {
	//	std::cout << "Key: " << el.first << " Value: " << el.second << std::endl;
	//}
	//
	//for (std::map<std::string, std::string>::iterator it = mp.begin(); it != mp.end(); it++)
	//{
	//	std::cout << "Key: " << (*it).first << " Value: " << (*it).second << std::endl;
	//}

	//std::tuple<int, float, long, std::string> tp{ 1, 2, 3, "fdsfds" };

	//std::cout << std::get<0>(tp) << std::endl;
	//std::cout << std::get<1>(tp) << std::endl;
	//std::cout << std::get<2>(tp) << std::endl;
	//std::cout << std::get<3>(tp) << std::endl;

	//std::pair<int, std::string> p1{ 10, "dfdsfs" };
	
	//std::pair<std::pair<int, int>, std::pair<int, int>> p2;

	/*std::cout << "First: " << p1.first << " Second: " << p1.second << std::endl;

	std::cout << "First: " << get().first << " Second: " << get().second << std::endl;*/

	//std::vector<int> v;

	//v.push_back(10);
	//v.push_back(10);
	//v.push_back(10);
	//v.push_back(10);
	
	//int a = 10;
	//int b = --a;

	//std::cout << b << std::endl;

	/*for (std::vector<int>::iterator it = v.end(); it != v.begin(); it--)
	{
		std::cout << *it << std::endl;
	}*/

	return 0;
}