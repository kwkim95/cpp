/* ȫ������ �����ϸ� ���� C++ 5�� */
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
//		cout << "�Ͽ����Դϴ�" << endl;
//		break;
//	case 1:
//		cout << "�������Դϴ�" << endl;
//		break;
//	case 2:
//		cout << "ȭ�����Դϴ�" << endl;
//		break;
//	case 3:
//		cout << "�������Դϴ�" << endl;
//		break;
//	case 4:
//		cout << "������Դϴ�" << endl;
//		break;
//	case 5:
//		cout << "�ݿ����Դϴ�" << endl;
//		break;
//	case 6:
//		cout << "������Դϴ�" << endl;
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
//		cout << "������ �Է��ϼ��� : ";
//		cin >> n;
//		cin.ignore(32767, '\n');
//		if (cin.fail()) //�Է¹����� �����ߴٸ�
//		{
//			cin.clear(); //�Է� �ʱ�ȭ
//			cout << "������ �ƴմϴ�" << endl;
//		}
//		else
//			return n;
//	}
//}
//
//char getOperator()
//{
//	while (true) //������ ����� �Է����� �ʴ� ������ �ݺ����ȿ��� ����� �Է¹����� �����°����� �ϸ� ����
//	{
//		char c;
//		cout << "�����ڸ� �Է��ϼ���(+,-,*,/) : ";
//		cin >> c;
//		cin.ignore(32767, '\n');
//
//		if (c == '+' || c == '-' || c == '*' || c == '/')
//			return c;
//		else
//			cout << "�����ڸ� ����� �Է����� �����̽��ϴ�. �ٽ� �Է��ϼ���" << endl;
//	}
//}
//
//void print(int n01, char op, int n02)
//{
//	switch (op)
//	{
//	case '+':
//		cout << "������� " << n01 + n02 << endl;
//		break;
//	case '-':
//		cout << "������� " << n01 - n02 << endl;
//		break;
//	case '*':
//		cout << "������� " << n01 * n02 << endl;
//		break;
//	case '/':
//		cout << "������� " << n01 / n02 << endl;
//		break;
//	default:
//		break;
//	}
//}

int main()
{
	// �帧����

	//exit(0); // return 0; ���� �� �� ����ϰ� ������� �ǹ�.. ���ϰ� ������ �ǹ�

	//if

	//switch-case

	//printWeek(Week::SUN);

	//goto.. �������� 
	
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
	//while (x01 < 10) // parameter�� true�� ���� while���� ����
	//{
	//	cout << "�ȳ��ϼ���" << endl;
	//	x01++;
	//	// parameter�� ������ ������ ���ؼ� ���ѷ����� �������� if������ break�� ������
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

	//do-while //ó�� �ѹ��� ������ �����ϰ� ���ǿ� ���� ���࿩�θ� ����
	//do-while�� ���� ������ ������
	/*int x02 = 1;
	do
	{
		cout << "����" << endl;
		x02++;
	} while (x02 < 1);*/

	//for
	//for (int i01 = 1; i01 <= 10; i01++)
	//{
	//	cout << i01 << endl;
	//}

	//break �ݺ���Ż��
	//continue

	//for (int i03 = 0; i03 < 10; i03++)
	//{
	//	if (i03 % 2 == 0)continue; //���ǹ� �����ϸ� �ǳʶٰ� ���� �ݺ����������� �Ѿ

	//	cout << i03 << endl; //1,3,5,7,9 ���
	//}

	//random number

	//c++11�������� ���� �������̺귯��
	//random_device rd;
	//mt19937 rm(rd()); //seed����, seed�� �������� �����Ǵ� rd�� ��� ��ȭ��Ŵ
	//uniform_int_distribution<> lotto(1, 45);

	//for (int i = 0; i < 6; i++)
	//{
	//	cout << lotto(rm) << endl;
	//}

	//static
	//for (int i = 0; i < 10; i++)
	//{
	//	static int x = 1;//���������� ������ ����� �Ҹ��������
	//	int y = 1;//������ ����� �Ҹ�ǹǷ� y�� ��� 1�̵�
	//	cout << x++ << ' '<< y++ << endl;
	//}

	//cin �� �߾���
	//cin.fail(); 
	//cin.clear();
	//cin.ignore(32767, '\n');

	//print(getInteger(), getOperator(), getInteger());

}