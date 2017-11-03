#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	char A[128], B[128], out[128];
	char En[14] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
	cin >> A >> B;
	int length;
	int lengthA;
	int olength;
	for (length = 0;B[length] != '\0';length++);
	for (lengthA = 0;A[lengthA] != '\0';lengthA++);
	int a, b, f;
	f = 1;
	olength = max(length, lengthA);
	out[olength] = '\0';
	int pA = lengthA - 1;
	int pB = length - 1;
	for (int i = olength - 1;i >= 0;i--)
	{
		if (pA < 0)
			a = 0;
		else
			a = A[pA--] - '0';
		if (pB < 0)
			b = 0;
		else
			b = B[pB--] - '0';
		if (f == 1)
			out[i] = En[(a + b) % 13];
		else
		{
			if (b - a >= 0)
				out[i] = En[b - a];
			else
				out[i] = En[b - a + 10];
		}
		f *= -1;
	}
	
	cout << out;
	system("pause");
}