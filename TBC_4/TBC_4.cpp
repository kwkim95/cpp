/* ȫ������ �����ϸ� ���� C++ 4�� */
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

//int a02 = 123; //���������� �Ҽ��ִ�

//void do_something()
//{
//	//�̷��� �����ϸ� ������ �޸𸮿� �Ҵ�Ǿ ����� ������ �ʱ�ȭ��
//	int a03 = 1; 
//	++a03;
//	cout << a03 << endl;
//}
//
//void do_something2()
//{
//	//������������, ����ɶ� �޸𸮿� �Ҵ�ǰ� ����� ���͵� �ʱ�ȭ �������� 
//	static int a04 = 1; 
//	++a04;
//	cout << a04 << endl;
//}

// forward declaration
// �ܺ� test.cpp�� ������ �Լ��� ���� #include "test.cpp"; ��ſ�
// ���� ������ ���� ����Ҽ������� �����Ϸ��� ��ü�� ��򰡿� �ִٴ°��� �˰Եȴ� 
// extern void test();�� ����.. extern�� ��������
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


// ������
//enum color
//{
//	// �ʱ�ȭ ���ϸ� 0���� ����, �ʱ�ȭ�ϸ� �ʱ�ȭ�ϴ� ������ �ϳ��� �ö�, ������ �ʱ�ȭ�� ����
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
//	// ����ü �ȿ� �Լ��� ������ ����
//	void printPerson()
//	{
//		cout << height << " " << weight << " " << age << " " << name << endl;
//	}
//};
//
//struct Employee // 2 + (2) + 4 + 8 == 14�� �ƴ϶� 16�� �� -> �̸� padding�̶� ��
//{
//	short	id;		// 2bytes -> ��ġ�� �Ҷ� 2����Ʈ�� �� ��ġ�� �ȵǼ� (2)����Ʈ �߰���
//	int		age;	// 4bytes
//	double	wage;	// 8bytes;
//};

int main()
{
	
	// scope

	//���� ���α׷��ֿ����� ������ ��ƴ� ������ �ִ��� ���Ϸ��� ��
	//���� ������ �����ؼ� ������ ª�� ª�� ��ư��� ����
	//��ü���� ���α׷����� �⺻ ö��
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
	//	int apple2 = 1; // ���⼭ ������ apple2�� ��Ƴ����� �ִ� ������ {} ��
	//	cout << apple2 << endl; //1
	//}
	//cout << apple2 << endl; //5
	
	/*a01::a;
	a01::do_something();

	a02::a;
	a02::do_something();*/

	//���������� ������ �����������

	//cout << a02 << endl; //123
	//
	//int a02 = 1;

	//cout << ::a02 << endl; //���������ڸ� �̿��ؼ� 123 ���
	//cout << a02 << endl; //1

	//do_something(); //2
	//do_something(); //2

	//do_something2(); //2
	//do_something2(); //3
	//do_something2(); //4

	// ��°��� ������ �޸� �ּҴ� �ٸ�..
	// �̸� �����ϱ� ���ؼ��� ������� ���� �ϰ� ���� cpp���� ����
	//test(); 
	//cout << "pi" << constants::pi << " " << &constants::pi << endl;

	//// ��°��� ������ �޸� �ּҵ� ����
	//test02();
	//cout << "pi02 " << constants02::pi02 << " " << &constants02::pi02 << endl;

	// ��ü���� ���α׷����� �Ҷ��� ���� �̸��� ������ ������ �����ϴ� ��찡 ������
	// �̸� namespace�� class�� �����Ѵ�..
	// ������ ���� �̸��� ������ ����ϴ°��� �����ϱ⵵ �Ѵ�.. �����ε�, �������̵��� ���� � ������ ��������� ����
	// �̷��� � ������ ��������� ��ȣ�� �ϴ°��� ��ȣ���̶� �ϸ� �̴� using�� ���� �ذ�

	/*{
		using namespace f01;
		cout << a05 << endl;
	}

	{
		using namespace f02;
		cout << a05 << endl;
	}*/
	
	// auto Ű����
	//auto a06 = 123; // ������ � �ڷ������� ���ϰ���
	 
	// auto�� �Ķ���Ϳ� ����Ҽ�����

	//string s01 = "My name is Kim Keon Woo";
	//char s02[] = "My age is 27 years old"; // c��Ÿ��

	//cout << s01 << endl;
	//cout << s02 << endl;
	//string name;
	//int age;

	//cout << "you age ? ";
	//cin >> age;

	////ignore�� ���� �Է��� ����� ����������
	//cin.ignore(32767, '\n'); // \n�� ���������� 32767���� ���ڸ� �����ض�
	//cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

	//cout << "your name ? ";
	//getline(cin, name); // string�� ���, ����ġ�������� ������ �� �Է¹���������
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
	//color my_color = static_cast<color>(0); // �̷��� ����ȯ�� ����

	//cout << paint01 << " " << paint02 << " " << paint03 << " " << paint04 << endl;
	//cout << my_color << endl;

	//color c01 = COLOR_BLACK; //0
	//fruit f01 = apple; //0

	//// �ٸ� ������������ �Ѵ� ���� 0�̱⿡ ���ٰ� ����� ��
	//// �̷��� �������� ������ �����Ѱ� enum class
	//if (c01 == f01)
	//	cout << "color is fruit" << endl;

	//// �̸� �ذ��ϱ� ���ؼ��� ���� ������ �ؾ��ϰ� �̴� enum class�� ���� ������ �Ҽ�����
	//color02 c02 = color02::COLOR_BLACK;
	//fruit02 f02 = fruit02::apple;

	//if (c02 == f02) // ������ �߻�
	//	cout << "color is fruit" << endl;
	
	
	//�ڷ������� ���� �ٿ��ֱ�
	//�����ͺ��̽��� alias�� ����, ������� ���Ǹ� ���� ���

	//typedef double distance_t; // �޸�� �ּ��� ���

	//double	   my_distance;
	//distance_t home2work;
	//distance_t home2school;

	//����ü
	
	//Person me{ 176, 92, 27, "keonwoo" }; //uniform �ʱ�ȭ������� �ʱ�ȭ
	//Person mom;
	//Person sister;
	//
	//me.printPerson();

	//cout << sizeof(Employee) << endl; //16�� ���

}