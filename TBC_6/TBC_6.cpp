/* 홍정모의 따라하며 배우는 C++ 6장 */
#include <iostream>
#include <cstring>
#include <limits>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

//struct Rectangle // 8bytes야 하지만 padding때문에 꼭 8bytes가 안나올수도있다
//{
//	int width;
//	int length;
//};

//struct something
//{
//	int a, b, c, d;
//};

//void printArray(int arr[])
//void printArray(int *arr)
//{
//	cout << sizeof(arr) << endl;
//	cout << *arr << endl;
//}

//void dosomething(int* n) // 포인터 통해서 함수뒤에도 변수에 영향을 줌
//{
//	*n = 5;
//	cout << "dosomehting in " << *n << endl;
//
//}
//
//void dosomething2(int& m)// 참조를 사용하면 같은 이름의 메인함수 안의 n에 영향을 줌
//{
//	m = 5;
//	cout << "dosomehting in " << m << endl;
//
//}

//struct Something
//{
//	int v1;
//	float v2;
//};
//struct Other
//{
//	Something st;
//};

// 매개변수를 const와 참조를 통해 사용하면 메인함숭서 매개변수에 숫자나 변수와숫자의 연산이 가능
//void dosomething3(const int& x) 
//{
//	cout << x << endl;
//}

//struct Person {
//	int age;
//	int weight;
//};

