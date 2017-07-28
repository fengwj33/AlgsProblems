#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include <fstream>
using namespace std;
struct sel
{
	int sc;
	int count;
	vector<char> ans;
};
bool isRight(vector<char>& a, vector<char>& b)
{
	if (a.size() != b.size())
		return false;
	for (int i = 0;i < a.size();i++)
	{
		if (find(b.begin(), b.end(), a[i]) == b.end())
			return false;
	}
	return true;

}
int main()
{
	ifstream inFile("infile.txt");
	streambuf *strmin_buf = cin.rdbuf();
	cin.rdbuf(inFile.rdbuf());

	int N, M;
	int r, c, t;
	char tempa;
	vector<sel> selist;
	sel temp;
	cin >> N >> M;
	for (int i = 0;i < M;i++)
	{
		cin >> temp.sc >> r >> c;
		temp.ans.clear();
		for (int j = 0;j < c;j++)
		{
			cin >> tempa;
			temp.ans.push_back(tempa);
		}
		temp.count = 0;
		selist.push_back(temp);
	}
	cin.get();
	vector<char> anstemp;
	int sctemp;
	for (int i = 0;i < N;i++)
	{
		sctemp = 0;
		for (int j = 0;j < M;j++)
		{
			anstemp.clear();
			while (cin.get() != '(');
			cin >> r;
			for (int k = 0;k < r;k++)
			{
				cin >> tempa;
				anstemp.push_back(tempa);
			}
			cin.get();
			if (isRight(selist[j].ans, anstemp))
				sctemp += selist[j].sc;
			else
				selist[j].count++;
		}
		cout << sctemp << endl;
	}
	int max = 0;
	vector<int> out;
	for (int i = 0;i < M;i++)
	{
		if (selist[i].count == max && max != 0)
			out.push_back(i + 1);
		else if (selist[i].count > max)
		{
			max = selist[i].count;
			out.clear();
			out.push_back(i + 1);
		}
	}
	if (max != 0)
	{
		cout << max;
		for (int i = 0;i < out.size();i++)
			cout << " " << out[i];
	}
	else
		cout << "Too simple";


	inFile.close();
	cin.rdbuf(strmin_buf);
	system("pause");
}