#include<iostream>
using namespace std;
int main()
{
  int c,n;
  cin>>n;
  c=0;
  while(n!=1)
  {
    if(n % 2==0)
      n/=2;
    else
      n=(3*n+1)/2;
    c++;
  }
  cout<<c;
}