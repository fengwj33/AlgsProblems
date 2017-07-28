#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
struct cid
{
	int id;
	bool vis;
};
int f(vector<cid>& vec, int index)
{
	for (int i = 1;i < vec.size();i++)
	{
		if (vec[i].id == index)
			return i;
	}
	return -1;
}
bool isO(int p)
{
	for (int i = 2;i <= sqrt(p);i++)
		if (p % i == 0)
			return false;
	return true;
}
int main()
{
	int N;
	cin >> N;
	vector<cid> idlist(N + 1);
	for (int i = 1;i <= N;i++)
	{
		cin >> idlist[i].id;
		idlist[i].vis = false;
	}
	cin >> N;
	int t;
	string temp;
	for (int i = 0;i < N;i++)
	{
		if (i != 0)
			cout << endl;
		cin >> temp;
		cout << temp << ": ";
		sscanf(temp.c_str(),"%d", &t);
		t = f(idlist, t);
		
		if (t == -1)
		{
			cout << "Are you kidding?";
			continue;
		}
		else if (idlist[t].vis)
			cout << "Checked";
		else if (t == 1)
			cout << "Mystery Award";
		else if (isO(t))
			cout << "Minion";
		else
			cout << "Chocolate";
		idlist[t].vis = true;
	}
	system("pause");
}