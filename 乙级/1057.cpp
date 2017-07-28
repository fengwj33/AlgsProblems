#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[100000];
	gets_s(str);
	int c = 0, co[2] = { 0,0 }, t;
	for (int i = 0;str[i] != '\0';i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			c += str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c += str[i] - 'A' + 1;
	while (c != 0)
	{
		t = c % 2;
		co[t]++;
		c /= 2;
	}
	cout << co[0] << " " << co[1];
	system("pause");
}