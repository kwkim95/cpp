/* ȫ������ �����ϸ� ���� C++ 6�� */
#include <iostream>
#include <cstring>
#include <limits>
#include <algorithm>
#include <vector>
#include <array>

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

//void dosomething(int* n) // ������ ���ؼ� �Լ��ڿ��� ������ ������ ��
//{
//	*n = 5;
//	cout << "dosomehting in " << *n << endl;
//
//}
//
//void dosomething2(int& m)// ������ ����ϸ� ���� �̸��� �����Լ� ���� n�� ������ ��
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

// �Ű������� const�� ������ ���� ����ϸ� �����Լ��� �Ű������� ���ڳ� �����ͼ����� ������ ����
//void dosomething3(const int& x) 
//{
//	cout << x << endl;
//}

//struct Person {
//	int age;
//	int weight;
//};

//�� ������ �ʱ� ���ϸ� const
//������ ����ϸ� �����ϴ� ������ ������
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


	// �����Ҵ�

	//int* ptr = new int(7);

	//cout << ptr << endl;
	//cout << *ptr << endl;

	//// �޸𸮴� �Ҵ������ delete�� ���� ���������
	//delete ptr;
	//// delete�� �ص� �ּҴ� ���������Ƿ� �ּҿ� nullptr ����
	//ptr = nullptr;


	// �޸� ����
	//while (true)
	//{
	//	int* ptr = new int;
	//	cout << ptr << endl;

	//	// delete �� �ؾ���
	//	delete ptr;
	//}

	// �����Ҵ�迭

	//int length;
	//cin >> length;

	//int* arr = new int[length] {1,2,3,4,5};

	//for (int i = 0; i < length; i++)
	//{
	//	cout << (uintptr_t)&arr[i] << endl;
	//	cout << arr[i] << endl;
	//}
	//delete[] arr;

	// �����Ϳ� const

	//int value = 5;
	//const int* ptr = &value; // �� ���ٲ�
	//
	//// �Լ� �Ķ���ͷ� ���� ��, �����ϰ� �ڵ��ϴ� ��� ( �迭 �ٲ��� ����� )
	//int* const ptr2 = &value; // �����Ϳ� �ִ� �ּҰ� ���ٲ�
	//const int* const ptr3 = &value; // �����Ϳ� �ִ� �ּҰ� ���ٲ� + ���� ���ٲ�

	////cout << ptr << endl; // value�� �ּҰ�

	//int value2 = 8;
	//ptr2 = &value2; // �����߻�

	// ��������

	//int value = 5;
	//int* ptr = &value; // ������

	//int &ref = value; // ����

	//cout << ref << endl;
	//ref = 10;
	//cout << value << ref << endl; // value���� ref������ �ٲ�

	// �����ּ�
	//cout << ptr << endl;
	//cout << &value << endl;
	//cout << &ref << endl;

	//������ �ݵ�� �ʱ�ȭ �Ǿ����
	//������ �����̶�� ��������

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

	// ���� �̷��� ��� ����
	//Other ot;
	//int& v01 = ot.st.v1;
	//v01 = 1;

	//int value = 5;
	//// ���������� ����
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

	//Person& ref = person; //����
	//ref.age = 27;

	//Person* ptr = &person; //������
	//ptr->age;


	// for-each ��

	//int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//�����Ҵ� �迭 ���Ѱ� ���
	//vector<int> fibo2 = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//// ������ ���� ���� �����ų������
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
	//	max = std::max(max, num); //algorithm����� �ִ� max
	//cout << max << endl;

	//void ������

/*
�⺻������ C ���� �ڷ����� �ٸ� �����ͳ��� �޸� �ּҸ� �����ϸ�
������ ���(warning)�� �߻��մϴ�. ������ void �����ʹ� �ڷ�����
�������� ���� Ư�� ������ � �ڷ������� �� �����͵� ��� ������ �� �ֽ��ϴ�.
�ݴ�� �پ��� �ڷ������� �� �����Ϳ��� void �����͸� ������ ���� �ֽ��ϴ�.
�̷� Ư�� ������ void �����ʹ� ���� �����Ͷ�� �մϴ�.

��, ���� �ڷ����� ��ȯ���� �ʾƵ� �Ͻ������� �ڷ����� ��ȯ�Ǵ� ����Դϴ�.

��, void �����ʹ� �ڷ����� �������� �ʾ����Ƿ�
���� �������ų� ������ ũ�⵵ �������� �ʾҽ��ϴ�.
���� void �����ʹ� �������� �� �� �����ϴ�.

�Լ����� �پ��� �ڷ����� �޾Ƶ��� ��,
�Լ��� ��ȯ �����͸� �پ��� �ڷ������� �� �����Ϳ� ������ ��,
�ڷ����� ����� ���� �� ����մϴ�.

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


	// ���� �����Ϳ� ���� ������ �迭
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
	//	int** matrix = new int*[row]; // 2�������� ����
	//
	//	for (int r=0;r<row;r++)
	//	{
	//		matrix[r] = new int[col]; //�� �迭 �����Ҵ�
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
	//		delete[] matrix[r]; //�迭 ���� delete
	//	}
	//	delete[] matrix;//2�������� delete

	// �����迭 ��ü�ϴ� std::array 

	//int arr[] = { 1,2,3,4,5 };
	//array<int, 5> my_arr = { 1,2,3,4,5 };
	//array<int, 5> my_arr2 = { 1,5,3,7,6 };
	//cout << my_arr[0] << endl; // ������ �־ �׳� ����
	//cout << my_arr.at(10) << endl; // ������ ����� ����ó�� �߻�
	
	//cout << my_arr.size() << endl;
	//printlength(my_arr);

	//for (auto& element : my_arr2) // ������ ���� ���簡 ������
	//	cout << element << ' ';
	//cout << endl;

	//// �˰�������� sort �Լ�
	//std::sort(my_arr2.begin(), my_arr2.end());

	//for (auto& element : my_arr2) 
	//	cout << element << ' ';
	//cout << endl;

	// �����迭 ��ü�ϴ� std::vector

	// vector�� �޸� �Ҵ���� ���Ŀ� �ڵ����� �Ҵ���� �޸� ������

	//std::vector<int> arr; //������ �ݵ�� ����� ��
	//std::vector<int>arr2 = { 1,2,3,4,5 };
	////cout << arr2.size() << endl;

	//for (auto& num : arr2)
	//	cout << num << ' ';
	//cout << endl;

	//cout << arr2[0] << endl;
	//cout << arr2.at(0) << endl; // at : ����

}