#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	float max=-1, a, b, c;
	for (int i = 0;i < N;i++)
	{
		cin >> a >> b;
		c = sqrt(a*a + b*b);
		if (c > max)
			max = c;
	}
	printf("%.2f", max);

	system("pause");
}