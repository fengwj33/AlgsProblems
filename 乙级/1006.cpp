#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a,b,c;
  c=n % 10;
  n/=10;
  b=n % 10;
  n/=10;
  a=n % 10;
  n/=10;
  for(int i=0;i<a;i++)
    cout<<"B";
  for(int i=0;i<b;i++)
    cout<<"S";
  for(int i=0;i<c;i++)
    cout<<i+1;
  //system("pause");
}