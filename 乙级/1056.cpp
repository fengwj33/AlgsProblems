#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
	int N,c=0,t;
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> t;
		c += t*(N - 1) * 11;
	}
	cout << c;
	system("pause");
}