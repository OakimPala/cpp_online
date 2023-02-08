#include <iostream>
#include <vector>
//#include <bitset>

//void incrementElVec(int& el) {
//	el += 1;
//}
//
//void incrementVec(std::vector<int>& v1) {
//	for (auto& el : v1)
//		el += 1;
//}

class MyClass
{
public:
	//MyClass a(10);
	//MyClass b(a);

	MyClass() {
		std::cout << "Constructor 1: " << this << std::endl;
		data = new int[10];
		size = 10;
	}

	MyClass(int value) {
		std::cout << "Constructor 2: " << this << std::endl;
		this->value = value;
		data = new int[10];
		size = 10;
	}

	MyClass(const MyClass& obj) {
		std::cout << "Constructor (COPY): " << this << std::endl;

		this->value = obj.value;
		this->size = obj.size;

		this->data = new int[obj.size];

		for (size_t i = 0; i < size; i++)
		{
			this->data[i] = obj.data[i];
		}
	}

	void setValue(int value) {
		this->value = value;
	}

	int getValue() {
		return value;
	}

	~MyClass() {
		std::cout << "Destructor: " << this << std::endl;

		//if(data != nullptr)
		delete data;
	}

private:
	int size;
	int value;
	int* data;
};

// int i = 10;

int main()
{
	MyClass a(10);
	MyClass b(a);

	//for (int i = 20; i < 30; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//MyClass* _array = new MyClass[10];

	//MyClass* a = new MyClass(132123);
	//std::cout << "a (addr): " << &a << std::endl;
	//std::cout << "a get value: " << a->getValue() << std::endl;
	//
	//MyClass* b = new MyClass();
	//std::cout << "b (addr): " << &b << std::endl;
	//b->setValue(20);
	//std::cout << "b get value: " << b->getValue() << std::endl;

	//delete a;
	//delete b;
	//delete[] _array;

	//std::vector<int> v1;

	//for (size_t i = 0; i < 10; i++){
	//	v1.push_back(i);
	//	incrementElVec(v1.back());
	//}

	////incrementVec(v1);

	//for (auto& el : v1)
	//{
	//	std::cout << el << std::endl;
	//}

	//int temp_value = 234;
	//int temp_value2 = 1234;
	//std::bitset<32> binary_digit(temp_value);
	//std::bitset<32> binary_digit2(temp_value2);
	//std::bitset<32> binary_digit_result(temp_value & temp_value2);

	//std::cout << binary_digit << std::endl;
	//std::cout << binary_digit2 << std::endl;
	//std::cout << binary_digit_result << std::endl;

	//int val_dec = 10203213;
	//int val_bin = 0b01101000101;
	//int val_oct = 0372;
	//int val_hex = 0x0000FFFF;

	//int val = 10;
	//int* ptr_val = &val;
	//int& val_ref = *ptr_val;
	//int* val_ref_ptr = &val_ref;

	////val_ref = 100;
	//std::cout << "ptr_val: " << ptr_val << std::endl;
	//std::cout << "*ptr_val: " << *ptr_val << std::endl;
	//std::cout << "val: " << val << std::endl;
	//std::cout << "&val_ref: " << &val_ref << std::endl;
	//std::cout << "val_ref: " << val_ref << std::endl;
	//std::cout << "val: " << val << std::endl;

	//int* ptr_val = new int;

	//for (int i = 0; i < 50; i++)
	//{
	//	std::cout << *(ptr_val + i) << std::endl;
	//}

	//std::cout << ptr_val << std::endl;
	//std::cout << *ptr_val << std::endl;
	//std::cout << val << std::endl;

	//std::vector<int> data;

	////MyClass a(1231, 3213);

	//for (size_t i = 0; i < 10; i++)
	//{
	//	data.push_back(i);
	//	//data.insert(data.begin(), i);
	//	//data.emplace_back(12, 23);
	//	//data.push_back(MyClass(12, 23));
	//}

	//for (auto& el : data) {
	//	std::cout << el << std::endl;
	//}

	//data.clear();
	//data.shrink_to_fit();

	return 0;
}