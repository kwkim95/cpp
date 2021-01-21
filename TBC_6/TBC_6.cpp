/* 홍정모의 따라하며 배우는 C++ 6장 */
#include <iostream>
#include <cstring>

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


}