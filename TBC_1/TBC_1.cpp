/* 홍정모의 따라하며 배우는 C++ 1장 */
#include <iostream>
#include "calculator.h"
//#include <algorithm>
using namespace std;

//#define MAX 1024

//int calculator(int a, int b, char c); // 계산기함수 선언, 컴파일러에게 함수가 있음을 미리 알림
//리턴값이 없다면 void로 선언

//int calculator(int a, int b, char c) // 계산기함수 정의
//{
//	int calc;
//
//	if (c == '+')
//	{
//		calc = a + b;
//	}
//		
//	else if (c == '-')
//	{
//		calc = a - b;
//	}
//
//	else if (c == '*')
//	{
//		calc = a * b;
//	}
//
//	else if (c == '/')
//	{
//		calc = a / b;
//	}
//
//	return calc;
//}

// 같은 함수명이나 변수명을 반드시 사용해야할때는 하나의 함수를 namespace안에 넣어서 사용
//namespace mySpace 
//{
//	//namespace안에 namespace도 사용가능
//	namespace innerSpace
//	{
//		int calc(int a, int b)
//		{
//			return a - b;
//		}
//	}
//	int calc(int a, int b)
//	{
//		return a + b;
//	}
//}
//int calc(int a, int b)
//{
//	return a * b;
//}

int main()
{

//전처리기 -> OS가 리눅스인지 윈도우인지 확인,, 그래픽카드 사양 등 프로그램이 시작되기전에 확인
//MAX가 정의되어있으면
//#ifdef MAX 
//	cout << MAX << endl;
//#endif
//	//MAX가 정의되어있지않으면
//#ifndef MAX
//	cout << -1024 << endl;
//#endif

	//소스코드 - 컴파일 -> 오브젝트파일
	//오브젝트파일 - 링커 -> 실행파일
	//디버그 : 오류를 찾아서 고친다

	//주석을 통해 프로그램의 설명을 달 수도 있다.

	//int x = 5; // 정수형을 담을수 있는 x 라는 변수를 선언하고 x에 5를 대입
	//int y = x + 5;

	//cout << "x와 y의 합은 " << x + y << "입니다" << endl;

	//변수 : 주소의 다른 이름이라고 생각

	//int x0 = 1;
	//cout << &x0 << endl; // 변수 x0의 주소를 출력

	//cout << calculator(10, 2, '+') << endl;
	//cout << calculator(10, 2, '-') << endl;
	//cout << calculator(10, 2, '*') << endl;
	//cout << calculator(10, 2, '/') << endl;

	//변수를 선언할때 예약어는 사용하면 안됨, 숫자로 시작하면 안됨
	//int n_banana;
	//int nBanana;
	//int _banana;
	//변수를 선언할때는 하나의 규칙을 유지하는것이 좋다
	//그러나 결국 변수 선언 방식은 내가 들어가는 그룹에 맞춰야한다. 

	/* local scope*/
	
	//{} 중괄호 안에 선언된 변수는 중괄호 밖을 벗어나서는 사용할수없다
	
	//지역변수는 영역을 벗어나면 사용할수없음
	//지역변수가 차지하고 있던 메모리는 지역변수가 영역 밖으로 벗어날때 
	//스택메모리에 반납됨. 반납된 메모리는 다음 지역변수가 사용할수있도록 대기

	//int x = 2; // x is a variable, 2 is a literal

	//int y = (x > 0) ? 1 : 2; // 삼항연산자 : 괄호안의 값이 참이면 1, 거짓이면 2
	
	// 이렇게 하드코딩을 할때 줄맞춤을 함으로써 한눈에 보기 좋음
	//int x					= 10;
	//int a_values			= 5;
	//int banana_price		= 10;
	//char first_alphabet	= 'a';
	
	//cout << mySpace::calc(3, 4) << endl;
	//cout << mySpace::innerSpace::calc(3, 4) << endl;
	//cout << calc(3,4) << endl;

	//cout << std::min(50, 2) << endl;

}

