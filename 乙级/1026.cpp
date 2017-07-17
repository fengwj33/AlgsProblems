#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	int C1, C2;
	int c;
	int hh, mm, ss;
	cin >> C1 >> C2;
	c = C2 - C1;
	if (c % 100 >=45)
		c += 100;
	c /= 100;
	ss = c % 60;
	c /= 60;
	mm = c % 60;
	c /= 60;
	hh = c;
	c /= 60;
	printf("%02d:%02d:%02d", hh, mm, ss);

	system("pause");
}