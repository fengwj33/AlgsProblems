#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	char a[60] = "3485djDkxh4hhGE";
	char b[60] = "2984akDfkkkkggEdsb";
	char c[60] = "s&hgsfdk";
	char d[60] = "d&Hyscvnm";
	//cin >> a >> b >> c >> d;
	string s[8] = { "","MON","TUE","WED","THU","FRI","SAT","SUN" };
	int day=-1, hh=-1, mm=-1;
	int i=0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G')
		{
			day= a[i] - 'A' + 1;
			i++;
			break;
		}
		i++;
	}
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N')|| (a[i] >= '0' && a[i] <= '9')))
		{
			if (a[i] >= 'A' && a[i] <= 'N')
				hh = 10 + a[i] - 'A';
			else
				hh = a[i] - '0';
			break;
		}
		i++;
	}
	i = 0;
	while (c[i] != '\0' && d[i] != '\0')
	{
		if (c[i] == d[i] &&(( c[i] >= 'a' && c[i] <= 'z')|| (c[i] >= 'A' && c[i] <= 'Z')))
		{
			mm = i;
			break;
		}
		i++;
	}

	cout << s[day] << " ";
	if (hh < 10)
		cout << "0" << hh<<":";
	else
		cout << hh << ":";
	if (mm < 10)
		cout << "0" << mm ;
	else
		cout << mm;
	system("pause");
}