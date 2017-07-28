#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
#include<vector>
using namespace std;
int g(int inp)
{
	int c=0;
	for (;inp != 0;inp /= 10)
		c += inp % 10;
	return c;
}
int main()
{
	vector<int> m(64,0);
	vector<int> ns;
	int N,t,c=0;
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> t;
		m[g(t)]++;
	}
	for (int i = 0;i < 64;i++)
	{
		if (m[i] > 0)
		{
			ns.push_back(i);
			c++;
		}
	}
	cout << c << endl;
	if (c != 0)
	{
		for (int i = 0;i < ns.size();i++)
			i==0?cout << ns[i]: cout <<" "<< ns[i];
	}

	system("pause");
}