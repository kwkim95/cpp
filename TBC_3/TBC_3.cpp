/* 홍정모의 따라하며 배우는 C++ 3장 */
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//연산자 우선순위
	//https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90#%EC%97%B0%EC%82%B0%EC%9E%90_%EC%9A%B0%EC%84%A0%EC%88%9C%EC%9C%84

	//int x(7);
	//int y(4);
	//int z(x / y);

	//cout << x << ' ' << y << ' ' << z << endl;
	//cout << float(x) / y << endl; //값 둘중에 하나만 실수면 결과값 실수로 나옴

	//int x = 3;
	//int y = 10;
	////int z = (++x, ++y);
	////같은 의미, 복잡한 반복문에 자주 쓰임
	//++x;
	//++y;
	//int z = y;
	//콤마연산자는 콤마 연산자로 쓰이는거보다 구분하는거로 더 많이 사용됨

	//cout << x << ' ' << y << ' ' << z << endl;


	//삼항연산자
	//삼항연사자는 복잡할때는 함수로 쪼개고 간단할때 사용하는것이 좋음

	//bool t = true;
	//int isTrue = (t == true) ? 100 : 10; //괄호안이 true면 100 false면 10

	//cout << isTrue << endl;


	//비트연산자
	// << left shift, >> right shift
	// ~, &, |, ^

	//unsigned int a = 1;
	//unsigned int a1 = 1024;
	//cout << std::bitset<4>(a) << endl; //a가 2진수 4자리로 어떻게 나오는지 표현 

	//unsigned int b = a << 1;

	//cout << std::bitset<4>(b) << endl; // 0001에서 왼쪽으로 한칸 움직임 -> 0010

	//shift 연산자를 통해 2의 제곱 연산을 하고싶을때 power 보다 더 편하게 사용할수있음

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

	
	//비트 플래그

	//게임만들때 아이템이 너무 많은 경우에 2진수를 사용해서 쉽게 코딩을 할수있음
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

	//item2가 존재하고 item1이 존재하지 않을때 item2 없애고 item1존재로 변경
	//if ((item_flag & opt2) && !(item_flag & opt1))
	//{
	//	item_flag ^= (opt2 | opt1);
	//}
	//cout << std::bitset<8>(item_flag) << endl;


	//비트 마스크
	// 16진수로 되어있는 rgb color를 10진수로 변환하는 방법
	// ex) 0xFFFAFA는 10진수로 255 250 250
	
	//const unsigned int red_mask = 0xFF0000;
	//const unsigned int green_mask = 0x00FF00;
	//const unsigned int blue_mask = 0x0000FF;

	////cout << std::bitset<32>(red_mask) << endl;
	////cout << std::bitset<32>(green_mask) << endl;
	////cout << std::bitset<32>(blue_mask) << endl;

	//unsigned int pixel_color = 0xFFFAFA;

	//cout << std::bitset<32>(pixel_color) << endl;
	//
	////shift 연산자를 사용해야 하는 이유는 bitset을 8로 설정해서 8자리만 출력하게 했는데
	////redmask는 16부터 24자리까지, greenmask는 8자리부터 16자리까지에 원하는 값이 있으므로
	////이를 right shift 연산자를 통해 맨 뒤 8자리로 옮겨야 원하는 값이 나옴
	//unsigned char red = (pixel_color & red_mask) >> 16; 
	//unsigned char green = (pixel_color & green_mask) >> 8;
	//unsigned char blue = pixel_color & blue_mask;

	//cout << "red color is " << std::bitset<8>(red) << ' ' << int(red) << endl;
	//cout << "green color is " << std::bitset<8>(green) << ' ' << int(green) << endl;
	//cout << "blue color is " << std::bitset<8>(blue) << ' ' << int(blue) << endl;


	//비트플래그 연습
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
	//cout << "기본상태 " << std::bitset<8>(my_article_flags) << endl;

	////기사 봤을때
	//my_article_flags |= option_viewed;
	//cout << "기사봤을때 " << std::bitset<8>(my_article_flags) << endl;

	////좋아요 클릭
	//my_article_flags |= option_liked;
	//cout << "좋아요클릭 " << std::bitset<8>(my_article_flags) << endl;

	////좋아요 한번더 클릭
	//my_article_flags ^= option_liked;
	//cout << "좋아요 다시 클릭 " << std::bitset<8>(my_article_flags) << endl;

	////공유하기 
	//my_article_flags |= option_shared;
	//cout << "공유하기 " << std::bitset<8>(my_article_flags) << endl;

	////본기사 삭제
	//my_article_flags |= option_deleted;
	//cout << "본 기사 삭제 " << std::bitset<8>(my_article_flags) << endl;

}