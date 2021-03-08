/* 홍정모의 따라하며 배우는 C++ 8장 */
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

// 데이터 묶을때는 struct, 기능을 넣을때는 class
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
////접근지정자
//private: // 막는거.. default값임
//	//private으로 해놔야지 변수명이 바뀌어도 class내에서 해결이 가능함
//	int	m_month;
//	int m_day;
//	int m_year;
//
//public: // class안에 있는 변수들을 밖에서 접근하게 해줄지
//	void setDate(const int& month_input, const int& day_input, const int& year_input)
//	{
//		m_month = month_input;
//		m_day = day_input;
//		m_year = year_input;
//	}
//
//	// 메인함수에서 변수에 접근하는건 변수가 private로 감싸져있게 불가능하므로
//	// get함수를 만들어서 return 값을 통해 접근하게 해준다
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
//	//생성자 따로 생성안하면 default 생성자가 사용됨
//	Fraction(const int& in_num, const int& in_den = 1) //생성자
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
//	// 바로 초기화랑 생성자에서 초기화 우선순위는 생성자가 높다
//	int		m_i = 100;
//	double	m_d = 31.4;
//	char	m_c = 'b';
//	int		m_arr[5] = { 2,3,4,5,6 };
//	B		m_b = 1024;
//
//public:
//	Something()
//		//uniform 방식을 사용하면 형변환이 안됨.. 더 엄격함
//		: m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_arr{ 1, 2, 3, 4, 5 }, m_b{ m_i - 1 } //멤버초기화
//	{
//		//여기에도 초기화하면 이 초기화값이 제일 우선순위가 높다
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
//	// 위임 생성자
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
//	int* m_arr = nullptr; //vector는 내부에 소멸자가 구현되어있음
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
//	//무한루프에 빠져서 메모리 누수가 생길때 이를 소멸자를 통해 해결
//	~IntArray()
//	{
//		if(m_arr != nullptr) //좀 더 안전하게 코딩
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
//		cout << this << endl; // 자기자신
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
//	static int getValue() // static은 this 포인터 사용할수없음
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

//class B; // 전방선언 전방선언을 통해 일단 class B가 있다고 알림
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
//void doSomething(A& a, B& b) // friend를 이용해 private에 접근가능
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

//클래스 안에 포함된 자료형

//class Fruit
//{
//public:
//// 특정 클래스에서만 사용되는 데이터 타입일때는 class 안에서 정의 가능
//// 대신에 조금 더 엄격함
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


//실행시간 측정하기
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

	//실제 메모리를 차지하게 해주는 instanciation
	//변수 ff는 class의 instance
	//Friend ff{ "KIM", "SeongNam", 27, 176 }; 
	//ff.print();

	//이런식으로 class에 대한 vector 선언 가능
	//vector<Friend> vec;
	//vec.resize(2);

	//출력
	//for (auto& element : vec)
	//	element.print();

	//캡슐화, 접근지정자, 접근함수

	//Date today;
	//today.setDate(2, 5, 2021);
	//cout << today.getMonth() << ' ' << today.getDay() << ' ' << today.getYear() << endl;

	//Date copy;
	//copy.copyFrom(today);

	//생성자

	//매개변수가 하나도 없는 생성자 사용할때는 괄호 없어야함
	//Fraction frac;
	//uniform 방식이 조금 더 엄격함
	//Fraction frac2{ 1,3 };
	//초기화하지않고 frac.print();을 하면 쓰레기값이 나옴
	//생성자를 통해 초기화하면됨
	//frac.print();
	//frac2.print();

	//Second가 First의 멤버로 들어가있으므로 Second 생성자가 먼저 출력
	//First fir;

	//Something som;

	//som.print();

	//위엄 생성자
	//생성자가 다른 생성자를 사용하는것

	//Student st1{ 0,"KIM" };
	//st1.print();

	//Student st2{ "HWANG" };
	//st2.print();

	//소멸자

	//소멸자는 instance가 메모리에서 해제될때 내부에서
	//자동으로 호출됨

	//동적할당으로 만들어진 경우에는 영역을 벗어나도
	//자동으로 메모리가 해제되지 않기 때문에 delete로
	//메모리 해제할때 소멸자가 호출됨

	//소멸자를 직접 호출하는것은 권장하지않음

	// 생성자1 생성자2 소멸자2 소멸자1
	//Sample s1{ 0 };
	//Sample s2{ 1 };

	// 생성자1 생성자2 소멸자1 소멸자2
	//Sample* s3 = new Sample{ 0 };
	//Sample s4{ 1 };
	//delete s3;

	//메모리 누수문제는 소멸자에 delete를 작성해서 해결
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
	// 자료형을 Calc&로 하고 자기자신을 리턴하면 이러한 방식도 가능함
	// 연쇄호출이라 부름, c++스타일에는 아직은 맞지않음

	// class를 정의할떄는 헤더파일에 만드는게 좋음


	// const는 변수를 상수로 만들때 사용

	//Something something;
	//something.getValue();

	//const Something something2;
	//something2.getValue();

	//정적멤버변수
	//cout << generateID() << endl;
	//cout << generateID() << endl;
	//cout << generateID() << endl;
	//cout << generateID() << endl;

	//Something st1;
	//Something st2;

	//st1.m_value = 2;

	//cout << &st1.m_value << " " << st1.m_value << endl;
	//cout << &st2.m_value << " " << st2.m_value << endl;

	//정적멤버함수

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


	// 실행 시간 측정하기
	// 배포할때는 debug모드보다 release모드
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