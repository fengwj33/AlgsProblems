#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> vis;
	int M, N, S,c=0;
	cin >> M >> N >> S;
	string inp;
	for (int i = 1;i <= M; i++)
	{

		cin >> inp;
		if (i < S)
			continue;
		else if (i == S)
		{
			cout << inp << endl;
			vis.push_back(inp);
			c = N;
		}
		else if (c == 1)
		{
			if (find(vis.begin(), vis.end(), inp) == vis.end())
			{
				cout << inp << endl;
				vis.push_back(inp);
				c = N;
			}
			else
				continue;
		}
		else
			c--;
	}
	if (M < S)
		cout << "Keep going...";
	system("pause");
}