/* 홍정모의 따라하며 배우는 C++ 4장 */
#include <iostream>
#include <string>
#include <limits>
#include "test.h"
using namespace std;

//namespace a01 {
//	int a = 1;
//
//	void do_something()
//	{
//		a += 3;
//		cout << a << endl;
//	}
//}
//namespace a02
//{
//	int a = 1;
//	void do_something()
//	{
//		a += 5;
//		cout << a << endl;
//	}
//}

//int a02 = 123; //전역변수라 할수있다

//void do_something()
//{
//	//이렇게 선언하면 변수가 메모리에 할당되어도 블록을 나오면 초기화됨
//	int a03 = 1; 
//	++a03;
//	cout << a03 << endl;
//}
//
//void do_something2()
//{
//	//정적변수선언, 선언될때 메모리에 할당되고 블록을 나와도 초기화 되지않음 
//	static int a04 = 1; 
//	++a04;
//	cout << a04 << endl;
//}

// forward declaration
// 외부 test.cpp에 선언한 함수도 따로 #include "test.cpp"; 대신에
// 전방 선언을 통해 사용할수있으며 컴파일러가 몸체가 어딘가에 있다는것을 알게된다 
// extern void test();랑 같다.. extern은 생략가능
//void test(); 
//void test02();

//namespace f01
//{
//	int a05(123);
//}
//namespace f02
//{
//	int a05(456);
//}


// 열거형
//enum color
//{
//	// 초기화 안하면 0부터 시작, 초기화하면 초기화하는 값부터 하나씩 올라감, 여러개 초기화도 가능
//	COLOR_BLACK,
//	COLOR_RED,
//	COLOR_BLUE = 5,
//	COLOR_GREEN
//};
//
//enum fruit
//{
//	apple,
//	banana
//};
//
//enum class color02
//{
//	COLOR_BLACK,
//	COLOR_RED,
//	COLOR_BLUE = 5,
//	COLOR_GREEN
//};
//
//enum class fruit02
//{
//	apple,
//	banana
//};

//struct Person
//{
//	double	height;
//	float	weight;
//	int		age;
//	string	name;
//	
//	// 구조체 안에 함수를 넣을수 있음
//	void printPerson()
//	{
//		cout << height << " " << weight << " " << age << " " << name << endl;
//	}
//};
//
//struct Employee // 2 + (2) + 4 + 8 == 14가 아니라 16이 됨 -> 이를 padding이라 함
//{
//	short	id;		// 2bytes -> 배치를 할때 2바이트는 잘 배치가 안되서 (2)바이트 추가됨
//	int		age;	// 4bytes
//	double	wage;	// 8bytes;
//};

int main()
{
	
	// scope

	//현대 프로그래밍에서는 변수가 살아는 범위를 최대한 줄일려고 함
	//따라서 범위를 설정해서 변수가 짧게 짧게 살아가게 만듦
	//개체지향 프로그래밍의 기본 철학
	//int apple = 5;
	//cout << apple << endl; //5
	//{
	//	apple = 1;
	//	cout << apple << endl; //1
	//}
	//cout << apple << endl; //1 

	//int apple2 = 5;
	//cout << apple2 << endl; //5
	//{
	//	int apple2 = 1; // 여기서 선언한 apple2가 살아남을수 있는 범위는 {} 안
	//	cout << apple2 << endl; //1
	//}
	//cout << apple2 << endl; //5
	
	/*a01::a;
	a01::do_something();

	a02::a;
	a02::do_something();*/

	//전역변수는 가급적 사용하지말자

	//cout << a02 << endl; //123
	//
	//int a02 = 1;

	//cout << ::a02 << endl; //영역연산자를 이용해서 123 출력
	//cout << a02 << endl; //1

	//do_something(); //2
	//do_something(); //2

	//do_something2(); //2
	//do_something2(); //3
	//do_something2(); //4

	// 출력값은 같으나 메모리 주소는 다름..
	// 이를 방지하기 위해서는 헤더에는 선언만 하고 값은 cpp에서 대입
	//test(); 
	//cout << "pi" << constants::pi << " " << &constants::pi << endl;

	//// 출력값도 같으면 메모리 주소도 같음
	//test02();
	//cout << "pi02 " << constants02::pi02 << " " << &constants02::pi02 << endl;

	// 객체지향 프로그래밍을 할때는 같은 이름의 변수를 여러개 선언하는 경우가 있으며
	// 이를 namespace나 class로 구분한다..
	// 오히려 같은 이름의 변수를 사용하는것을 권장하기도 한다.. 오버로딩, 오버라이딩을 통해 어떤 변수를 사용할지를 결정
	// 이렇게 어떤 변수를 사용할지를 모호해 하는것을 모호성이라 하며 이는 using을 통해 해결

	/*{
		using namespace f01;
		cout << a05 << endl;
	}

	{
		using namespace f02;
		cout << a05 << endl;
	}*/
	
	// auto 키워드
	//auto a06 = 123; // 스스로 어떤 자료형인지 정하게함
	 
	// auto는 파라미터에 사용할수없음

	//string s01 = "My name is Kim Keon Woo";
	//char s02[] = "My age is 27 years old"; // c스타일

	//cout << s01 << endl;
	//cout << s02 << endl;
	//string name;
	//int age;

	//cout << "you age ? ";
	//cin >> age;

	////ignore을 통해 입력을 제대로 받을수있음
	//cin.ignore(32767, '\n'); // \n을 만날때까지 32767개의 문자를 무시해라
	//cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

	//cout << "your name ? ";
	//getline(cin, name); // string에 사용, 엔터치기전까지 라인을 다 입력받을수있음
	//
	//cout << name << " " << age << endl;

	//string s03("kim ");
	//string s04("keon woo");

	//string s05 = s03 + s04; // append

	//cout << s05 << " " << s05.length() << endl;

	//color paint01 = COLOR_BLACK; 
	//color paint02 = COLOR_RED; 
	//color paint03 = COLOR_BLUE; 
	//color paint04 = COLOR_GREEN; 
	//color my_color = static_cast<color>(0); // 이렇게 형변환도 가능

	//cout << paint01 << " " << paint02 << " " << paint03 << " " << paint04 << endl;
	//cout << my_color << endl;

	//color c01 = COLOR_BLACK; //0
	//fruit f01 = apple; //0

	//// 다른 열거형이지만 둘다 값이 0이기에 같다고 출력이 됨
	//// 이러한 열거형을 단점을 보완한게 enum class
	//if (c01 == f01)
	//	cout << "color is fruit" << endl;

	//// 이를 해결하기 위해서는 영역 제한을 해야하고 이는 enum class를 통해 제한을 할수있음
	//color02 c02 = color02::COLOR_BLACK;
	//fruit02 f02 = fruit02::apple;

	//if (c02 == f02) // 에러가 발생
	//	cout << "color is fruit" << endl;
	
	
	//자료형에게 가명 붙여주기
	//데이터베이스의 alias와 같음, 사용자의 편의를 위해 사용

	//typedef double distance_t; // 메모겸 주석겸 사용

	//double	   my_distance;
	//distance_t home2work;
	//distance_t home2school;

	//구조체
	
	//Person me{ 176, 92, 27, "keonwoo" }; //uniform 초기화방식으로 초기화
	//Person mom;
	//Person sister;
	//
	//me.printPerson();

	//cout << sizeof(Employee) << endl; //16이 출력

}