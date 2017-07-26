#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> sc(1024, 0);
	int a, b, c,max;
	for (int i = 0;i < N;i++)
	{
		scanf_s("%d-%d %d", &a, &b, &c);
		sc[a] += c;
	}
	max = max_element(sc.begin(), sc.end()) - sc.begin();
	cout << max << " " << sc[max];
	system("pause");
}