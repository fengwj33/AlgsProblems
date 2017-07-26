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
	int j = 0, y = 0;
	int a, b, c, d,e;
	for (int i = 0;i < N;i++)
	{
		cin >> a >> b >> c >> d;
		e = a+c;
		if (b == e && b!=d)
			j++;
		else if (d == e && b != d)
			y++;
	}
	cout << y << " " << j;
	system("pause");
}