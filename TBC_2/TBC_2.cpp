/* ȫ������ �����ϸ� ���� C++ 2�� */
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
	//float fValue = 3.141592f; // 4����Ʈ
	//double dValue = 3.141592; // 8����Ʈ

	//auto aValue = 3.141592; // �����Ϸ��� �ڷ����� ������ �ľ�

	//cout << (bValue ? 1 : 0) << endl;
	//cout << cValue << ' ' << (int)cValue << endl;
	//cout << fValue << endl;
	//cout << dValue << endl;
	//cout << aValue << ' ' << sizeof(aValue) << endl;

	//���� �ʱ�ȭ ���
	//int a = 123; // copy initalization
	//int b(123); // direct initialization
	//int c{ 123 }; // uniform initialization

	//int k,l,m = 123; // �̷��� �ѹ��� �ʱ�ȭ �Ҽ��� ������ ��ȣ������ ���� �ϳ��� �ʱ�ȭ �ϴ� ������ ������

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

	//s = 32767; //short������ ǥ���Ҽ� �ִ� �ִ밪
	//s = s + 1;

	//cout << s << endl; //����� -32768 -> overflow
	//overflow�� �ڷ����� �������� ���� ū ���ڿ��� +�� �Ǹ� ���� ���� ���ڷ�
	//���� ���� ���ڿ��� -�� �Ǹ� ���� ū ���ڷ� ������� �����°��� ���Ѵ�

	//unsigned int i = -1;
	//cout << i << endl; //overflow �߻� 


	//���� �ʺ� ����

	//std::int16_t i(5); // 2����Ʈũ���� ��ȣ�ִ� ����
	//std::uint16_t u(5); // 2����Ʈ ũ���� ��ȣ���� ����

	//cout << i << endl;

	//std::int_fast8_t fi(5); // 1����Ʈ ������ ���� ���� ����
	//std::int_least64_t fl(5); // ��� 8����Ʈ�� ����


	//void�� : void�� �޸𸮸� �������� ����

	//void mv; //void�� �ڷ������� ���� x

	//int i = 123;
	//float f = 123.456f;

	//void *mv; //������

	//mv = (void*)&i; //i�� �ּ�
	//mv = (void*)&f; //f�� �ּ�

	//cout << mv << endl;


	//�ε��Ҽ�����

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

	//cout << std::setprecision(16); // 16�ڸ����� ���
	//cout << 1.0 / 3.0 << endl;


	//���Ѵ�����, �������� Ȯ��
	//double zero = 0.0;
	//double posinf = 5.0 / zero; //���Ѵ�
	//double neginf = -5.0 / zero; // ���Ѵ�
	//double nan = zero / zero;

	//cout << posinf << ' ' << std::isinf(posinf) << endl; //���Ѵ��1 �ƴϸ�0
	//cout << neginf << ' ' << std::isinf(neginf) << endl;
	//cout << nan << ' ' << std::isnan(nan) << endl;
	//cout << 1.0 << ' ' << std::isnan(1.0) << endl;


	//boolean �ڷ��� : true 1, false 0

	//bool isTrue = true; //copy
	//bool isFalse(false); //direct
	//bool b{ true }; //uniform

	////cout << std::boolalpha; //1�� 0��ſ� true, false�� ���
	////cout << isTrue << ' ' << isFalse << ' ' << b << endl;

	////cout << !isTrue << ' ' << !isFalse << ' ' << !b << endl; //! == not

	//cout << (isTrue && isFalse) << endl; // ���ʴ� true�϶� true ���
	//cout << (isTrue || isFalse) << endl; // �ϳ��� true�� true ���


	//char �ڷ���

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


	//literal constats ���ͷ� ��� : ��Ȯ�ϰ� ǥ��

	//float pi = 3.14f;
	//int i = 12345u; //unsigned int ��
	//long l = 123L; // long��

	//10���� decimal: 0 1 2 3 4 5 6 7 8 9 10
	//8���� octal   : 0 1 2 3 4 5 6 7 10 11 12 13
	//16���� hexa   : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	//int x1 = 12; //10����
	//int x2 = 012; //8����
	//int x3 = 0x12; //16����
	//int x4 = 0b1101'0001'0011; //2���� //�����Ϸ��� ' ������, '���� �����ϸ� �б� ����

	//cout << x1 << ' ' << x2 << ' ' << x3 << endl;
	//cout << x4 << endl;


	//symbloic constants

	//const double PI(3.141592); //�����϶� ���� ������
	//constexpr double pi(3.141592); //�����϶� ���� �������� ����� �� ��Ȯ�ϰ� ǥ��
	//// ��Ÿ�Ӷ� ���� �������� ����� �����ϱ� ���� ǥ��

	//int number;
	//cin >> number;

	//const int cn(number); //��Ÿ�Ӷ� ���� ������

	//cpp������ #define MAX 100 ���� ��ũ�θ� �����������.. �̴� c�� ������

	//������� ����� �����̴�

	//const int price_per_item = 30;
	//int num_item = 15;

	//int price = num_item * price_per_item; //��ũ�� ��ſ� ����� ���

	//cout << constants::pi << endl; //�̷��� ������� ������Ͽ� ��Ƶΰ� ���
	//cout << constants::gravity << endl;
}