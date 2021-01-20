/* 홍정모의 따라하며 배우는 C++ 5장 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <random>
using namespace std;

//enum class Week {
//	SUN, MON, TUE, WED, THU, FRI, SAT
//};
//
//void printWeek(Week week) {
//	switch (static_cast<int>(week))
//	{
//	case 0:
//		cout << "일요일입니다" << endl;
//		break;
//	case 1:
//		cout << "월요일입니다" << endl;
//		break;
//	case 2:
//		cout << "화요일입니다" << endl;
//		break;
//	case 3:
//		cout << "수요일입니다" << endl;
//		break;
//	case 4:
//		cout << "목요일입니다" << endl;
//		break;
//	case 5:
//		cout << "금요일입니다" << endl;
//		break;
//	case 6:
//		cout << "토요일입니다" << endl;
//		break;
//	}
//	default:
//		//...
//		break;
//}

//int getInteger()
//{
//	while (true)
//	{
//		int n;
//		cout << "정수를 입력하세요 : ";
//		cin >> n;
//		cin.ignore(32767, '\n');
//		if (cin.fail()) //입력받은게 실패했다면
//		{
//			cin.clear(); //입력 초기화
//			cout << "정수가 아닙니다" << endl;
//		}
//		else
//			return n;
//	}
//}
//
//char getOperator()
//{
//	while (true) //연산자 제대로 입력하지 않는 문제는 반복문안에서 제대로 입력받으면 끝나는것으로 하면 좋다
//	{
//		char c;
//		cout << "연산자를 입력하세요(+,-,*,/) : ";
//		cin >> c;
//		cin.ignore(32767, '\n');
//
//		if (c == '+' || c == '-' || c == '*' || c == '/')
//			return c;
//		else
//			cout << "연산자를 제대로 입력하지 않으셨습니다. 다시 입력하세요" << endl;
//	}
//}
//
//void print(int n01, char op, int n02)
//{
//	switch (op)
//	{
//	case '+':
//		cout << "결과값은 " << n01 + n02 << endl;
//		break;
//	case '-':
//		cout << "결과값은 " << n01 - n02 << endl;
//		break;
//	case '*':
//		cout << "결과값은 " << n01 * n02 << endl;
//		break;
//	case '/':
//		cout << "결과값은 " << n01 / n02 << endl;
//		break;
//	default:
//		break;
//	}
//}

int main()
{
	// 흐름제어

	//exit(0); // return 0; 보다 좀 더 긴급하게 종료됨을 의미.. 급하게 끝남을 의미

	//if

	//switch-case

	//printWeek(Week::SUN);

	//goto.. 쓰지말자 
	
	//int x;
//gt01: //label
	//cout << "enter integer : ";
	//cin >> x;
	//
	//if (x < 10)
	//	goto gt01;
	//cout << sqrt(x) << endl;

	//while
	//int x01 = 0;
	//while (x01 < 10) // parameter가 true일 동안 while문이 실행
	//{
	//	cout << "안녕하세요" << endl;
	//	x01++;
	//	// parameter에 조건을 설정을 안해서 무한루프에 빠질때는 if문으로 break를 만들면됨
	//}

	/*int outer = 1;
	while (outer <= 5)
	{
		int inner = 1;
		while (inner <= outer)
		{
			cout << inner++ << " ";
		}
		cout << endl;
		outer++;
	}*/

	//do-while //처음 한번은 무조건 실행하고 조건에 따라 샐행여부를 결정
	//do-while도 자주 쓰지는 않음ㄴ
	/*int x02 = 1;
	do
	{
		cout << "하이" << endl;
		x02++;
	} while (x02 < 1);*/

	//for
	//for (int i01 = 1; i01 <= 10; i01++)
	//{
	//	cout << i01 << endl;
	//}

	//break 반복문탈출
	//continue

	//for (int i03 = 0; i03 < 10; i03++)
	//{
	//	if (i03 % 2 == 0)continue; //조건문 만족하면 건너뛰고 다음 반복문조건으로 넘어감

	//	cout << i03 << endl; //1,3,5,7,9 출력
	//}

	//random number

	//c++11에서부터 나온 랜덤라이브러리
	//random_device rd;
	//mt19937 rm(rd()); //seed생성, seed는 랜덤으로 생성되는 rd로 계속 변화시킴
	//uniform_int_distribution<> lotto(1, 45);

	//for (int i = 0; i < 6; i++)
	//{
	//	cout << lotto(rm) << endl;
	//}

	//static
	//for (int i = 0; i < 10; i++)
	//{
	//	static int x = 1;//정적변수는 범위를 벗어나도 소멸되지않음
	//	int y = 1;//범위를 벗어나면 소멸되므로 y는 계속 1이됨
	//	cout << x++ << ' '<< y++ << endl;
	//}

	//cin 더 잘쓰기
	//cin.fail(); 
	//cin.clear();
	//cin.ignore(32767, '\n');

	//print(getInteger(), getOperator(), getInteger());

}