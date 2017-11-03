#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isP(int inp)
{
	for (int i = 2;i <= sqrt(inp);i++)
	{
		if (inp % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int s, e;
	int c = 1;
	int p[10240] = { 0 };
	cin >> s >> e;
	for (int i = 2;c<=e;i++)
	{
		if (isP(i))
			p[c++] = i;
	}
	int flag = 0;
	for (int i = s;i <= e;i++)
	{
		flag=flag+1;
		cout << p[i];
		if(i!=e)
			if (flag % 10 == 0)
				cout << endl;
			else
				cout << " ";

	}

	system("pause");
}