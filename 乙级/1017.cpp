#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	char inp[1024],Q[1024]="0";
	int B;
	int  R=0;
	cin >> inp >> B;
	int i=0;
	int pq=0;
	while (inp[i] != '\0')
	{
		R = R * 10 + (inp[i++]-'0');
		Q[pq++] = R / B + '0';
		R = R % B;
	}
	Q[pq] = '\0';
	if (Q[1] != '\0'&& Q[0] == '0')
		cout << Q+sizeof(char) << " " << R;
	else
		cout << Q << " " << R;
	system("pause");
}