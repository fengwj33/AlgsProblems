#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>

using namespace std;

int main()
{
	vector<float> a(1001,0);
	int N, n;
	float v;
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> n >> v;
		a[n] = v;
	}
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> n >> v;
		a[n] += v;
	}
	int c=0;
	for (int i = 0;i < 1001;i++)
		if (a[i] != 0)
			c++;
	cout << c;
	for (int i =1000;i >= 0;i--)
	{
		if (a[i] != 0)
			printf(" %d %.1f", i, a[i]);
	}
	system("pause");
}