#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int list[1024];
	int a[6];
	int t;
	int t2 = 1;
	int t4=0;
	bool ex[6] = { false, false, false, false, false, false };
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> list[i];
	a[1] = a[2] = a[3]=a[4]=a[5] = 0;
	float a4 = 0;
	for (int i = 0;i < n;i++)
	{
		t = list[i] % 5;
		if (list[i] % 10 == 0)
		{
			a[1] += list[i];
			ex[1] = true;
		}
			
		if (t == 1)
		{
			a[2] += t2*list[i];
			t2 *= -1;
			ex[2] = true;
		}
		else if (t == 2)
		{
			a[3]++;
			ex[3] = true;
		}
		else if (t == 3)
		{
			t4++;
			a4 += list[i];
			ex[4] = true;
		}
		else if (t == 4)
		{
			if (list[i] > a[5])
				a[5] = list[i];
			ex[5] = true;
		}
	}
	if(t4!=0)
		a4 /= t4;
	for (int i = 1;i <= 5;i++)
	{
		if (i == 4)
		{
			if (ex[4] == false)
				cout << "N ";
			else	
				printf("%.1f ", a4);
			continue;
		}
		if (ex[i])
			cout << a[i];
		else
			cout << "N";
		if (i != 5)
			cout << " ";
	}
	system("pause");
}