#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<stack>
#include<stdlib.h>
using namespace std;
void merge(vector<int>& a, int starta, int enda, int startb, int endb)
{
	vector<int>t;
	for (int i = starta, j = startb;i <= enda || j <= endb;)
	{
		if (i > enda)
			t.push_back(a[j++]);
		else if (j > endb)
			t.push_back(a[i++]);
		else
		{
			if (a[i] <= a[j])
				t.push_back(a[i++]);
			else
				t.push_back(a[j++]);
		}
	}
	for (int i = starta, j = 0;i <= endb;i++, j++)
		a[i] = t[j];
}
int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> A2(N);
	for (int i = 0;i < N;i++)
	{
		cin >> A[i];
	}
	for (int i = 0;i < N;i++)
		cin >> A2[i];
	int flag = 0;
	for (int i = 1;i < N;i *= 2)
	{
		for (int j = 0;j+i < N;j+=2*i)
		{
			merge(A, j, j + i - 1, j + i, min(j + 2 * i - 1, N - 1));
		}
		if (flag == 0)
		{
			bool tf = true;
			for (int i = 0;i < N;i++)
				if (A[i] != A2[i])
				{
					tf = false;
					break;
				}
			if (tf)
				flag++;
		}
		else if (flag == 1)
		{
			cout << "Merge Sort" << endl;
			for (int i = 0;i < N;i++)
				i != N-1 ? cout << A[i] << " " : cout << A[i];
			system("pause");
			return 0;
		}
	}
	cout << "Insertion Sort" << endl;
	int p;
	for (int i = 0;i < N;i++)
	{
		if (A2[i] > A2[i + 1])
		{
			p = i + 1;
			break;
		}
	}
	int m = p;//min_element(A2.begin() + p, A2.end()) - A2.begin();
	bool mflag = false;
	for (int i = 0;i < N;i++)
	{
		if (i == m)
			continue;
		if (A2[i] > A2[m] && mflag == false)
		{
			mflag = true;
			cout << A2[m] << " ";
		}
		cout << A2[i];
		if (i != N - 1)
			cout << " ";
	}
		
	
	
	system("pause");
}