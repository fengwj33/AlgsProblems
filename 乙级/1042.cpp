#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> c(129, 0);
	char input[1001];
	gets_s(input);
	for (int i = 0;input[i] != '\0';i++)
	{
		if (input[i] >= 'a'&&input[i] <= 'z')
			c[input[i]]++;
		else if (input[i] >= 'A'&&input[i] <= 'Z')
			c[input[i]-'A'+'a']++;
	}
	char a = max_element(c.begin(), c.end()) - c.begin();
	cout << a << " " << c[a];
	system("pause");
}