//값 변하지 않길 원하면 const
//참조를 사용하면 복사하는 과정이 빨라짐
//void printlength(const array<int, 5>& my_arr)
//{
//	cout << my_arr.size() << endl;1
//}
int main()
{

	//array
	//int score[5];
	//cout << sizeof(score); //4*5 = 20 bytes

	//cout << sizeof(Rectangle) << endl; // 8bytes
	////구조체 배열도 가능
	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl; // 80 bytes

	//int length;
	//cin >> length; //런타임때 a 입력받음
	//int a[length]; //컴파일때 사이즈가 정해져있어야함, 따라서 에러가 발생 

	//int score[] = { 100, 96, 85, 72, 66 };

	//int total_score = 0;
	//int len = sizeof(score) / sizeof(int);

	//for (int i = 0; i < len; i++)
	//{
	//	total_score += score[i];
	//}
	//double avg = static_cast<double>(total_score) / len;

	//cout << total_score << ' ' << avg << endl;

	////selection sort
	//const int length = 5;
	//int array[length] = { 3,5,2,1,4 };
	//
	//int temp;
	//for (int i = 0; i < length - 1; i++)
	//{
	//	for (int j = i + 1; j < length; j++)
	//	{
	//		if (array[i] < array[j])
	//		{
	//			temp = array[i];
	//			array[i] = array[j];
	//			array[j] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < length; i++)
	//{
	//	cout << array[i] << ' ';
	//}

	//정적 다차원 배열
	//int arr[][3] =
	//{
	//	{1, 2, 3},
	//	{4, 5, 6},
	//	{7, 8, 9}
	//};
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j] << ' ';
	//	}
	//	cout << endl;
	//}

	// c언어 스타일 배열 문자열
	// 문자열의 끝에는 끝임을 알려주는 널문자 '\0'가 있다
	//char mystring[] = "string";
	//int len = sizeof(mystring) / sizeof(char);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << mystring[i] << ' ';
	//	cout << (int)mystring[i] << ' ';
	//	cout << endl;
	//}
	//cout << endl;

	//strcat(); //문자열 붙여줌
	//strcmp(); //문자열 비교.. 같으면 0 다르면 -1 리턴

	//포인터

	//int x(5);
	//double d(123.0);
	//// address-of operator (&)
	////cout << x << ' ' << &x << ' ' << (int)&x << endl; 

	//// de-reference operator (*)
	////cout << *(&x) << endl; // 메모리 주소에 뭐가 담겨있는지 출력

	//int *ptr_x;
	//ptr_x = &x;
	//double* ptr_d = &d;
	////cout << ptr_x << ' ' << *ptr_x << endl;

	////포인터를 사용해서 엄청난 크기의 배열을 다 복사하면 발생하는 
	////낭비를 줄이고 배열의 첫 주소와 크기를 통해 낭비를 최대한 줄일수있다 
	////또한 배열의 한 값에 접근하는것을 주소를 통해 편하게 할수있다

	//cout << sizeof(x) << endl; //4
	//cout << sizeof(d) << endl; //8

	//// 32비트에서는 4 4 , 4 4
	//// 64비트에서는 8 8, 8 8
	//cout << sizeof(&x) << ' ' << sizeof(ptr_x) << endl; 
	//cout << sizeof(&d) << ' ' << sizeof(ptr_d) << endl;

	//something ss;
	//something *ptr_s;

	//cout << sizeof(something) << ' ' << sizeof(ptr_s) << endl;  //16 4

	// null pointer

	//double *ptr = NULL;

	//if (ptr != NULL)
	//{
	//	cout << "hi" << endl;
	//}
	//else
	//{
	//	cout << "hello" << endl;
	//}

	//포인터와 정적배열

	//int arr[5] = { 1,3,5,7,9 };

	//cout << arr << endl;
	//cout << &arr << endl;
	//cout << &arr[0] << endl;
	//cout << *arr << endl;

	//cout << sizeof(arr) << endl;
	//int* ptr = arr;
	//cout << sizeof(ptr) << endl; // 4bytes 나오는 이유는 포인터 자체의 크기가 4바이트
	//
	// 4bytes나오는 이유는 파라미터로 int arr[]은 배열이 아니라 포인터로 컴파일러가 인식함
	// 즉 int *arr로 인식
	//printArray(arr); 
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << *(ptr+i) << ' ';
	//}

	//int value = 7;
	//int *ptr = &value;

	// 데이터 타입에 따라 주소간의 크기가 달라짐
	// int면 4씩 double면 8씩
	//cout << uintptr_t(ptr-1) << endl; //10진수로 출력
	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr+1) << endl;
	//cout << uintptr_t(ptr+2) << endl;

	//int arr[] = { 1,3,5,7,9 };
	//int *ptr = arr;
	//
	//int len = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << arr[i] << ' ' << uintptr_t(&arr[i]) << ' ';
	//	cout << *(ptr+i) << ' ' << uintptr_t(ptr+i) << endl;
	//}

	//c언어 스타일의 문자열 심볼릭 상수

	//char* name = "jack jack" // 안됨
	//const char* name = "jack jack"; //대신에 const를 통해서는 가능
	//const char* name2 = "jack jack";
	//char char_arr[] = "Hello World";

	//cout << name << endl;
	// 다른 변수라도 같은 값이면 같은 주소가 나옴
	//cout << uintptr_t(name) << endl;
	//cout << uintptr_t(name2) << endl;

	//주소가 아니라 값이 출력되는 이유는 일반적으로 주소를 많이 출력하는 일이 없기에
	//예외적으로 값이 나오도록 되어있음
	//cout << name << endl;
	//cout << char_arr << endl;

	//char c = 'q';
	//cout << &c << endl;
	//cout << *(&c) << endl;


	// 동적할당

	//int* ptr = new int(7);

	//cout << ptr << endl;
	//cout << *ptr << endl;

	//// 메모리는 할당받으면 delete를 통해 돌려줘야함
	//delete ptr;
	//// delete를 해도 주소는 남아있으므로 주소에 nullptr 대입
	//ptr = nullptr;


	// 메모리 누수
	//while (true)
	//{
	//	int* ptr = new int;
	//	cout << ptr << endl;

	//	// delete 꼭 해야함
	//	delete ptr;
	//}

	// 동적할당배열

	//int length;
	//cin >> length;

	//int* arr = new int[length] {1,2,3,4,5};

	//for (int i = 0; i < length; i++)
	//{
	//	cout << (uintptr_t)&arr[i] << endl;
	//	cout << arr[i] << endl;
	//}
	//delete[] arr;

	// 포인터와 const

	//int value = 5;
	//const int* ptr = &value; // 값 못바꿈
	//
	//// 함수 파라미터로 가끔 들어감, 안전하게 코딩하는 기법 ( 배열 바꾸지 말라고 )
	//int* const ptr2 = &value; // 포인터에 있는 주소값 못바꿈
	//const int* const ptr3 = &value; // 포인터에 있는 주소값 못바꿈 + 값도 못바꿈

	////cout << ptr << endl; // value의 주소값

	//int value2 = 8;
	//ptr2 = &value2; // 에러발생

	// 참조변수

	//int value = 5;
	//int* ptr = &value; // 포인터

	//int &ref = value; // 참조

	//cout << ref << endl;
	//ref = 10;
	//cout << value << ref << endl; // value값도 ref값으로 바뀜

	// 같은주소
	//cout << ptr << endl;
	//cout << &value << endl;
	//cout << &ref << endl;

	//참조는 반드시 초기화 되어야함
	//참조는 별명이라고 볼수있음

	//int x = 5;
	//int& ref = x;

	//const int y = 5;
	//const int& ref2 = y;

	//int value1 = 5;
	//int value2 = 7;

	//int& ref = value1;

	//cout << ref << endl;
	//ref = value2;
	//cout << ref << endl;

	//int n = 10;
	//int* ptr = &n;
	//cout << *ptr << endl;
	//dosomething(ptr);
	//cout << *ptr << endl;

	//int m = 10;
	//cout << m << endl;
	//dosomething2(m);
	//cout << m << endl;

	// 참조 이렇게 사용 가능
	//Other ot;
	//int& v01 = ot.st.v1;
	//v01 = 1;

	//int value = 5;
	//// 내부적으로 동일
	//int* const ptr = &value;
	//int& ref = value;

	//*ptr = 10;
	//ref = 10;

	//cout << *ptr << endl;
	//cout << ref << endl;

	//int a = 1;
	//dosomething3(a);
	//dosomething3(1);
	//dosomething3(a + 1);

	//Person person;
	//
	//person.age = 27;

	//Person& ref = person; //참조
	//ref.age = 27;

	//Person* ptr = &person; //포인터
	//ptr->age;


	// for-each 문

	//int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//동적할당 배열 편한게 사용
	//vector<int> fibo2 = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//// 참조를 통해 값을 변경시킬수있음
	//for(auto &number : fibo)
	//	number *= 10;
	//
	//for (const auto &number : fibo)
	//{
	//	cout << number << ' ';
	//}
	//cout << endl;

	//int max = std::numeric_limits<int>::lowest();

	//for (const auto& num : fibo2)
	//	max = std::max(max, num); //algorithm헤더에 있는 max
	//cout << max << endl;

	//void 포인터

