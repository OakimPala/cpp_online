#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iomanip>

std::string RandomString(int ch)
{
	const int ch_MAX = 26;
	char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
						  'h', 'i', 'j', 'k', 'l', 'm', 'n',
						  'o', 'p', 'q', 'r', 's', 't', 'u',
						  'v', 'w', 'x', 'y', 'z' };
	std::string result = "";
	for (int i = 0; i < ch; i++)
		result = result + alpha[rand() % ch_MAX];

	return result;
}

class Engine {
public:
	Engine() = default;

	Engine(unsigned hp) {
		this->hp = hp;
	}
private:
	unsigned hp;
};

class VehicleCharacteristics {
public:
	//...
protected:
	unsigned weight;
	unsigned wheelSize;
};

class Vehicle : public VehicleCharacteristics {
public:
	Vehicle(Engine engine, std::string mark, unsigned weight, unsigned wheelSize) {
		this->engine = engine;
		this->mark = mark;
		this->weight = weight;
		this->wheelSize = wheelSize;
	}

	std::string getModel() {
		return mark;
	}

private:
	std::string mark;
	Engine engine;
};

//std::pair<int, int> _get() {
//	return {10, 10};
//}

int main()
{
	Engine engine(500);
	Vehicle* car = new Vehicle(engine, "Subaru", 1500, 20);

	std::map<std::string, Vehicle*> objectTable;

	const char* marks[] = {
		"Subaru",
		"Reno",
		"Jiguli",
		"Audi"
	};

	for (size_t i = 0; i < 20; i++)
	{
		objectTable.insert({ RandomString(10), new Vehicle(Engine(rand() % 500 + 1), marks[rand() % 4], 1500, 20)});
	}

	for (const auto& el : objectTable) {
		std::cout << "id: " << el.first << " Model: " << std::setw(10) << el.second->getModel() << std::endl;
	}

	for (const auto& el : objectTable) {
		delete el.second;
	}

	objectTable.clear();


	/*std::map<int, int> mp;

	for (int i = 0, j = 0, k = 3; i < 10; i++, j+=2, k+=2) {
		mp.emplace(j, k);
	}

	for (auto& el : mp)
	{
		std::cout << el.first << ' ' << el.second << std::endl;
	}*/
	/*std::set<std::pair<int, int>> st;

	st.insert({1, 3});
	st.insert({1, 3});
	st.insert({1, 2});
	st.insert({2, 2});
	st.insert({2, 1});
	st.insert({3, 1});
	st.insert({3, 1});

	for (auto& el : st)
	{
		std::cout << el.first << ' ' << el.second << std::endl;
	}*/

	/*std::vector<MyClass> v;
	v.push_back(MyClass(5));
	v.emplace_back(5);*/

	/*std::map<int, std::string> mp;

	auto res1 = mp.emplace(1, "qwerty");
	auto res2 = mp.emplace(1, "qwertyqew");
	auto res3 = mp.emplace(2, "qwertyqew");
	auto res4 = mp.emplace(2, "qwertyqew");
	auto res5 = mp.emplace(3, "qwertyqewdf");
	auto res6 = mp.emplace(3, "qwertyqewdsf");
	auto res7 = mp.emplace(3, "qwertyqewsdfsdf");

	auto res = mp.find(1);
	std::cout << "FIND: " << (*res).first << ' ' << (*res).second << std::endl;*/

	/*mp.insert(std::pair<int, std::string>(1, "fsfdf"));
	mp.insert({1, "fsfdf"});*/

	/*for (auto& el : mp)
	{
		std::cout << el.first << ' ' << el.second << std::endl;
	}*/

	/*std::cout << mp["one"] << std::endl;
	std::cout << mp["two"] << std::endl;
	std::cout << mp["three"] << std::endl;*/

	/*std::tuple<int, float, std::string> t2{ 1, 10.f, "hello" };

	std::cout << std::get<0>(t2) << std::endl;
	std::cout << std::get<1>(t2) << std::endl;
	std::cout << std::get<2>(t2) << std::endl;*/

	/*std::pair<int, std::string> mp(1, "Petr");

	std::cout << mp.first << ' ' << mp.second << std::endl;*/

	/*std::pair<std::pair<int, int>, std::pair<int, int>> 
		mp2({10, 20}, {30, 40});

	std::cout << mp2.first.first << ' ' << mp2.first.second << ' '
		<< mp2.second.first << ' ' << mp2.second.second << std::endl;*/


	return 0;
}