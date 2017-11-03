#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<vector>
#include<list>
using namespace std;
struct stu
{
	string name;
	int height;
};
bool comp(const stu& a, const stu& b)
{
	if (a.height != b.height)
		return a.height > b.height;
	else
		return a.name.compare(b.name) == -1;
}
int main()
{
	int N, K;
	cin >> N >> K;
	vector<stu> slist(N);
	for (int i = 0;i < N;i++)
		cin >> slist[i].name>>slist[i].height;
	sort(slist.begin(), slist.end(), comp);

	int n = N%K + N / K;
	int p = 0,e;
	list<string> tlist;
	bool oflag = false;
	while (p < N)
	{
		e = n + p-1;
		tlist.clear();
		for (int i = 0;i < n;i++)
		{
			if (i % 2 != 0)
				tlist.push_front(slist[i + p].name);
			else
				tlist.push_back(slist[i + p].name);
		}
		bool flag = false;
		for (list<string>::iterator it = tlist.begin();it != tlist.end();it++)
		{
			if (!flag)
				flag = true;
			else
				cout << " ";
			cout << (*it);
		}
		cout << endl;
		p = e + 1;
		n = N / K;
	}
	system("pause");
}