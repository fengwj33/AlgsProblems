#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
	int K, S, G;
	int hK, hS, hG;
	int p;
	scanf("%d.%d.%d", &K, &S, &G);
	scanf("%d.%d.%d", &hK, &hS, &hG);
	p = 29 * 17 * hK + 29 * hS + hG - (29 * 17 * K + 29 * S + G);
	if (p < 0)
	{
		cout << "-";
		p *= -1;
	}
	G = p % 29;
	p /= 29;
	S = p%17;
	K = p / 17;
	cout << K << "." << S << "." << G;
		
	
	system("pause");
}