#include <iostream>
#include <vector>
#include <list>

//// Базовый класс
//class Animal {
//public:
//	/*Animal() {
//		std::cout << this << std::endl;
//	}*/
//
//	virtual void sound() = 0;
//
//	void setWeight(int weight) {
//		if (weight > 0 && weight < 10000)
//			this->weight = weight;
//		else
//			this->weight = 0;
//	}
//
//	int getWeight() {
//		return weight;
//	}
//
//	void setName(std::string name) {
//		this->name = name;
//	}
//
//	std::string getName() {
//		return name;
//	}
//
//protected:
//	int weight;
//	std::string name;
//};
//
//// Производный класс
//class Cat : public /* Вид наследования */ Animal {
//public:
//	void sound() override {
//		std::cout << "Meow Meow Meow" << std::endl;
//	}
//};
//
//class Dog : public /* Вид наследования */ Animal {
//public:
//	void sound() override {
//		std::cout << "Woof Woof Woof" << std::endl;
//	}
//};
//
//class Raccoon : public /* Вид наследования */ Animal {
//public:
//	void sound() override {
//		std::cout << "Shhh Shhh Shhh" << std::endl;
//	}
//};

int main()
{
	std::list<int> data;

	for (size_t i = 0; i < 10; i++)
	{
		data.push_back(rand());
	}

	data.push_back(data.front());
	data.push_back(data.front());
	data.push_back(data.front());

	data.push_back(data.back());
	data.push_back(data.back());
	data.push_back(data.back());

	for (const auto& el : data)
	{
		std::cout << el << std::endl;
	}

	std::cout << std::endl;
	data.unique();

	auto it = data.begin();
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << *(it++) << std::endl;
	}

	//for (const auto& el : data)
	//{
	//	std::cout << el << std::endl;
	//}

	//std::vector<Animal*> animals;

	//Cat obj_cat_1;
	//Cat obj_cat_2;

	//Dog obj_dog_1;
	//Dog obj_dog_2;

	//Raccoon obj_raccoon_1;
	//Raccoon obj_raccoon_2;

	//animals.push_back(&obj_cat_1);
	//animals.push_back(&obj_cat_2);
	//				  
	//animals.push_back(&obj_dog_1);
	//animals.push_back(&obj_dog_2);
	//				  
	//animals.push_back(&obj_raccoon_1);
	//animals.push_back(&obj_raccoon_2);

	//for (const auto& animal : animals)
	//{
	//	std::cout << "Addr: " << animal << " Type of data: " << typeid(*animal).name() << std::endl;
	//}

	return 0;
}