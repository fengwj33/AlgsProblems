#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
vector<vector<long> >pic;
int px[] = { -1,0,1,-1,1,-1,0,1 };
int py[] = { -1,-1,-1,0,0,1,1,1 };
int M, N, TOL;
bool _j(int i, int j)
{
	for (int k = 0;k < 8;k++)
		if (abs(pic[i + py[k]][j + px[k]] - pic[i][j]) <= TOL && i + py[k] > 0 && i + py[k] <= N &&j + px[k] > 0 && j + px[k] <= M)
			return false;
	return true;
			
}
int main()
{
	FILE *stream;
	fopen_s(&stream,"infile.txt", "r");

	

	
	fscanf_s(stream,"%d %d %d\n", &M, &N, &TOL);
	pic = vector<vector<long> >(N + 2, vector<long>(M + 2, -65535));
	vector<vector<long> >p(N + 2, vector<long>(M + 2, 0));
	map<long, int> color;
	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= M;j++)
		{
			fscanf_s(stream, "%d", &pic[i][j]);
			color[pic[i][j]]++;
		}
			
	}
	int x = -1, y = -1,val=-1;
	bool flag = false;
	for (int i = 1;i <= N;i++)
		for (int j = 1;j <= M;j++)
			if (_j(i, j))
				p[i][j] = 1;
			else
				p[i][j] = 0;

	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= M;j++)
		{
			if (p[i][j] == 1 && color[pic[i][j]]==1)
			{
				if (x == -1)
				{
					x = j;y = i;
					val = pic[i][j];
				}
				else
				{
					val = -1;
					flag = true;
					break;
				}
			}
		}
		if (flag)
			break;
	}
	/*
	for (int i = 1;i <= N;i++)
	{
		for (int j = 1;j <= M;j++)
		{
			cout << p[i][j]<<'\t';
		}
		cout << endl;
	}*/


	if (flag)
		cout << "Not Unique";
	else if (x == -1)
		cout << "Not Exist";
	else
		cout << "(" << x << ", " << y << "): " << pic[y][x];
	system("pause");
}