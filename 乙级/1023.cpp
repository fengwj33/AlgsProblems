#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include <vector>  
using namespace std;

int main()
{
	int a[10];
	int t;
	for (int i = 0;i < 10;i++)
		cin >> a[i];
	for (int i = 1;i < 10;i++)
	{
		if (a[i] != 0)
		{
			a[i]--;
			cout << i;
			break;
		}
	}
	for (int i = 0;i < 10;i++)
		for (int j = 0;j < a[i];j++)
			cout << i;
	system("pause");
}