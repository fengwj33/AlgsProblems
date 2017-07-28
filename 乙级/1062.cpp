#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}
int main()
{
	int N1, N2, M1, M2, K;
	float min, max,temp;
	scanf_s("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
	min = (float)N1 / M1;
	max = (float)N2/M2;
	if (min > max)
		swap(min, max);
	bool flag = false;
	for (int i = 1;i < K;i++)
	{
		if (gcd(i, K) != 1) continue;
		temp = (float)i / K;
		if (temp <= min) continue;
		if (temp >= max) break;
		if (!flag)
			flag = true;
		else
			cout << " ";
		cout << i << "/" << K;
	}

	system("pause");
}