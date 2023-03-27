#include <iostream>
#include <vector>
#include <list>
#include <map>

//std::pair<unsigned, std::string> getPerson() {
//	return { rand(), "NAME" };
//}

//class MyClass {
//public:
//	MyClass(int a) {}
//};

int main()
{
	/*std::map<unsigned, std::string> map{
		{1, "Ivan"},
		{2, "Petr"},
		{3, "Constantin"},
	};*/

	/*map.emplace(4, "Gleb");
	map.emplace(5, "Anton");*/

	/*map.insert({ 4, "Gleb" });
	map.insert({ 5, "Anton" });*/

	/*std::cout << "Count: " << map.count(1) << std::endl;
	std::cout << "Count: " << map.max_size() << std::endl;

	map.insert(std::pair<unsigned, std::string>(4, "Gleb"));
	map.insert(std::pair<unsigned, std::string>(5, "Anton"));

	for (std::map<unsigned, std::string>::iterator it = map.begin(); it != map.end(); it++) {
		std::cout << "index: " << (*it).first << " name: " << (*it).second << std::endl;
	}*/

	/*std::cout << map["one"] << std::endl;
	std::cout << map["two"] << std::endl;
	std::cout << map["three"] << std::endl;*/
	

	//std::pair<unsigned, std::string> p1 = getPerson();

	//std::cout << "id: " << p1.first << " Name: " << p1.second << std::endl;

	/*std::pair<int, std::string> p1(1, "Ivan");
	std::pair<int, std::string> p2(2, "Petr");

	std::cout << "id: " << p1.first << " Name: " << p1.second << std::endl;
	std::cout << "id: " << p2.first << " Name: " << p2.second << std::endl;*/

	//srand(time(NULL));
	//std::list<int> list1;
	//
	//for (size_t i = 0; i < 10; i++)
	//{
	//	list1.push_back(rand());
	//}

	//list1.sort();

	////list1.unique();

	//for (std::list<int>::iterator it = list1.begin(); it != list1.end(); it++)
	//{
	//	std::cout << *it << std::endl;
	//}
	

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	v1.push_back(i * 10);
	//	//std::cout << "Element: " << v1.at(i) << std::endl;

	//	std::cout << "Size: " << v1.size() << std::endl;
	//	std::cout << "Capacity: " << v1.capacity() << "\n\n";
	//}

	//std::cout << "First element: " << v1.front() << std::endl;
	//std::cout << "Last element: " << v1.back() << std::endl;

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
	//	*it = 10;
	//}

	//for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
	//	std::cout << *it << std::endl;
	//}

	/*for (std::vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++) {
		std::cout << *it << std::endl;
	}*/

	/*for (std::vector<int>::const_reverse_iterator it = v1.crbegin(); it != v1.crend(); it++) {
		std::cout << *it << std::endl;
	}*/
	/*std::vector<int>::const_reverse_iterator it = v1.crbegin();
	while (it != v1.crend()) {
		std::cout << *it << std::endl;
		it++;
	}*/
	//v1.shrink_to_fit();
	/*v1.clear();
	v1.shrink_to_fit();

	std::cout << "Size: " << v1.size() << std::endl;
	std::cout << "Capacity: " << v1.capacity() << "\n\n";*/

	return 0;
}