/* 홍정모의 따라하며 배우는 C++ 2장 */
#include <iostream>
#include <iomanip>
#include <limits>
#include "myConst.h"
using namespace std;

int main()
{
	//1byte = 8bit

	//bool bValue = true;
	//char cValue = 'A';
	//float fValue = 3.141592f; // 4바이트
	//double dValue = 3.141592; // 8바이트

	//auto aValue = 3.141592; // 컴파일러가 자료형을 스스로 파악

	//cout << (bValue ? 1 : 0) << endl;
	//cout << cValue << ' ' << (int)cValue << endl;
	//cout << fValue << endl;
	//cout << dValue << endl;
	//cout << aValue << ' ' << sizeof(aValue) << endl;

	//변수 초기화 방식
	//int a = 123; // copy initalization
	//int b(123); // direct initialization
	//int c{ 123 }; // uniform initialization

	//int k,l,m = 123; // 이렇게 한번에 초기화 할수는 있으나 선호하지는 말고 하나씩 초기화 하는 습관을 들이자

	//char 1byte, short 2byte, int 4byte, long 4byte, long long 8byte

	//short s = 1;
	//int i = 1;
	//long l = 1;
	//long long ll = 1;

	//cout << sizeof(short) << endl;
	//cout << sizeof(int) << endl;
	//cout << sizeof(long) << endl;
	//cout << sizeof(long long) << endl;
	//cout << std::numeric_limits<long long>::max() << endl;
	//cout << std::numeric_limits<long long>::min() << endl;
	//cout << std::numeric_limits<long long>::lowest() << endl;

	//s = 32767; //short형으로 표현할수 있는 최대값
	//s = s + 1;

	//cout << s << endl; //결과값 -32768 -> overflow
	//overflow란 자료형의 범위에서 가장 큰 숫자에서 +가 되면 가장 작은 숫자로
	//가장 작은 숫자에서 -가 되면 가장 큰 숫자로 결과값이 나오는것을 말한다

	//unsigned int i = -1;
	//cout << i << endl; //overflow 발생 


	//고정 너비 정수

	//std::int16_t i(5); // 2바이트크기의 부호있는 정수
	//std::uint16_t u(5); // 2바이트 크기의 부호없는 정수

	//cout << i << endl;

	//std::int_fast8_t fi(5); // 1바이트 정수중 가장 빠른 정수
	//std::int_least64_t fl(5); // 적어도 8바이트의 정수


	//void형 : void는 메모리를 차지하지 않음

	//void mv; //void를 자료형으로 선언 x

	//int i = 123;
	//float f = 123.456f;

	//void *mv; //포인터

	//mv = (void*)&i; //i의 주소
	//mv = (void*)&f; //f의 주소

	//cout << mv << endl;


	//부동소수점수

	//float 4byte, double 8byte, long double 8byte

	//float f;
	//double d;
	//long double ld;

	//cout << sizeof(f) << endl;
	//cout << numeric_limits<float>::lowest() << endl;
	//cout << sizeof(d) << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << sizeof(ld) << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	//cout << 3.14 << endl;
	//cout << 3.14e-1 << endl; //3.14^10-1
	//cout << 3.14e-2 << endl; //3.14^10-2
	//cout << 3.14e1 << endl; //3.14^10+1
	//cout << 3.14e2 << endl; //3.14^10+2

	//cout << std::setprecision(16); // 16자리까지 출력
	//cout << 1.0 / 3.0 << endl;


	//무한대인지, 숫자인지 확인
	//double zero = 0.0;
	//double posinf = 5.0 / zero; //무한대
	//double neginf = -5.0 / zero; // 무한대
	//double nan = zero / zero;

	//cout << posinf << ' ' << std::isinf(posinf) << endl; //무한대면1 아니면0
	//cout << neginf << ' ' << std::isinf(neginf) << endl;
	//cout << nan << ' ' << std::isnan(nan) << endl;
	//cout << 1.0 << ' ' << std::isnan(1.0) << endl;


	//boolean 자료형 : true 1, false 0

	//bool isTrue = true; //copy
	//bool isFalse(false); //direct
	//bool b{ true }; //uniform

	////cout << std::boolalpha; //1과 0대신에 true, false로 출력
	////cout << isTrue << ' ' << isFalse << ' ' << b << endl;

	////cout << !isTrue << ' ' << !isFalse << ' ' << !b << endl; //! == not

	//cout << (isTrue && isFalse) << endl; // 양쪽다 true일때 true 출력
	//cout << (isTrue || isFalse) << endl; // 하나만 true면 true 출력


	//char 자료형

	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char c1, c2;
	//cin >> c1 >> c2;

	//cout << static_cast<int>(c1) << ' ' << static_cast<int>(c2) << endl;

	//char c1;

	//cout << sizeof(c1) << endl;
	//cout << (int)std::numeric_limits<char>::max() << endl;
	//cout << (int)std::numeric_limits<char>::lowest() << endl;


	//literal constats 리터럴 상수 : 명확하게 표시

	//float pi = 3.14f;
	//int i = 12345u; //unsigned int 형
	//long l = 123L; // long형

	//10진수 decimal: 0 1 2 3 4 5 6 7 8 9 10
	//8진수 octal   : 0 1 2 3 4 5 6 7 10 11 12 13
	//16진수 hexa   : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	//int x1 = 12; //10진수
	//int x2 = 012; //8진수
	//int x3 = 0x12; //16진수
	//int x4 = 0b1101'0001'0011; //2진수 //컴파일러는 ' 무시함, '으로 구분하면 읽기 편함

	//cout << x1 << ' ' << x2 << ' ' << x3 << endl;
	//cout << x4 << endl;


	//symbloic constants

	//const double PI(3.141592); //컴파일때 값이 정해짐
	//constexpr double pi(3.141592); //컴파일때 값이 정해지는 상수를 더 명확하게 표현
	//// 런타임때 값이 정해지는 상수랑 구분하기 위한 표현

	//int number;
	//cin >> number;

	//const int cn(number); //런타임때 값이 정해짐

	//cpp에서는 #define MAX 100 같은 매크로를 사용하지말자.. 이는 c의 습관임

	//디버깅이 힘들기 때문이다

	//const int price_per_item = 30;
	//int num_item = 15;

	//int price = num_item * price_per_item; //매크로 대신에 상수를 사용

	//cout << constants::pi << endl; //이렇게 상수들을 헤더파일에 모아두고 사용
	//cout << constants::gravity << endl;
}