#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n;
  int h[101]={
    0
  };
  int number[100];
  int out[100];
  int ol=0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>number[i];
  for(int i=0;i<n;i++)
  {
    int temp=number[i];
    int itemp;
    
    if(h[temp]==0)
    {
      itemp=temp;
      while(itemp!=1)
      {
        if(itemp % 2==0)
          itemp/=2;
        else
          itemp=(itemp*3+1)/2;
        if(itemp<=100)
          if(h[itemp]==1)
            break;
          else
            h[itemp]=1;
      }
      
    }    
  }
  for(int i=0;i<n;i++)
    if(h[number[i]]==0)
      out[ol++]=number[i];
  int et;
  for (int i = 0; i < ol; i++)
    for (int j = i; j > 0 && out[j]>out[j-1]; j--) 
      {
                et=out[j];
                out[j]=out[j-1];
                out[j-1]=et;
            }
    bool flag=false;
    for (int i = 0; i < ol; i++)
     {
    if(flag)
      cout<<" ";
    else
      flag=true;
    cout<<out[i];     
     }
  //system("pause");
}