/*
기본적으로 C 언어는 자료형이 다른 포인터끼리 메모리 주소를 저장하면
컴파일 경고(warning)가 발생합니다. 하지만 void 포인터는 자료형이
정해지지 않은 특성 때문에 어떤 자료형으로 된 포인터든 모두 저장할 수 있습니다.
반대로 다양한 자료형으로 된 포인터에도 void 포인터를 저장할 수도 있습니다.
이런 특성 때문에 void 포인터는 범용 포인터라고 합니다.

즉, 직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환되는 방식입니다.

단, void 포인터는 자료형이 정해지지 않았으므로
값을 가져오거나 저장할 크기도 정해지지 않았습니다.
따라서 void 포인터는 역참조를 할 수 없습니다.

함수에서 다양한 자료형을 받아들일 때,
함수의 반환 포인터를 다양한 자료형으로 된 포인터에 저장할 때,
자료형을 숨기고 싶을 때 사용합니다.

https://dojang.io/mod/page/view.php?id=278
*/

	//int		i = 5;
	//float	f = 3.0;
	//char	c = 'a';

	//void* ptr = nullptr;

	//ptr = &i;
	//ptr = &f;
	//ptr = &c;

	//cout << ptr << endl;


	// 다중 포인터와 동적 다차원 배열
	//int* ptr = nullptr;
	//int** ptrptr = nullptr;

	//int value = 5;

	//ptr = &value;
	//ptrptr = &ptr;

	//cout << ptr << ' ' << *ptr << ' ' << &ptr << endl;
	//cout << ptrptr << ' ' << *ptrptr << ' ' << &ptrptr << endl;
	//cout << **ptrptr << endl;

	//	const int row(3);
	//	const int col(3);
	//	const int arr[row][col] =
	//	{
	//		{1,2,3},
	//		{4,5,6},
	//		{7,8,9}
	//	};
	//
	//	int** matrix = new int*[row]; // 2중포인터 설정
	//
	//	for (int r=0;r<row;r++)
	//	{
	//		matrix[r] = new int[col]; //각 배열 동적할당
	//	}
	//	
	//	for (int r = 0; r < row; r++)
	//	{
	//		for (int c = 0; c < col; c++)
	//		{
	//			matrix[r][c] = arr[r][c];
	//			cout << matrix[r][c] << ' ';
	//		}
	//		cout << endl;
	//	}
	//
	//	for (int r = 0; r < row; r++)
	//	{
	//		delete[] matrix[r]; //배열 먼저 delete
	//	}
	//	delete[] matrix;//2중포인터 delete

	// 정적배열 대체하는 std::array 

	//int arr[] = { 1,2,3,4,5 };
	//array<int, 5> my_arr = { 1,2,3,4,5 };
	//array<int, 5> my_arr2 = { 1,5,3,7,6 };
	//cout << my_arr[0] << endl; // 문제가 있어도 그냥 실행
	//cout << my_arr.at(10) << endl; // 문제가 생기면 예외처리 발생
	
	//cout << my_arr.size() << endl;
	//printlength(my_arr);

	//for (auto& element : my_arr2) // 참조를 통해 복사가 빨라짐
	//	cout << element << ' ';
	//cout << endl;

	//// 알고리즘헤더의 sort 함수
	//std::sort(my_arr2.begin(), my_arr2.end());

	//for (auto& element : my_arr2) 
	//	cout << element << ' ';
	//cout << endl;

	// 동적배열 대체하는 std::vector

	// vector는 메모리 할당받은 이후에 자동으로 할당받은 메모리 지워줌

	//std::vector<int> arr; //사이즈 반드시 안적어도 됨
	//std::vector<int>arr2 = { 1,2,3,4,5 };
	////cout << arr2.size() << endl;

	//for (auto& num : arr2)
	//	cout << num << ' ';
	//cout << endl;

	//cout << arr2[0] << endl;
	//cout << arr2.at(0) << endl; // at : 접근

}