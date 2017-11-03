#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  int p[10] = { 0 };
  char inp[1024];
  int i=0;
  cin >> inp;
  bool flag = false;
  while (inp[i] != '\0')
  {
    if (!flag)
    {
      if (inp[i] == '0')
      {
        i++;
        continue;
      }
      else
        flag = true;
    }
    p[inp[i] - '0']++;
    i++;
  }
  flag = false;
  for (int i = 0;i <= 9;i++)
  {
    
    if (p[i] != 0)
    {
      if (!flag)
        flag = true;
      else
        cout << endl;
      cout << i << ":" << p[i];
    }
      
  }

}