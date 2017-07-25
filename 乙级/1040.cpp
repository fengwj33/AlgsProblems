#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int count(char* str, char f)
{
	int c = 0;
	for (int i = 0;str[i] != '\0';i++)
		if (str[i] == f)
			c++;
	return c;
}
int main()
{
	char str[100000];
	cin >> str;
	int P[100000], T[100000];
	int tt = count(str, 'T');
	int pt = 0;
	long c = 0;
	for (int i = 0;str[i] != '\0';i++)
	{
		if (str[i] == 'P')
			pt++;
		else if (str[i] == 'T')
			tt--;
		P[i] = pt;
		T[i] = tt;
	}
	for (int i = 0;str[i] != '\0';i++)
	{
		if (str[i] == 'A')
		{
			c += P[i] * T[i];
			if(c>1000000007)
				c = c % 1000000007;
		}
		
	}
	c = c % 1000000007;
	cout << c;
	system("pause");
}