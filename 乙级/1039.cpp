#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int count(char* str,char f)
{
	int c = 0;
	for (int i = 0;str[i] != '\0';i++)
		if (str[i] == f)
			c++;
	return c;
}
int length(char* str)
{
	int i;
	for (i = 0;str[i] != '\0';i++);
	return i;
}
int main()
{
	vector<bool> vis(128, false);
	char b[1024];
	char w[1024];
	int l=0;
	cin >> b >> w;
	int lb = length(b);
	int lw = length(w);
	int t;
	for (int i = 0;w[i] != '\0';i++)
	{
		if (!vis[w[i]])
		{
			vis[w[i]] = true;
			t = count(b, w[i]) - count(w, w[i]);
			if (t < 0)
				l -= t;
		}
	}
	if (l > 0)
		cout << "No " << l;
	else
		cout << "Yes " << lb - lw;


	system("pause");
}