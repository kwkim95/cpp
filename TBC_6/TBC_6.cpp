/* ȫ������ �����ϸ� ���� C++ 6�� */
#include <iostream>
#include <cstring>

using namespace std;

//struct Rectangle // 8bytes�� ������ padding������ �� 8bytes�� �ȳ��ü����ִ�
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
	////����ü �迭�� ����
	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl; // 80 bytes

	//int length;
	//cin >> length; //��Ÿ�Ӷ� a �Է¹���
	//int a[length]; //�����϶� ����� �������־����, ���� ������ �߻� 

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

	//���� ������ �迭
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

	// c��� ��Ÿ�� �迭 ���ڿ�
	// ���ڿ��� ������ ������ �˷��ִ� �ι��� '\0'�� �ִ�
	//char mystring[] = "string";
	//int len = sizeof(mystring) / sizeof(char);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << mystring[i] << ' ';
	//	cout << (int)mystring[i] << ' ';
	//	cout << endl;
	//}
	//cout << endl;

	//strcat(); //���ڿ� �ٿ���
	//strcmp(); //���ڿ� ��.. ������ 0 �ٸ��� -1 ����

	//������

	//int x(5);
	//double d(123.0);
	//// address-of operator (&)
	////cout << x << ' ' << &x << ' ' << (int)&x << endl; 

	//// de-reference operator (*)
	////cout << *(&x) << endl; // �޸� �ּҿ� ���� ����ִ��� ���

	//int *ptr_x;
	//ptr_x = &x;
	//double* ptr_d = &d;
	////cout << ptr_x << ' ' << *ptr_x << endl;

	////�����͸� ����ؼ� ��û�� ũ���� �迭�� �� �����ϸ� �߻��ϴ� 
	////���� ���̰� �迭�� ù �ּҿ� ũ�⸦ ���� ���� �ִ��� ���ϼ��ִ� 
	////���� �迭�� �� ���� �����ϴ°��� �ּҸ� ���� ���ϰ� �Ҽ��ִ�

	//cout << sizeof(x) << endl; //4
	//cout << sizeof(d) << endl; //8

	//// 32��Ʈ������ 4 4 , 4 4
	//// 64��Ʈ������ 8 8, 8 8
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

	//�����Ϳ� �����迭

	//int arr[5] = { 1,3,5,7,9 };

	//cout << arr << endl;
	//cout << &arr << endl;
	//cout << &arr[0] << endl;
	//cout << *arr << endl;

	//cout << sizeof(arr) << endl;
	//int* ptr = arr;
	//cout << sizeof(ptr) << endl; // 4bytes ������ ������ ������ ��ü�� ũ�Ⱑ 4����Ʈ
	//
	// 4bytes������ ������ �Ķ���ͷ� int arr[]�� �迭�� �ƴ϶� �����ͷ� �����Ϸ��� �ν���
	// �� int *arr�� �ν�
	//printArray(arr); 
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << *(ptr+i) << ' ';
	//}

	//int value = 7;
	//int *ptr = &value;

	// ������ Ÿ�Կ� ���� �ּҰ��� ũ�Ⱑ �޶���
	// int�� 4�� double�� 8��
	//cout << uintptr_t(ptr-1) << endl; //10������ ���
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

	//c��� ��Ÿ���� ���ڿ� �ɺ��� ���

	//char* name = "jack jack" // �ȵ�
	//const char* name = "jack jack"; //��ſ� const�� ���ؼ��� ����
	//const char* name2 = "jack jack";
	//char char_arr[] = "Hello World";

	//cout << name << endl;
	// �ٸ� ������ ���� ���̸� ���� �ּҰ� ����
	//cout << uintptr_t(name) << endl;
	//cout << uintptr_t(name2) << endl;
	
	//�ּҰ� �ƴ϶� ���� ��µǴ� ������ �Ϲ������� �ּҸ� ���� ����ϴ� ���� ���⿡
	//���������� ���� �������� �Ǿ�����
	//cout << name << endl;
	//cout << char_arr << endl;

	//char c = 'q';
	//cout << &c << endl;
	//cout << *(&c) << endl;


}