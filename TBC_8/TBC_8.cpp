/* ȫ������ �����ϸ� ���� C++ 8�� */
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <random>
#include <chrono>
#include "Calc.h"
using namespace std;

// friend : name, address, age, height, weight

// ������ �������� struct, ����� �������� class
//class Friend //public, private, protected
//{
//public:
//	string	m_name;
//	string	m_address;
//	int		m_age;
//	double	m_height;
//
//	void print()
//	{
//		cout << m_name << ' ' << m_address << ' ' << m_age << ' ' << m_height << endl;
//	}
//};

//class Date
//{
////����������
//private: // ���°�.. default����
//	//private���� �س����� �������� �ٲ� class������ �ذ��� ������
//	int	m_month;
//	int m_day;
//	int m_year;
//
//public: // class�ȿ� �ִ� �������� �ۿ��� �����ϰ� ������
//	void setDate(const int& month_input, const int& day_input, const int& year_input)
//	{
//		m_month = month_input;
//		m_day = day_input;
//		m_year = year_input;
//	}
//
//	// �����Լ����� ������ �����ϴ°� ������ private�� �������ְ� �Ұ����ϹǷ�
//	// get�Լ��� ���� return ���� ���� �����ϰ� ���ش�
//	int getMonth() 
//	{
//		return m_month;
//	}
//	int getDay()
//	{
//		return m_day;
//	}
//	int getYear()
//	{
//		return m_year;
//	}
//	void copyFrom(const Date& cp)
//	{
//		m_month = cp.m_month;
//		m_day = cp.m_day;
//		m_year = cp.m_year;
//	}
//};

//class Fraction
//{
//private:
//	int m_numerator;
//	int m_denominator;
//
//public:
//	//������ ���� �������ϸ� default �����ڰ� ����
//	Fraction(const int& in_num, const int& in_den = 1) //������
//	{
//		m_numerator = in_num;
//		m_denominator = in_den;
//	}
//	void print()
//	{
//		cout << m_numerator << " / " << m_denominator << endl; 
//	}
//};

//class Second
//{
//public:
//	Second()
//	{
//		cout << "class Second constructor()" << endl;
//	}
//};
//
//class First
//{
//	Second sec;
//public:
//	First()
//	{
//		cout << "class First constructor()" << endl;
//	}
//};

//class B
//{
//private:
//	int	m_b;
//public:
//	B(const int& in_m_b)
//		:m_b(in_m_b)
//	{}
//};
//class Something
//{
//private:
//	// �ٷ� �ʱ�ȭ�� �����ڿ��� �ʱ�ȭ �켱������ �����ڰ� ����
//	int		m_i = 100;
//	double	m_d = 31.4;
//	char	m_c = 'b';
//	int		m_arr[5] = { 2,3,4,5,6 };
//	B		m_b = 1024;
//
//public:
//	Something()
//		//uniform ����� ����ϸ� ����ȯ�� �ȵ�.. �� ������
//		: m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_arr{ 1, 2, 3, 4, 5 }, m_b{ m_i - 1 } //����ʱ�ȭ
//	{
//		//���⿡�� �ʱ�ȭ�ϸ� �� �ʱ�ȭ���� ���� �켱������ ����
//		//m_i = 1;
//		//m_d = 3.14;
//		//m_c = 'a';
//	}
//	void print()
//	{
//		cout << m_i << " " << m_d << " " << m_c << endl;
//		for (auto& e : m_arr)
//			cout << e << " ";
//		cout << endl;
//	}
//};

//class Student
//{
//private:
//	int		m_id;
//	string	m_name;
//
//public:
//	// ���� ������
//	Student(const string& name_in)
//		:Student(0, name_in)
//	{}
//	
//	Student(const int& id_in, const string& name_in)
//		:m_id{ id_in }, m_name{ name_in }
//	{}
//	void print()
//	{
//		cout << m_id << " " << m_name << endl;
//	}
//};

//class Sample
//{
//private:
//	int	m_id;
//public:
//	Sample(const int& id_in)
//		:m_id{ id_in }
//	{
//		cout << "Constructor " << m_id << endl;
//	}
//	~Sample()
//	{
//		cout << "Destructor " << m_id << endl;
//	}
//};

