/* 홍정모의 따라하며 배우는 C++ 7장 */
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
//	return x + y; // 매개변수는 함수가 어떤일은 하는지를 조절해줌
//} //x and y are destroyed here // 함수가 끝나면 사라짐
//
//void doSomething(int y) //call by value
//{
//	cout << "In Function " << y << " " << &y << endl;
//} //함수밖으로 나가면 사라짐

//void addOne(int& y)
//{
//	cout << y << " " << &y << endl;
//
//	y += 1;
//}

// sinOut과 cosOut은 함수를 호출한곳에도 영향을 줌
// const를 매개변수에 박아두면 입력이란것을 알수있다
//void getSinCos(const double &degree, double& sinOut, double& cosOut) 
//{
//	static const double pi = 3.141592; // static 설정하면 매번 설정되는게 아니라 재사용
//	const double rad = degree * pi / 180.0;
//	//cmath
//	sinOut = std::sin(rad);
//	cosOut = std::cos(rad);
//}

// const와 & 사용해서 입력받을 매개변수를 정의
//void foo(const int& x)
//{
//	cout << x << endl;
//}
//
//// 포인터를 인자로 받을때는 매개변수에 *& 사용
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
//int* getValue1(int x) // 위험함
//{
//	int value = x * 2;
//	return &value;
//}

//int& get(std::array<int, 100>& my_array, int x)
//{
//	return my_array[x];
//}

// 함수만들때마다 구조체를 만들어주기에 부담이 된다
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

//inline int min(int x, int y) //인라인함수
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

//선언을 헤더파일에 할 경우에는 default값 한곳에만 설정해야함
//void print(int x = 10, int y = 20, int z = 30) // 매개변수의 default값 설정
////여러개 설정할때는 반드시 맨 오른쪽은 값 설정해야함
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
//// 함수의 포인터를 매개변수로 받음
//// 기능을 수행하는것을 매개변수로 받을수있음
//void printNumber(const array<int, 10>& my_array, bool (*check_func)(const int&))
//{
//	for (auto element : my_array)
//	{
//		if (check_func(element) == true)
//			cout << element << " ";
//	}
//}

//vector를 스택처럼 사용하기
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
//	//사용자가 지정한 범위 외의 행동을 하려고 하면 이를 저지해줌
//	assert(idx >= 0); // 배열의 크기가 5이므로 반드시 0보다는 커야하고
//	assert(idx < my_array.size() - 1); // 4보다는 작아야함
//	cout << my_array[idx] << endl;
//}

//	ellipsis
//double findAverage(int count, ...)
//{
//	//va : 가변 인수
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
	//매개변수와 인자의 구분
	
	//int x = 1, y = 2;

	//foo(6, 7); // 6, 7는 인자
	//foo(x, y); // 인자

	//call by value
	//인자로 받은 값을 복사해서 사용
	//원래 값이 보존됨, 복사를 하기때문에 메모리 사용량이 증가

	//doSomething(5);

	//int x = 6; 

	//cout << "In main " << x << " " << &x << endl;

	//doSomething(x);
	//doSomething(x + 1);

	//call by reference
	//함수 자체를 인자로 전달
	//복사하지 않고 직접 참조를 하기에 빠름
	//직접 참조를 하기에 원래 값이 영향을 받음

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

	//다양한 return values

	//int value = getValue(3);
	//int value1 = *getValue1(3); // 위험함
	//int* value2 = getValue1(3); // 더 위험함

	//std::array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024; // reference만 보내줘서 편리하게 작업
	//cout << my_array[30] << endl;

	//struct사용해서 return value 여러개 가능

	//S my_s = getStruct();

	//my_s.a;

	// tuple
	// return value 여러개 가능

	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl; // a
	//cout << std::get<1>(my_tp) << endl; // d

	//// c++ 17에서 가능
	//auto [a, d] = getTuple();
	//cout << a << endl;
	//cout << d << endl;

	//인라인 함수
	//인라인을 통해 최적화를 하려고함

	//인라인은 강제로 하는것이 아니라 권유하는것
	//인라인을 쓴다고 무조건 빨라지는게 아니기때문에 굳이 쓰지말자
	//인라인에 의존해서 최적화하면 좋지않음
	//cout << min(5, 6) << endl;
	//cout << min(3, 2) << endl;
	 
	//함수 오버로딩
	//동일한 함수 이름을 여러개 사용
	//매개변수가 반드시 달라야함
	//return만으로는 구분할수없음
	//typedef로 컴파일러 눈속임 할수는없다

	//cout << add(1, 2) << endl;
	//cout << add(1.5, 2.5) << endl;

	////매개변수의 default값
	//print(50);
	//print();

	//함수 포인터

	//int(*funcPtr)() = foo;
	//cout << funcPtr() << endl; // 5출력

	//funcPtr = goo;
	//cout << funcPtr() << endl; // 10출력

	//std::array<int, 10> my_array{ 1,2,3,4,5,6,7,8,9,10 };

	//printNumber(my_array, isEven);
	//printNumber(my_array, isOdd);

	//스택 :First In Last Out

	//스택은 빠르지만 크기가 작음, 밑에서부터 차례대로 쌓임
	//힙은 크기가 크지만 어디에 배치될지 오래걸림

	//int* p_vtr = new int[3]{ 1,2,3 };
	
	//std::vector<int> v{ 1,2,3 };

	//v.resize(2); // 더 큰 크기로 resize하면 나머지는 0으로 채움

	//v.reserve(1024); // resize보다 빠름, 나머지 공백으로 남겨둠
	
	//for (auto &e : v)
	//{
	//	cout << e << ' ';
	//}
	//cout << endl;
	//cout << v.size() << " " << v.capacity() << endl; //2, 3
	// size는 원소의 갯수, capacity는 물리적 크기

	//vector는 더 작은 크기로 resize할때 매번 delete하면 시간이 오래 걸리므로
	//지우지 않고 보이는것만 2개로 보이게 함

	//cout << v.at(2); //런타임 에러
	//cout << v[2]; //런타임에러
	
	//int* v_ptr = v.data();
	//cout << v_ptr[2]; // 포인터를 이용해 접근하면 숨겨져있는 3에 접근할수있음

	//std::vector<int> stack; // 백터를 스택처럼 사용하기

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

	//백터에서 push pop을 할때 reserve를 이용하면 capacity를 늘릴필요가 없어서
	//new delete를 사용할 필요가 없어서 효율이 좋음
	
	//재귀함수호출 -> 반드시 종료조건이 있어야함

	//countDown(2);

	//Fibo
	//for(int i=1;i<=10;i++)
	//	cout << Fibo(i) << ' ';

	//방어적 프로그래밍 
	//-> 사용자가 프로그램을 문제없이 사용하도록 코드를 작성하는것

	//assert 컴파일러의 도움을 받는것 #include <cassert>

	//assert(false); //디버그모드에서 개발자가 컴파일러에게 도움을 받는것

	//int number = 5;

	//assert(number == 5);

	//std::array<int, 5>my_array{ 1,2,3,4,5 };

	//printArray(my_array, 100);

	//const int x = 5;

	//static_assert(x == 5, "X should be 5");
	
	//main함수의 매개변수  argc, argv
	//for (int i = 0; i < argc; i++)
	//{
	//	cout << argv[i] << endl;
	//}
	
	//생략부호 ellipsis

	//cout << findAverage(1, 1, 2, 3) << endl;
	//cout << findAverage(3, 1, 2, 3) << endl;
	//cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	//cout << findAverage(10, 1, 2, 3) << endl;
	
}