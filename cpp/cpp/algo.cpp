#include <iostream>
using namespace std;
char chess[8][9];

int main() {
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			// 0,0ĭ�� �Ͼ���̰� �����ư��鼭 ���� �Ͼ���� ĥ�����ֱ⶧���� 
			// i+j���� ¦���� �Ͼ�� Ȧ���� �������̴�
			cin >> chess[i][j]; 
			if ((i + j) % 2 == 0 && chess[i][j] == 'F')
				cnt++;
		}
	}
	printf("%d\n", cnt);
}
