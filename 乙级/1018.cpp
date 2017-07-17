#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, w=0, p=0, l=0;
	char A, B;
	int AC=0, AJ=0, AB = 0;
	int BC = 0, BJ = 0, BB = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> A >> B;
		if (A == B)
			p++;
		else if ((A == 'C'&&B == 'J') || (A == 'J'&&B == 'B') || (A == 'B'&&B == 'C'))
		{
			w++;
			if (A == 'C')
				AC++;
			if (A == 'J')
				AJ++;
			if (A == 'B')
				AB++;
		}
		else
		{
			l++;
			if (B == 'C')
				BC++;
			if (B == 'J')
				BJ++;
			if (B == 'B')
				BB++;
		}
	}
	cout << w << " " << p << " " << l << endl;
	cout << l << " " << p << " " << w << endl;
	if (AB >= AC && AB >= AJ)
		cout << "B ";
	else if (AC >= AB && AC >= AJ)
		cout << "C ";
	else
		cout << "J ";
	if (BB >= BC && BB >= BJ)
		cout << "B";
	else if (BC >= BB && BC >= BJ)
		cout << "C";
	else
		cout << "J";
	system("pause");
}