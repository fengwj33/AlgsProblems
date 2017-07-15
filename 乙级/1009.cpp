#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  string input;
  string split[80];
  int length=0;
  getline(cin,input);
  for(int i=0;i<input.length();i++)
  {
    if(input[i]==' ')
      length++;
    else
      split[length]+=input[i];
  }
  bool flag=false;
  for(int i=length;i>=0;i--)
  {
    if(flag)
      cout<<" ";
    else
      flag=true;
    cout<<split[i];
  }
  //system("pause");
}