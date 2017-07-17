#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct Pie
{
	float c;
	float zp;
	float dp;
};
bool comp(const Pie &a, const Pie &b)
{
	return a.dp > b.dp;
}
int main()
{
	vector<Pie> pies;
	int n;
	float A;
	float price = 0;
	cin >> n>>A;
	Pie temp;
	for (int i = 0;i < n;i++)
	{
		cin >> temp.c;
		pies.push_back(temp);
	}
	for (int i = 0;i < n;i++)
	{
		cin >> pies[i].zp ;
		pies[i].dp = pies[i].zp / pies[i].c;
	}
	sort(pies.begin(), pies.end(), comp);
	for (int i = 0;i < n;i++)
	{
		if (A >= pies[i].c)
		{
			A -= pies[i].c;
			price += pies[i].zp;
			if (A == 0)
				break;
		}
		else
		{
			price += pies[i].dp*A;
			break;
		}
	}
	printf("%.2f", price);
	system("pause");
}