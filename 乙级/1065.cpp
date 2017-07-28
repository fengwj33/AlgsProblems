#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
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
	vector<bool> p(100000, false);
	map<int,int>pmap;
	vector<int> single;
	vector<int> ac;
	int N,a,b;
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> a >> b;
		pmap[a] = b;
		pmap[b] = a;
	}
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> a;
		ac.push_back(a);
		p[a] = true;
	}
	for (int i = 0;i < N;i++)
	{
		if (pmap.count(ac[i]) == 0)
			single.push_back(ac[i]);
		else if(p[pmap[ac[i]]]==false)
			single.push_back(ac[i]);
	}
	sort(single.begin(), single.end());
	cout << single.size()<<endl;
	for (int i = 0;i < single.size();i++)
		i == 0 ? printf("%05d", single[i]) : printf(" %05d", single[i]);
	system("pause");
}