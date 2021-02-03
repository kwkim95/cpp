#include <iostream>
using namespace std;
char chess[8][9];

int main() {
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			// 0,0칸이 하얀색이고 번갈아가면서 검정 하얀색이 칠해져있기때문에 
			// i+j합이 짝수면 하얀색 홀수면 검정색이다
			cin >> chess[i][j]; 
			if ((i + j) % 2 == 0 && chess[i][j] == 'F')
				cnt++;
		}
	}
	printf("%d\n", cnt);
}
