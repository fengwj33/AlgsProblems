#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n;
  bool h[100001];
  cin>>n;
  n++;
  for(int i=0;i<100001;i++)h[i]=true;
  for(int i=3;i<n;i+=2)
  {

    if(h[i])
    {
      
      int temp=2*i;
      while(temp<n)
      {
        
        h[temp]=false;
        temp+=i;
      }
    }
    
  }
  bool l=false;
  int c=0;
  for(int i=3;i<n;i+=2)
  {
    if(h[i])
    {
      if(l)
        c++;
      else
        l=true;
    }
    else
      l=false;
  }
  
  cout<<c;
  //system("pause");
}