//class IntArray
//{
//private:
//	int* m_arr = nullptr; //vector�� ���ο� �Ҹ��ڰ� �����Ǿ�����
//	int	m_length = 0;
//
//public:
//	IntArray(const int& length_in)
//		:m_length{ length_in }
//	{
//		m_arr = new int[m_length];
//
//		cout << "constructor" << endl;
//	}
//	int size()
//	{
//		return m_length;
//	}
//
//	//���ѷ����� ������ �޸� ������ ���涧 �̸� �Ҹ��ڸ� ���� �ذ�
//	~IntArray()
//	{
//		if(m_arr != nullptr) //�� �� �����ϰ� �ڵ�
//			delete[] m_arr;
//	}
//};

//class Simple
//{
//private:
//	int m_id;
//
//public:
//	Simple(int id)
//	{
//		this->setId(id);
//		cout << this << endl; // �ڱ��ڽ�
//	}
//
//	void setId(int id) { m_id = id;	}
//	int getId() { return m_id;}
//};

//class Something
//{
//public:
//	string m_value = "default";
//
//	const string& getValue() const
//	{
//		cout << "const version" << endl;
//		return m_value;
//	}
//	string& getValue()
//	{
//		cout << "non const version" << endl;
//		return m_value;
//	}
//};

//int generateID()
//{
//	static int s_id = 0;
//	return ++s_id;
//}

//class Something
//{
//public:
//	static int m_value;
//	int s_value;
//
//	static int getValue() // static�� this ������ ����Ҽ�����
//	{
//		return m_value;
//	}
//
//	int temp()
//	{
//		return this->s_value + this->m_value;
//	}
//};
//int Something::m_value = 1024;

//class B; // ���漱�� ���漱���� ���� �ϴ� class B�� �ִٰ� �˸�
//
//class A
//{
//private:
//	int m_value = 1;
//
//	friend void doSomething(A& a, B& b);
//};
//
//class B
//{
//private:
//	int m_value = 2;
//
//	friend void doSomething(A& a, B& b);
//};
//void doSomething(A& a, B& b) // friend�� �̿��� private�� ���ٰ���
//{
//	cout << a.m_value << " " << b.m_value << endl;
//}

//class A
//{
//public:
//	int m_value;
//	
//	A(const int& input)
//		: m_value(input)
//	{
//		cout << "constructor" << endl;
//	}
//
//	~A()
//	{
//		cout << "destroyer" << endl;
//	}
//
//	void print()
//	{
//		cout << m_value << endl;
//	}
//};

//class Cents
//{
//private:
//	int m_value;
//public:
//	Cents(int value) {m_value = value;}
//	int getCents() const { return m_value; }
//};
//
//Cents add(const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

//Ŭ���� �ȿ� ���Ե� �ڷ���

//class Fruit
//{
//public:
//// Ư�� Ŭ���������� ���Ǵ� ������ Ÿ���϶��� class �ȿ��� ���� ����
//// ��ſ� ���� �� ������
//	enum class FruitType 
//	{
//		Apple, Banana, Orange
//	};
//private:
//	FruitType m_type;
//public:
//	Fruit(FruitType type)
//		:m_type(type)
//	{}
//	FruitType getType() { return m_type; }
//};


