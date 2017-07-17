#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sc[100000] = { 0 };
	int a, b;
	for (int i = 0;i < n;i++)
	{
		cin >> a >> b;
		sc[a] += b;
	}
	int maxteam,max=-1;
	for (int i = 0;i < n+1;i++)
	{
		if (sc[i] > max)
		{
			maxteam = i;
			max = sc[i];
		}
	}
	cout<<maxteam<<" "<<max;
	system("pause");
}