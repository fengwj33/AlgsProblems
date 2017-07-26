#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long> num(N);
	vector<long> max(N);
	vector<long> min(N);
	for (int i = 0;i < N;i++)
		cin >> num[i];
	int t = -1;
	for (int i = 0;i < N;i++)
	{
		max[i] = t;
		if (num[i] > t)
			t = num[i];
	}
	t = 1000000001;
	int c = 0;
	bool flag = false;
	for (int i = N - 1;i >= 0;i--)
	{
		min[i] = t;
		if (num[i] < t)
			t = num[i];
		if (num[i] <= min[i] && num[i] >= max[i])
			c++;
	}
	cout << c<<endl;
	for (int i = 0;i < N;i++)
	{
		if (num[i] <= min[i] && num[i] >= max[i])
		{
			c++;
			if (!flag)
				flag = true;
			else
				cout << " ";
			cout<< num[i];

		}
	}
	cout << endl;
	system("pause");
}