//����ð� �����ϱ�
//class Timer 
//{
//	using clock_t = std::chrono::high_resolution_clock;
//	using second_t = std::chrono::duration<double, std::ratio<1>>;
//	std::chrono::time_point<clock_t> start_time = clock_t::now();
//
//public:
//	void elapsed()
//	{
//		std::chrono::time_point<clock_t> end_time = clock_t::now();
//		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
//	}
//};
int main(int argc, char* argv[])
{
	//OOP

	//���� �޸𸮸� �����ϰ� ���ִ� instanciation
	//���� ff�� class�� instance
	//Friend ff{ "KIM", "SeongNam", 27, 176 }; 
	//ff.print();

	//�̷������� class�� ���� vector ���� ����
	//vector<Friend> vec;
	//vec.resize(2);

	//���
	//for (auto& element : vec)
	//	element.print();

	//ĸ��ȭ, ����������, �����Լ�

	//Date today;
	//today.setDate(2, 5, 2021);
	//cout << today.getMonth() << ' ' << today.getDay() << ' ' << today.getYear() << endl;

	//Date copy;
	//copy.copyFrom(today);

	//������

	//�Ű������� �ϳ��� ���� ������ ����Ҷ��� ��ȣ �������
	//Fraction frac;
	//uniform ����� ���� �� ������
	//Fraction frac2{ 1,3 };
	//�ʱ�ȭ�����ʰ� frac.print();�� �ϸ� �����Ⱚ�� ����
	//�����ڸ� ���� �ʱ�ȭ�ϸ��
	//frac.print();
	//frac2.print();

	//Second�� First�� ����� �������Ƿ� Second �����ڰ� ���� ���
	//First fir;

	//Something som;

	//som.print();

	//���� ������
	//�����ڰ� �ٸ� �����ڸ� ����ϴ°�

	//Student st1{ 0,"KIM" };
	//st1.print();

	//Student st2{ "HWANG" };
	//st2.print();

	//�Ҹ���

	//�Ҹ��ڴ� instance�� �޸𸮿��� �����ɶ� ���ο���
	//�ڵ����� ȣ���

	//�����Ҵ����� ������� ��쿡�� ������ �����
	//�ڵ����� �޸𸮰� �������� �ʱ� ������ delete��
	//�޸� �����Ҷ� �Ҹ��ڰ� ȣ���

	//�Ҹ��ڸ� ���� ȣ���ϴ°��� ������������

	// ������1 ������2 �Ҹ���2 �Ҹ���1
	//Sample s1{ 0 };
	//Sample s2{ 1 };

	// ������1 ������2 �Ҹ���1 �Ҹ���2
	//Sample* s3 = new Sample{ 0 };
	//Sample s4{ 1 };
	//delete s3;

	//�޸� ���������� �Ҹ��ڿ� delete�� �ۼ��ؼ� �ذ�
	//while (true)
	//{
	//	IntArray int_arr(10000);
	//}

	//Simple s1(1), s2(2);
	//s1.setId(2);
	//s2.setId(4);

	//cout << &s1 << ' ' << &s2 << endl;

	//Calc c1(10);
	//c1.add(10).sub(10).mul(10).print(); 
	// �ڷ����� Calc&�� �ϰ� �ڱ��ڽ��� �����ϸ� �̷��� ��ĵ� ������
	// ����ȣ���̶� �θ�, c++��Ÿ�Ͽ��� ������ ��������

	// class�� �����ҋ��� ������Ͽ� ����°� ����


	// const�� ������ ����� ���鶧 ���

	//Something something;
	//something.getValue();

	//const Something something2;
	//something2.getValue();

	//�����������
	//cout << generateID() << endl;
	//cout << generateID() << endl;
	//cout << generateID() << endl;
	//cout << generateID() << endl;

	//Something st1;
	//Something st2;

	//st1.m_value = 2;

	//cout << &st1.m_value << " " << st1.m_value << endl;
	//cout << &st2.m_value << " " << st2.m_value << endl;

	//��������Լ�

	//cout << Something::getValue() << endl;
	//
	//Something s1;
	//cout << s1.getValue() << endl;

	//A a;
	//doSomething(a);

	//A a(1);
	//a.print();

	//cout << add(Cents(6), Cents(8)).getCents() << endl;

	//Fruit apple(Fruit::FruitType::Apple);

	//if (apple.getType() == Fruit::FruitType::Apple)
	//	cout << "Apple" << endl;


	// ���� �ð� �����ϱ�
	// �����Ҷ��� debug��庸�� release���
	//random_device rnd_device;
	//mt19937 mersenne_engine{ rnd_device() };

	//vector<int> vec(1000);
	//for (unsigned int i = 0; i < vec.size(); ++i)
	//	vec[i] = i;
	//std::shuffle(begin(vec), end(vec), mersenne_engine);

	//for (auto& e : vec)
	//	cout << e << " ";
	//cout << endl;
	//
	//Timer timer;

	//std::sort(begin(vec), end(vec));
	//timer.elapsed();

	//for (auto& e : vec)
	//	cout << e << " ";
	//cout << endl;
}