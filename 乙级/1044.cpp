#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;
int strFind(string* strlist,int length, string f)
{
	for (int i = 0;i < length;i++)
	{
		if (f.compare(strlist[i]) == 0)
			return i;
	}
	return -1;
}
int str2int(string& str)
{
	int r = 0;
	for (int i = 0;i < str.length();i++)
		r=r*10+str.c_str()[i]-'0';
	return r;
}
int main()
{
	string MN[] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
	string MNH[] = { "","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
	int N;
	cin >> N;
	cin.get();
	string temp;
	string hp,lp;
	for (int i = 0;i < N;i++)
	{
		getline(cin, temp);
		if (temp.c_str()[0] >= '0'&& temp.c_str()[0] <= '9')
		{
			int t = str2int(temp);
			int l = t % 13;
			t /= 13;
			if (t != 0)
			{
				cout << MNH[t];
				if (l != 0)
					cout << " ";
			}
			if (l != 0 || (t == 0 && l == 0))
				cout << MN[l];

		}
		else
		{
			int m = temp.find_first_of(" ");
			if (m == -1)
			{
				hp = "";
				lp = temp;
			}
			else
			{
				hp = temp.substr(0, m);
				lp = temp.substr(m + 1, temp.length() - m - 1);
			}
			int tn=0;
			if (hp.compare("") != 0)
			{
				tn += strFind(MNH, 13, hp)*13;
			}
			int tl = strFind(MNH, 13, lp);
			if (tl != -1)
			{
				tn += tl * 13;
			}
			else
			{
				tn += strFind(MN, 13, lp);
			}
			cout << tn;

		}
		if (i != N - 1)
			cout << endl;



	}
	system("pause");
}