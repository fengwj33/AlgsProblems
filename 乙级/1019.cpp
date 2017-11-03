#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
bool cU(const int &a, const int &b)
{
	return a > b;
}
bool cD(const int &a, const int &b)
{
	return a < b;
}
void sp4(int inp,vector<int>* vec)
{
	vec->clear();
	for (int i = 0;i < 4;i++)
	{
		vec->push_back(inp % 10);
		inp /= 10;
	}
}
int cInt(vector<int>* vec)
{
	int r=0;
	for (int i = 0;i < 4;i++)
		r = r * 10 + (*vec)[i];
	return r;
}
int main()
{
	vector<int> temp;
	int i;
	int u, d;
	cin >> i;
	if (i == 6174)
		cout << "7641 - 1467 = 6174";
	while (i != 0 && i != 6174)
	{
		sp4(i, &temp);
		sort(temp.begin(), temp.end(), cU);
		for (int p = 0;p < 4;p++)
			cout << temp[p];
		cout << " - ";
		u = cInt(&temp);
		sort(temp.begin(), temp.end(), cD);
		for (int p = 0;p < 4;p++)
			cout << temp[p];
		d = cInt(&temp);
		i = u - d;
		cout << " = ";
		sp4(i, &temp);
		for (int p = 3;p>=0;p--)
			cout << temp[p];

		if (i != 0 && i != 6174)
			cout << endl;
	}

	system("pause");
}