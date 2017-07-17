#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char p;
	int n,i=3,all=1,h=1;
	cin >>n>>p;
	while (true)
	{
		if (all + 2 * i > n)
			break;
		all += 2 * i;
		i += 2;
		h++;
	}
	for (int i = h;i > 0;i--)
	{
		for (int j = 0;j <  h- i ;j++)
			cout << " ";
		for (int j = 0;j < 2*i-1;j++)
			cout << p;
		cout << endl;
	}
	for (int i = 2;i <=h;i++)
	{
		for (int j = 0;j < h - i;j++)
			cout << " ";
		for (int j = 0;j < 2 * i - 1;j++)
			cout << p;
		cout << endl;
	}
	cout << n - all;

	system("pause");
}