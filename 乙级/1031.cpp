#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool islegal(char *inp)
{
	int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char M[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int Z = 0;
	for (int i = 0;i < 17;i++)
	{
		if (inp[i] >= '0' && inp[i] <= '9')
			Z += w[i] * (inp[i] - '0');
		else
			return false;
	}
	Z = Z % 11;
	if (inp[17] == M[Z])
		return true;
	else
		return false;
}
int main()
{
	int n;
	cin >> n;
	bool flag = false;
	bool oflag = false;
	char inp[19];
	for (int i = 0;i < n;i++)
	{
		cin >> inp;
		if (!islegal(inp))
		{
			if (oflag)
				cout << endl;
			else
				oflag = true;
			flag = true;
			cout << inp;
		}
	}
	if (!flag)
		cout << "All passed";

	system("pause");
}