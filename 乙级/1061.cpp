#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int right(int a, int b) { return a == b ? 1 : 0;}
int main()
{
	int N,M,t,inp;
	cin >> N>>M;
	int sc[100];
	int ans[100];
	for (int i = 0;i < M;i++)
		cin >> sc[i];
	for (int i = 0;i < M;i++)
		cin >> ans[i];
	
	for (int i = 0;i < N;i++)
	{
		if (i != 0) cout << endl;
		t = 0;
		for (int j = 0;j < M;j++)
		{
			cin >> inp;
			t += right(inp, ans[j])*sc[j];
		}
		cout << t;
	}
	system("pause");
}