#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	char c;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		sum += c - 48;
	}
	cout << sum << endl;
}
