#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> c(129, 0);
	char input[10000];
	gets_s(input);
	for (int i = 0;input[i] != '\0';i++)
	{
		c[input[i]]++;
	}
	bool flag;
	char t[] = { 'P','A','T','e','s','t' };
	while (true)
	{
		flag = false;
		for (int i = 0;i <= 5;i++)
		{
			if (c[t[i]] != 0) 
			{
				cout <<t[i];
				c[t[i]]--;
				flag = true;
			}
		}
		if (!flag) break;
	}
	system("pause");
}