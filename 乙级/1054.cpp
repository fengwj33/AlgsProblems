#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
using namespace std;
double isLegal(char* input)
{
	char temp[64];
	double td = 0;
	bool flag = true;
	sscanf_s(input, "%lf", &td);
	if (abs(td) < 0.000001)
		td = 0;
	sprintf_s(temp, "%.2lf", td);
	for (int i = 0;input[i] != '\0';i++)
	{
		if (input[i] != temp[i])
		{
			return 1001;
		}
	}
	if (td < -1000 || td>1000)
		return 1001;
	return td;
}
int main()
{
	int N;
	cin >> N;
	int c = 0;
	double sum = 0, t = 0;
	char inp[64];
	for (int i = 0;i < N;i++)
	{
		cin >> inp;
		t = isLegal(inp);
		if (t == 1001)
		{
			cout << "ERROR: "<<inp<<" is not a legal number"<<endl;
			continue;
		}
		else
		{
			sum += t;
			c++;
		}
	}
	if (c == 0)
		cout << "The average of 0 numbers is Undefined";
	else if(c==1)
		printf("The average of 1 number is %.2lf", sum);
	else
	{
		printf("The average of %d numbers is %.2lf", c, sum / c);
	}

	
	system("pause");
}