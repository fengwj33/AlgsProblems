#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
	int N;
	char a;
	cin >> N>>a;
	for (int i = 0;i < N;i++)
		cout << a;
	cout << endl;
	for (int i = 0;i < (N + 1) / 2 - 2;i++)
	{
		cout << a;
		for (int j = 0;j < N - 2;j++)
			cout << " ";
		cout << a << endl;
	}
	for (int i = 0;i < N;i++)
		cout << a;
	system("pause");
}