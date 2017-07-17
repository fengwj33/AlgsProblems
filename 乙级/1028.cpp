#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N;
  string max, min;
  int ymax=-1, ymin;
  int le = 0;
  string inp;
  int n, y, r,t;
  int now = 2014 * 360 + 9 * 30 + 6;
  int spl = 200 * 360;
  cin >> N;
  for (int i = 0;i < N;i++)
  {
    cin >> inp;
    scanf("%d/%d/%d",&n,&y,&r);
    t = n * 360 + y * 30 + r;
    if (now-t>spl || t>now)
      continue;
    le++;
    if (ymax == -1)
    {
      ymax = ymin = t;
      max = min = inp;
    }
    else
    {
      if(t>ymax)
      {
        max = inp;
        ymax = t;
      }
      else if (t < ymin)
      {
        min = inp;
        ymin = t;
      }
    }
  }
  if(le==0)
    cout<<0;
  else
    cout << le << " " << min << " " << max;

}