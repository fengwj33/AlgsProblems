#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	double R1, P1, R2, P2;
	cin >> R1 >> P1 >> R2 >> P2;
	double A1, B1, A2, B2;
	A1 = R1*cos(P1);
	B1 = R1*sin(P1);
	A2 = R2*cos(P2);
	B2 = R2*sin(P2);
	double a, b;
	a = A1*A2 - B1*B2;
	b = A1*B2 + A2*B1;
	if (a + 0.01 >= 0 && a < 0)
		printf("0.00");
	else
		printf("%.2f", a);
	if (b >= 0)
		printf("+%.2fi", b);
	else if (b + 0.01 >= 0 && b < 0)
		printf("+0.00i");
	else
		printf("%.2fi", b);
	system("pause");
}