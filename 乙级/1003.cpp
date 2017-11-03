#include<iostream>
#include<stdlib.h>
using namespace std;
string AC(char* input)
{
    string rvalue="";
    int i=0;
    int a=0,b=0,c=0;
    int s=0;
    bool flag=false;
    int ip=-1,ia=-1,it=-1;
    while(input[i]!='\0')
    {
      
        if(input[i]=='P')
        {
          if(ip==-1)
            ip=i;
           else
        {
          flag=true;  
        break;  
           }
           if(input[i+1]=='A')
           {
             ia=i+1;
             i++;
           }  
           else
           {
          flag=true;  
        break;  
           }
        }
        else if(input[i]=='T')
        {
          if(it==-1)
            it=i;
           else
        {
          flag=true;  
        break;  
           }
        }
        else if(input[i]!='A')
        {
         flag=true;  
      break;  
       }
       i++;
    }
    if(flag) return "NO";
    a=ip;
    b=it-ia-1;
    c=i-it-1;
    if(a+a*b==c)
      return "YES";
     else
       return "NO";

}
int main()
{
  int n;
  char a[100];
  string out="";
  bool f=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      if(f) 
      out+='\n';
    else
      f=true;
        cin>>a;
        out+=AC(a);
        
    }

  cout<<out;
}