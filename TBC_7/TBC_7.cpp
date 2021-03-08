/* ȫ������ �����ϸ� ���� C++ 7�� */
#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <tuple>
#include <cassert>
#include <cstdarg> // for ellipsis

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

//bool isEven(const int& number)
//{
//	if (number % 2 == 0) return true;
//	else return false;
//}
//
//bool isOdd(const int& number)
//{
//	if (number % 2 != 0) return true;
//	else return false;
//}
//
//// �Լ��� �����͸� �Ű������� ����
//// ����� �����ϴ°��� �Ű������� ����������
//void printNumber(const array<int, 10>& my_array, bool (*check_func)(const int&))
//{
//	for (auto element : my_array)
//	{
//		if (check_func(element) == true)
//			cout << element << " ";
//	}
//}

//vector�� ����ó�� ����ϱ�
//void printStack(const std::vector<int>& stack)
//{
//	for (auto& e : stack)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//}

//void countDown(int count)
//{
//	cout << count << endl;
//	if(count>1)
//		countDown(count - 1);
//}

//int Fibo(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibo(n - 1) + Fibo(n - 2);
//}

//void printArray(const std::array<int, 5>& my_array, const int& idx)
//{
//	//����ڰ� ������ ���� ���� �ൿ�� �Ϸ��� �ϸ� �̸� ��������
//	assert(idx >= 0); // �迭�� ũ�Ⱑ 5�̹Ƿ� �ݵ�� 0���ٴ� Ŀ���ϰ�
//	assert(idx < my_array.size() - 1); // 4���ٴ� �۾ƾ���
//	cout << my_array[idx] << endl;
//}

//	ellipsis
//double findAverage(int count, ...)
//{
//	//va : ���� �μ�
//	double sum = 0;
//	va_list list;
//
//	va_start(list, count);
//
//	for (int i = 0; i < count; i++)
//	{
//		sum += va_arg(list, int);
//	}
//	va_end(list);
//
//	return sum / count;
//}

int main(int argc, char *argv[])
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

	//std::array<int, 10> my_array{ 1,2,3,4,5,6,7,8,9,10 };

	//printNumber(my_array, isEven);
	//printNumber(my_array, isOdd);

	//���� :First In Last Out

	//������ �������� ũ�Ⱑ ����, �ؿ������� ���ʴ�� ����
	//���� ũ�Ⱑ ũ���� ��� ��ġ���� �����ɸ�

	//int* p_vtr = new int[3]{ 1,2,3 };
	
	//std::vector<int> v{ 1,2,3 };

	//v.resize(2); // �� ū ũ��� resize�ϸ� �������� 0���� ä��

	//v.reserve(1024); // resize���� ����, ������ �������� ���ܵ�
	
	//for (auto &e : v)
	//{
	//	cout << e << ' ';
	//}
	//cout << endl;
	//cout << v.size() << " " << v.capacity() << endl; //2, 3
	// size�� ������ ����, capacity�� ������ ũ��

	//vector�� �� ���� ũ��� resize�Ҷ� �Ź� delete�ϸ� �ð��� ���� �ɸ��Ƿ�
	//������ �ʰ� ���̴°͸� 2���� ���̰� ��

	//cout << v.at(2); //��Ÿ�� ����
	//cout << v[2]; //��Ÿ�ӿ���
	
	//int* v_ptr = v.data();
	//cout << v_ptr[2]; // �����͸� �̿��� �����ϸ� �������ִ� 3�� �����Ҽ�����

	//std::vector<int> stack; // ���͸� ����ó�� ����ϱ�

	//stack.push_back(3);
	//printStack(stack);
	//stack.push_back(5);
	//printStack(stack);
	//stack.push_back(7);
	//printStack(stack);
	//stack.pop_back();
	//printStack(stack);
	//stack.pop_back();
	//printStack(stack);
	//stack.pop_back();
	//printStack(stack);

	//���Ϳ��� push pop�� �Ҷ� reserve�� �̿��ϸ� capacity�� �ø��ʿ䰡 ���
	//new delete�� ����� �ʿ䰡 ��� ȿ���� ����
	
	//����Լ�ȣ�� -> �ݵ�� ���������� �־����

	//countDown(2);

	//Fibo
	//for(int i=1;i<=10;i++)
	//	cout << Fibo(i) << ' ';

	//����� ���α׷��� 
	//-> ����ڰ� ���α׷��� �������� ����ϵ��� �ڵ带 �ۼ��ϴ°�

	//assert �����Ϸ��� ������ �޴°� #include <cassert>

	//assert(false); //����׸�忡�� �����ڰ� �����Ϸ����� ������ �޴°�

	//int number = 5;

	//assert(number == 5);

	//std::array<int, 5>my_array{ 1,2,3,4,5 };

	//printArray(my_array, 100);

	//const int x = 5;

	//static_assert(x == 5, "X should be 5");
	
	//main�Լ��� �Ű�����  argc, argv
	//for (int i = 0; i < argc; i++)
	//{
	//	cout << argv[i] << endl;
	//}
	
	//������ȣ ellipsis

	//cout << findAverage(1, 1, 2, 3) << endl;
	//cout << findAverage(3, 1, 2, 3) << endl;
	//cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	//cout << findAverage(10, 1, 2, 3) << endl;
	
}