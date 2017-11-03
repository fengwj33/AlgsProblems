#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> Sc(N);
	map<int, int> m;
	vector<int> q;
	for (int i = 0;i < N;i++)
		scanf_s("%d", &Sc[i]);
	int Nq;
	cin >> Nq;
	int fval;
	for (int i = 0;i < Nq;i++)
	{
		scanf_s("%d", &fval);
		m[fval] = 0;
		q.push_back(fval);
	}
	for (int i = 0;i < N;i++)
	{
		if (m.find(Sc[i]) != m.end())
			m[Sc[i]]++;
	}
	for (int i = 0;i < Nq;i++)
	{
		cout << m[q[i]];
		if (i != Nq - 1)
			cout << " ";
	}
		

	system("pause");
}