/* ȫ������ �����ϸ� ���� C++ 1�� */
#include <iostream>
#include "calculator.h"
//#include <algorithm>
using namespace std;

//#define MAX 1024

//int calculator(int a, int b, char c); // �����Լ� ����, �����Ϸ����� �Լ��� ������ �̸� �˸�
//���ϰ��� ���ٸ� void�� ����

//int calculator(int a, int b, char c) // �����Լ� ����
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

// ���� �Լ����̳� �������� �ݵ�� ����ؾ��Ҷ��� �ϳ��� �Լ��� namespace�ȿ� �־ ���
//namespace mySpace 
//{
//	//namespace�ȿ� namespace�� ��밡��
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

//��ó���� -> OS�� ���������� ���������� Ȯ��,, �׷���ī�� ��� �� ���α׷��� ���۵Ǳ����� Ȯ��
//MAX�� ���ǵǾ�������
//#ifdef MAX 
//	cout << MAX << endl;
//#endif
//	//MAX�� ���ǵǾ�����������
//#ifndef MAX
//	cout << -1024 << endl;
//#endif

	//�ҽ��ڵ� - ������ -> ������Ʈ����
	//������Ʈ���� - ��Ŀ -> ��������
	//����� : ������ ã�Ƽ� ��ģ��

	//�ּ��� ���� ���α׷��� ������ �� ���� �ִ�.

	//int x = 5; // �������� ������ �ִ� x ��� ������ �����ϰ� x�� 5�� ����
	//int y = x + 5;

	//cout << "x�� y�� ���� " << x + y << "�Դϴ�" << endl;

	//���� : �ּ��� �ٸ� �̸��̶�� ����

	//int x0 = 1;
	//cout << &x0 << endl; // ���� x0�� �ּҸ� ���

	//cout << calculator(10, 2, '+') << endl;
	//cout << calculator(10, 2, '-') << endl;
	//cout << calculator(10, 2, '*') << endl;
	//cout << calculator(10, 2, '/') << endl;

	//������ �����Ҷ� ������ ����ϸ� �ȵ�, ���ڷ� �����ϸ� �ȵ�
	//int n_banana;
	//int nBanana;
	//int _banana;
	//������ �����Ҷ��� �ϳ��� ��Ģ�� �����ϴ°��� ����
	//�׷��� �ᱹ ���� ���� ����� ���� ���� �׷쿡 ������Ѵ�. 

	/* local scope*/
	
	//{} �߰�ȣ �ȿ� ����� ������ �߰�ȣ ���� ������� ����Ҽ�����
	
	//���������� ������ ����� ����Ҽ�����
	//���������� �����ϰ� �ִ� �޸𸮴� ���������� ���� ������ ����� 
	//���ø޸𸮿� �ݳ���. �ݳ��� �޸𸮴� ���� ���������� ����Ҽ��ֵ��� ���

	//int x = 2; // x is a variable, 2 is a literal

	//int y = (x > 0) ? 1 : 2; // ���׿����� : ��ȣ���� ���� ���̸� 1, �����̸� 2
	
	// �̷��� �ϵ��ڵ��� �Ҷ� �ٸ����� �����ν� �Ѵ��� ���� ����
	//int x					= 10;
	//int a_values			= 5;
	//int banana_price		= 10;
	//char first_alphabet	= 'a';
	
	//cout << mySpace::calc(3, 4) << endl;
	//cout << mySpace::innerSpace::calc(3, 4) << endl;
	//cout << calc(3,4) << endl;

	//cout << std::min(50, 2) << endl;

}

