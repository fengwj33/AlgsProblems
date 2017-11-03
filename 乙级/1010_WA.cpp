#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  char inp[40960];
  int list[10240];
  int p = 0;
  bool flag = false;
  list[0] = 0;
  gets(inp);
  int ms = 1;
  for (int i = 0;inp[i] != '\0';i++)
  {
    if (inp[i] == ' ')
    {
      list[p] *= ms;
      p++;
      list[p] = 0;
      ms = 1;
      continue;
    }
    if (inp[i] == '-')
    {
      ms = -1;
      continue;
    }
    list[p] = list[p] * 10 + (inp[i] - '0');
  }
  list[p] *= ms;
  if (p <2)
  {
    cout << "0 0";
    return 0;
  }
    
  
  int a, b;
  for (int i = 0;i +1<=p;i += 2)
  {
    a = list[i];
    b = list[i + 1];
    if (b != 0)
    {
      if (flag)
        cout << " ";
      else
        flag = true;
      cout << a*b << " " << b - 1;
    }
    else
    {
      if (flag==false)
      {
        cout << "0 0";
      }
      
      //break;
    }
  }

}