#include<iostream>
#include<stdlib.h>
using namespace std;
int rev(int *r,int s,int e)
{
  int t;
  for(int i=s,j=e;i<j;i++,j--)
  {
    t=r[i];
    r[i]=r[j];
    r[j]=t;    
  }
}
int main()
{
  int n;
  int r[100];
  int m;
  cin>>n>>m;
  m=m % n;
  for(int i=0;i<n;i++)
    cin>>r[i];
  rev(r,0,n-1);
  rev(r,0,m-1);
  rev(r,m,n-1);
  bool flag=false;
  for(int i=0;i<n;i++)
  {
    if(flag)
      cout<<" ";
    else
      flag=true;
    cout<<r[i];
  }
    
  //system("pause");
}