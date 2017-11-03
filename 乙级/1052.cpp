#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;
void load(vector<string>& vec, string buf)
{
	bool flag = false;
	string temp;
	for (int i = 0;buf[i] != '\0';i++)
	{
		if (flag == false)
		{
			if (buf[i] == '[')
			{
				flag = true;
				temp = "";
			}
			continue;
		}
		if (buf[i] == ']')
		{
			flag = false;
			vec.push_back(temp);
			continue;
		}
		temp+= buf[i];

	}
}
int main()
{
	vector<string> p[3];
	string buf;
	getline(cin, buf);
	load(p[0], buf);
	getline(cin, buf);
	load(p[1], buf);
	getline(cin, buf);
	load(p[2], buf);
	int N;
	cin >> N;
	string temp;
	int pn[5];
	bool oflag = false;
	bool flag;
	int part[] = { 0,1,2,1,0 };
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cin >> pn[j];
			pn[j]--;
		}
		temp = "";
		flag = true;
		for (int j = 0;j < 5;j++)
		{
			if (pn[j] >= p[part[j]].size())
			{
				flag = false;
				break;
			}
			temp += p[part[j]][pn[j]];
			if (j == 0) temp += '(';
			if (j == 3) temp += ')';
		}
		if (!oflag)
			oflag = true;
		else
			cout << endl;
		if (!flag)
			cout << "Are you kidding me? @\\/@";
		else
			cout << temp;
	}
	system("pause");
}