#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	char err[128];
	char inp[102400];
	bool flag=false;
	gets(err);
	gets(inp);
	for(int i=0;err[i]!='\0';i++)
	{
		for(int j=0;inp[j]!='\0';j++)
		{
			if(err[i]==inp[j])
				inp[j]=1;
			else if(err[i]>='A'&&err[i]<='Z')
			{
				if((err[i]-'A'+'a')==inp[j])
					inp[j]=1;
			}
			else if(err[i]=='+')
				if(inp[j]>='A'&&inp[j]<='Z')
					inp[j]=1;
				
		}
	}
	for(int i=0;inp[i]!='\0';i++)
	{
		if(inp[i]!=1)
		{
			flag=true;
			printf("%c",inp[i]);
		}
			
	}
	if(!flag)
		cout<<endl;
}