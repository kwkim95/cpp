/* ȫ������ �����ϸ� ���� C++ 3�� */
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//������ �켱����
	//https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90#%EC%97%B0%EC%82%B0%EC%9E%90_%EC%9A%B0%EC%84%A0%EC%88%9C%EC%9C%84

	//int x(7);
	//int y(4);
	//int z(x / y);

	//cout << x << ' ' << y << ' ' << z << endl;
	//cout << float(x) / y << endl; //�� ���߿� �ϳ��� �Ǽ��� ����� �Ǽ��� ����

	//int x = 3;
	//int y = 10;
	////int z = (++x, ++y);
	////���� �ǹ�, ������ �ݺ����� ���� ����
	//++x;
	//++y;
	//int z = y;
	//�޸������ڴ� �޸� �����ڷ� ���̴°ź��� �����ϴ°ŷ� �� ���� ����

	//cout << x << ' ' << y << ' ' << z << endl;


	//���׿�����
	//���׿����ڴ� �����Ҷ��� �Լ��� �ɰ��� �����Ҷ� ����ϴ°��� ����

	//bool t = true;
	//int isTrue = (t == true) ? 100 : 10; //��ȣ���� true�� 100 false�� 10

	//cout << isTrue << endl;


	//��Ʈ������
	// << left shift, >> right shift
	// ~, &, |, ^

	//unsigned int a = 1;
	//unsigned int a1 = 1024;
	//cout << std::bitset<4>(a) << endl; //a�� 2���� 4�ڸ��� ��� �������� ǥ�� 

	//unsigned int b = a << 1;

	//cout << std::bitset<4>(b) << endl; // 0001���� �������� ��ĭ ������ -> 0010

	//shift �����ڸ� ���� 2�� ���� ������ �ϰ������ power ���� �� ���ϰ� ����Ҽ�����

	//cout << std::bitset<8>(a) << endl;
	//cout << std::bitset<8>(a << 1) << ' ' << (a << 1) << endl;
	//cout << std::bitset<8>(a << 2) << ' ' << (a << 2) << endl;
	//cout << std::bitset<8>(a << 3) << ' ' << (a << 3) << endl;
	//cout << std::bitset<8>(a << 4) << ' ' << (a << 4) << endl;

	//cout << std::bitset<8>(a1) << endl;
	//cout << std::bitset<8>(a1 >> 1) << ' ' << (a1 >> 1) << endl;
	//cout << std::bitset<8>(a1 >> 2) << ' ' << (a1 >> 2) << endl;
	//cout << std::bitset<8>(a1 >> 3) << ' ' << (a1 >> 3) << endl;
	//cout << std::bitset<8>(a1 >> 4) << ' ' << (a1 >> 4) << endl;

	//unsigned int a0 = 0b1110;
	//unsigned int a1 = 0b1001;

	//cout << std::bitset<4>(a0 & a1) << endl; //AND
	//cout << std::bitset<4>(a0 | a1) << endl; //OR
	//cout << std::bitset<4>(a0 ^ a1) << endl; //XOR

	
	//��Ʈ �÷���

	//���Ӹ��鶧 �������� �ʹ� ���� ��쿡 2������ ����ؼ� ���� �ڵ��� �Ҽ�����
	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;

	////cout << std::bitset<8>(opt0) << endl;
	////cout << std::bitset<8>(opt1) << endl;
	////cout << std::bitset<8>(opt2) << endl;
	////cout << std::bitset<8>(opt3) << endl;
	//unsigned char item_flag = 0;

	//cout << "no item " << std::bitset<8>(item_flag) << endl;
	//
	////get item0
	//item_flag |= opt0;
	//cout << "get item0 " << std::bitset<8>(item_flag) << endl;

	////get item3
	//item_flag |= opt3;
	//cout << "get item3 " << std::bitset<8>(item_flag) << endl;

	////lost item3
	//item_flag &= ~opt3;
	//cout << "lost item3 " << std::bitset<8>(item_flag) << endl;

	////has item1?
	//if (item_flag & opt1)
	//{
	//	cout << "has item1" << endl;
	//}
	//else
	//{
	//	cout << "no item1" << endl;
	//}

	////get item2,3
	//item_flag |= (opt2 | opt3);
	//cout << "get item2, item3 " << std::bitset<8>(item_flag) << endl;

	//item2�� �����ϰ� item1�� �������� ������ item2 ���ְ� item1����� ����
	//if ((item_flag & opt2) && !(item_flag & opt1))
	//{
	//	item_flag ^= (opt2 | opt1);
	//}
	//cout << std::bitset<8>(item_flag) << endl;


	//��Ʈ ����ũ
	// 16������ �Ǿ��ִ� rgb color�� 10������ ��ȯ�ϴ� ���
	// ex) 0xFFFAFA�� 10������ 255 250 250
	
	//const unsigned int red_mask = 0xFF0000;
	//const unsigned int green_mask = 0x00FF00;
	//const unsigned int blue_mask = 0x0000FF;

	////cout << std::bitset<32>(red_mask) << endl;
	////cout << std::bitset<32>(green_mask) << endl;
	////cout << std::bitset<32>(blue_mask) << endl;

	//unsigned int pixel_color = 0xFFFAFA;

	//cout << std::bitset<32>(pixel_color) << endl;
	//
	////shift �����ڸ� ����ؾ� �ϴ� ������ bitset�� 8�� �����ؼ� 8�ڸ��� ����ϰ� �ߴµ�
	////redmask�� 16���� 24�ڸ�����, greenmask�� 8�ڸ����� 16�ڸ������� ���ϴ� ���� �����Ƿ�
	////�̸� right shift �����ڸ� ���� �� �� 8�ڸ��� �Űܾ� ���ϴ� ���� ����
	//unsigned char red = (pixel_color & red_mask) >> 16; 
	//unsigned char green = (pixel_color & green_mask) >> 8;
	//unsigned char blue = pixel_color & blue_mask;

	//cout << "red color is " << std::bitset<8>(red) << ' ' << int(red) << endl;
	//cout << "green color is " << std::bitset<8>(green) << ' ' << int(green) << endl;
	//cout << "blue color is " << std::bitset<8>(blue) << ' ' << int(blue) << endl;


	//��Ʈ�÷��� ����
	//unsigned char option_viewed  = 0x01;
	//unsigned char option_edited  = 0x02;
	//unsigned char option_liked   = 0x04;
	//unsigned char option_shared  = 0x08;
	//unsigned char option_deleted = 0x80;

	//cout << std::bitset<8>(option_viewed) << endl;
	//cout << std::bitset<8>(option_edited) << endl;
	//cout << std::bitset<8>(option_liked) << endl;
	//cout << std::bitset<8>(option_shared) << endl;
	//cout << std::bitset<8>(option_deleted) << endl;

	//unsigned char my_article_flags = 0x00;
	//cout << "�⺻���� " << std::bitset<8>(my_article_flags) << endl;

	////��� ������
	//my_article_flags |= option_viewed;
	//cout << "�������� " << std::bitset<8>(my_article_flags) << endl;

	////���ƿ� Ŭ��
	//my_article_flags |= option_liked;
	//cout << "���ƿ�Ŭ�� " << std::bitset<8>(my_article_flags) << endl;

	////���ƿ� �ѹ��� Ŭ��
	//my_article_flags ^= option_liked;
	//cout << "���ƿ� �ٽ� Ŭ�� " << std::bitset<8>(my_article_flags) << endl;

	////�����ϱ� 
	//my_article_flags |= option_shared;
	//cout << "�����ϱ� " << std::bitset<8>(my_article_flags) << endl;

	////����� ����
	//my_article_flags |= option_deleted;
	//cout << "�� ��� ���� " << std::bitset<8>(my_article_flags) << endl;

}