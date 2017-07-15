#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string lm,lh;
  string hm,hh;
  string a,b;
  int c;
  int h,l;
  cin>>a>>b>>c;
  lm=a;
  hm=a;
  lh=b;
  hh=b;
  h=c;
  l=c;
  for(int i=1;i<n;i++)
  {
    cin>>a>>b>>c;
    if(c<l)
    {
      l=c;
      lm=a;
      lh=b;
    }
    if(c>h)
    {
      h=c;
      hm=a;
      hh=b;
    }
  }
  cout<<hm<<" "<<hh<<endl<<lm<<" "<<lh;
}