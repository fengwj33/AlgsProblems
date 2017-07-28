#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
bool comp(const int&a, const int&b) { return a > b; }
int main()
{
	int N,o=-1;
	cin >> N;
	vector<int> li(N);
	for (int i = 0;i < N;i++)
		cin >> li[i];
	sort(li.begin(), li.end(), comp);
	for(int i=N-1;i>=0;i--)
		if (i+1 < li[i])
		{
			o = i+1;
			break;
		}
	if (o == -1)
		o = 0;
	cout << o;
	system("pause");
}