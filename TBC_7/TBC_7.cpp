/* ȫ������ �����ϸ� ���� C++ 7�� */
#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <tuple>

using namespace std;

//int foo(int x, int y);
//
//int foo(int x, int y)
//{
//	return x + y; // �Ű������� �Լ��� ����� �ϴ����� ��������
//} //x and y are destroyed here // �Լ��� ������ �����
//
//void doSomething(int y) //call by value
//{
//	cout << "In Function " << y << " " << &y << endl;
//} //�Լ������� ������ �����

//void addOne(int& y)
//{
//	cout << y << " " << &y << endl;
//
//	y += 1;
//}

// sinOut�� cosOut�� �Լ��� ȣ���Ѱ����� ������ ��
// const�� �Ű������� �ھƵθ� �Է��̶����� �˼��ִ�
//void getSinCos(const double &degree, double& sinOut, double& cosOut) 
//{
//	static const double pi = 3.141592; // static �����ϸ� �Ź� �����Ǵ°� �ƴ϶� ����
//	const double rad = degree * pi / 180.0;
//	//cmath
//	sinOut = std::sin(rad);
//	cosOut = std::cos(rad);
//}

// const�� & ����ؼ� �Է¹��� �Ű������� ����
//void foo(const int& x)
//{
//	cout << x << endl;
//}
//
//// �����͸� ���ڷ� �������� �Ű������� *& ���
//typedef int* pint;
//void foo1(pint &ptr)
//{
//	cout << ptr << ' ' << &ptr << endl;
//}

//void printElement(const int (&arr)[4])
//void printElement(const vector<int>&arr)
//{
//
//}

//void foo(int* ptr) //call by address
//{
//	cout << *ptr << ' ' << ptr << ' ' << &ptr << endl;
//}

//int getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}
//
//int* getValue1(int x) // ������
//{
//	int value = x * 2;
//	return &value;
//}

//int& get(std::array<int, 100>& my_array, int x)
//{
//	return my_array[x];
//}

// �Լ����鶧���� ����ü�� ������ֱ⿡ �δ��� �ȴ�
//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s{ 1,2,3,4 };
//}

//std::tuple<int, double> getTuple()
//{
//	int a = 10;
//	double d = 3.14;
//
//	return std::make_tuple(a, d);
//}

//inline int min(int x, int y) //�ζ����Լ�
//{
//	return x > y ? y : x;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//double add(double x, double y)
//{
//	return x + y;
//}

//������ ������Ͽ� �� ��쿡�� default�� �Ѱ����� �����ؾ���
//void print(int x = 10, int y = 20, int z = 30) // �Ű������� default�� ����
////������ �����Ҷ��� �ݵ�� �� �������� �� �����ؾ���
//{
//	cout << x << " " << y << " " << z << endl;
//}

//int foo()
//{
//	return 5;
//}
//int goo()
//{
//	return 10;
//}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

// �Լ��� �����͸� �Ű������� ����
// ����� �����ϴ°��� �Ű������� ����������
void printNumber(const array<int, 10>& my_array, bool (*check_func)(const int&))
{
	for (auto element : my_array)
	{
		if (check_func(element) == true)
			cout << element << " ";
	}
}

int main()
{
	//�Ű������� ������ ����
	
	//int x = 1, y = 2;

	//foo(6, 7); // 6, 7�� ����
	//foo(x, y); // ����

	//call by value
	//���ڷ� ���� ���� �����ؼ� ���
	//���� ���� ������, ���縦 �ϱ⶧���� �޸� ��뷮�� ����

	//doSomething(5);

	//int x = 6; 

	//cout << "In main " << x << " " << &x << endl;

	//doSomething(x);
	//doSomething(x + 1);

	//call by reference
	//�Լ� ��ü�� ���ڷ� ����
	//�������� �ʰ� ���� ������ �ϱ⿡ ����
	//���� ������ �ϱ⿡ ���� ���� ������ ����

	//int x = 5;
	//cout << x << " " << &x << endl;

	//addOne(x);
	//cout << x << " " << &x << endl;

	//double sin(0.0);
	//double cos(0.0);

	//getSinCos(30.0, sin, cos);

	//cout << sin << ' ' << cos << endl;

	//foo(6);

	//int x = 5;

	//pint ptr = &x;

	//cout << ptr << ' ' << &ptr << endl;

	//foo1(ptr);

	//int arr[]{ 1,2,3,4, };
	//vector<int> arr{ 1,2,3,4 };

	//call by address

	//int value = 5;
	//cout << value << ' ' << &value << endl;

	//int* ptr = &value;

	//foo(ptr);
	//foo(&value);

	//�پ��� return values

	//int value = getValue(3);
	//int value1 = *getValue1(3); // ������
	//int* value2 = getValue1(3); // �� ������

	//std::array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024; // reference�� �����༭ ���ϰ� �۾�
	//cout << my_array[30] << endl;

	//struct����ؼ� return value ������ ����

	//S my_s = getStruct();

	//my_s.a;

	// tuple
	// return value ������ ����

	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl; // a
	//cout << std::get<1>(my_tp) << endl; // d

	//// c++ 17���� ����
	//auto [a, d] = getTuple();
	//cout << a << endl;
	//cout << d << endl;

	//�ζ��� �Լ�
	//�ζ����� ���� ����ȭ�� �Ϸ�����

	//�ζ����� ������ �ϴ°��� �ƴ϶� �����ϴ°�
	//�ζ����� ���ٰ� ������ �������°� �ƴϱ⶧���� ���� ��������
	//�ζ��ο� �����ؼ� ����ȭ�ϸ� ��������
	//cout << min(5, 6) << endl;
	//cout << min(3, 2) << endl;
	 
	//�Լ� �����ε�
	//������ �Լ� �̸��� ������ ���
	//�Ű������� �ݵ�� �޶����
	//return�����δ� �����Ҽ�����
	//typedef�� �����Ϸ� ������ �Ҽ��¾���

	//cout << add(1, 2) << endl;
	//cout << add(1.5, 2.5) << endl;

	////�Ű������� default��
	//print(50);
	//print();

	//�Լ� ������

	//int(*funcPtr)() = foo;
	//cout << funcPtr() << endl; // 5���

	//funcPtr = goo;
	//cout << funcPtr() << endl; // 10���

	std::array<int, 10> my_array{ 1,2,3,4,5,6,7,8,9,10 };

	printNumber(my_array, isEven);
	printNumber(my_array, isOdd);

}