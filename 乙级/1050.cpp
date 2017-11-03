#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
bool comp(const int&a, const int&b)
{
	return a > b;
}
int main()
{
	int N;
	int m, n;
	int px[] = { 1,0,-1,0 };
	int py[] = { 0,1,0,-1 };
	int di=0,nx=0,ny=0;
	cin >>N;
	n = sqrt(N);
	while (N % n != 0)
		n--;
	m = N / n;
	vector<vector<int>> map(m, vector<int>(n, -1));
	vector<int> input(N);
	for (int i = 0;i < N;i++)
		cin >> input[i];
	sort(input.begin(), input.end(),comp);

	for (int i = 0;i < N;i++)
	{
		map[ny][nx] = input[i];
		if (nx + px[di] >= n || nx + px[di] < 0 || ny + py[di] >= m || ny + py[di] < 0)
			di = (di + 1) % 4;
		else if(map[ny+py[di]][nx+px[di]]!=-1)
			di = (di + 1) % 4;
		ny += py[di];
		nx += px[di];

	}
	for (int y = 0;y < m;y++)
	{
		for (int x = 0;x < n;x++)
		{
			cout << map[y][x];
			if (x != n - 1)
				cout <<" ";
		}
		if (y != m - 1)
			cout << endl;
	}
	system("pause");
}