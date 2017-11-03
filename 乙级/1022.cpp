#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include <stack>  
using namespace std;

int main()
{
	stack<int> temp;
	int A, B, D;
	int C;
	cin >> A >> B >> D;
	C = A + B;
	if (C == 0)
	{
		cout << 0;
		return 0;
	}
	while (C != 0)
	{
		temp.push(C%D);
		C/= D;
	}
	while (!temp.empty())
	{
		cout << temp.top();
		temp.pop();
	}
		
	system("pause");
}