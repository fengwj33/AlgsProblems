#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	double c = 0, t;
	for (long long i = 0;i < N;i++)
	{
		cin >> t;
		c += (N - i)*(i + 1)*t;
	}
	printf("%.2lf", c);
	system("pause");
}