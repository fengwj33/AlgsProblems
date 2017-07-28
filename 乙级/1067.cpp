#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
	int N;
	string cur,temp;
	cin >> cur >> N;
	cin.get();
	while (true)
	{
		getline(cin, temp);
		if (temp == "#")break;
		if (temp != cur)
			cout << "Wrong password: " << temp<<endl;
		if (temp == cur)
		{
			cout << "Welcome in";
			break;
		}
		N--;
		if (N == 0)
		{
			cout << "Account locked";
			break;
		}
		
	}
	system("pause");
}