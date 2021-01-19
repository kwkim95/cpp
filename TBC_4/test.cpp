#include <iostream>
#include "test.h"
using namespace std;

void test()
{
	//cout << "Hello World" << endl;

	cout << "pi " << constants::pi << " " << &constants::pi << endl;
}


void test02()
{
	cout << "pi02 " << constants02::pi02 << " " << &constants02::pi02 << endl;
}