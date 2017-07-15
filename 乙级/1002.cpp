#include<iostream>
using namespace std;
int main()
{
  char n[101];
  string cov[10]={
    "ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  string out="";
  int ntemp;
  bool flag=false;
  int c;
  cin>>n;
  c=0;
  int i=0;
  while(n[i]!='\0')
  {
    c+=n[i]-'0';
    i++;
  }

  while(c!=0)
  {
    if(flag)
      out=" "+out;
    else
      flag=true;
    ntemp=c%10;
    c/=10;
    out=cov[ntemp]+out;
  }
  cout<<out;
}