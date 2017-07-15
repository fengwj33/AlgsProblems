#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  int n;
  long long a[15], b[15],c[15];
  cin >> n;
  for (int i = 1;i <= n;i++)
  {
    cin >> a[i] >> b[i] >> c[i];

  }
  for (int i = 1;i <= n;i++)
  {
    if (a[i] + b[i] > c[i])
      cout << "Case #" << i << ": true";
    else
      cout << "Case #" << i << ": false";
    if (i != n)
      cout << endl;
  }

}