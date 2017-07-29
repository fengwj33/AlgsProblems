#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	long long a, b, c;
	int p = 0, sym = 1;
	string out="";
	cin >> a>>b;
	c = a + b;
	if (c < 0)
	{
		sym = -1;
		c *= -1;
	}
	while (c!=0)
	{
		if (p == 3)
		{
			out = "," + out;
			p = 0;
		}
		out= (char)(c % 10+'0')+out;
		c /= 10;
		p++;
	}
	if (sym == -1)cout << "-";
	if (out == "") cout << 0;
	cout << out;
	system("pause");
}