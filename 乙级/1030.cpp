#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int spfind(vector<int> *vec, int start, int end, long long find)
{
	if ((*vec)[start] == find)
		return start;
	if ((*vec)[end] == find)
		return end;
	if (end - start == 1)
	{
		if (find >= (*vec)[end])
			return end;
		return start;
	}
	if (end == start)
		return end;
	int m = (start + end) / 2;
	if ((*vec)[m] > find)
		return spfind(vec, start, m, find);
	else
		return spfind(vec,  m,end, find);
}
int main()
{
	int N, p;
	cin >> N >> p;
	if (N == 1 && p > 1)
	{
		cout << 0;
		return 0;
	}
	vector<int> list(N);
	int max=-1;
	for (int i = 0;i < N;i++)
		cin >> list[i];
	sort(list.begin(),list.end());
	long long m,M;
	
	for (int i = 0;i < N;i++)
	{
		if (N - i < max)
			break;
		m = list[i];
		M = m*p;
		int find = spfind(&list, 0, list.size() - 1, M);
		
		if (find - i + 1 > max)
			max = find - i + 1;
		
	}
	cout << max;
	system("pause");
}