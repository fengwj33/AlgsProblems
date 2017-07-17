#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int symM, bDM, symE;
	int aDM[10240];
	int l=0;
	int E=0;
	char inp[10240];
	cin >> inp;
	if (inp[0] == '-')
		symM = -1;
	else
		symM = 1;
	bDM = inp[1] - '0';
	int i=3;
	int p = 0;
	while (inp[i] != 'E')
	{
		aDM[p++] = inp[i++] - '0';
		l++;
	}
		
	aDM[p] = -1;
	i++;
	if (inp[i++] == '-')
		symE = -1;
	else
		symE = 1;
	while (inp[i] != '\0')
		E = E * 10 + inp[i++] - '0';


	

	if (symM == -1)
		cout << "-";
	if (symE == 1 || E==0)
	{
		cout << bDM;
		if (l <= E)
		{
			for (int i = 0;aDM[i] != -1;i++)
				cout << aDM[i];
			for (int i = 0;i < E - l;i++)
				cout << 0;
		}
		else
		{
			for (int i = 0;i<E;i++)
				cout << aDM[i];
			cout << ".";
			for (int i = E;i<l;i++)
				cout << aDM[i];
		}
	}
	else
	{
		cout << "0.";
		for (int i = 0;i < E - 1;i++)
			cout << 0;
		cout << bDM;
		for (int i = 0;aDM[i] != -1;i++)
			cout << aDM[i];
	}

	system("pause");
}