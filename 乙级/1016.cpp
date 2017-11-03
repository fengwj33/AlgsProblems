#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long A, B;
	int  DA, DB;
	cin >> A >> DA >> B >> DB;
	int TA=0, TB=0;
	int t;
	while (A != 0)
	{
		t = A % 10;
		A /= 10;
		if (t == DA)
			TA = TA * 10 + DA;
	}
	while (B != 0)
	{
		t = B % 10;
		B /= 10;
		if (t == DB)
			TB = TB * 10 + DB;
	}
	cout << TA + TB;
	system("pause");
}