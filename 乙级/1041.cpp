#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<map>
using namespace std;
struct Id
{
	char a[20];
	int num;
};
int main()
{
	int n;
	cin >> n;
	int id;
	Id temp;
	map<int, Id> m;
	for (int i = 0;i < n;i++)
	{
		cin >> temp.a >> id >> temp.num;
		m[id] = temp;
	}
	cin >> n;
	for (int i = 0;i < n;i++) 
	{
		cin >> id;
		cout << m[id].a << " " << m[id].num;
		if (i != n-1)
			cout << endl;
	}
	system("pause");
}