#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	char A1[128], A2[128];
	int bad[128];
	for (int i = 0;i < 128;i++)
		bad[i] = -1;
	cin >> A1 >> A2;
	for (int i = 0;A1[i] != '\0';i++)
	{
		if (A1[i] >= 'a' && A1[i] <= 'z')
			A1[i] = A1[i] - 'a' + 'A';
		bad[A1[i]] = 2;
	}
	for (int i = 0;A2[i] != '\0';i++)
	{
		if (A2[i] >= 'a' && A2[i] <= 'z')
			A2[i] = A2[i] - 'a' + 'A';
		bad[A2[i]] = 1;
	}
	for (int i = 0;A1[i] != '\0';i++)
	{
		if (A1[i] >= 'a' && A1[i] <= 'z')
			A1[i] = A1[i] - 'a' + 'A';
		if (bad[A1[i]] == 2)
			cout << A1[i];
		bad[A1[i]] = -1;
	}
	system("pause");
}