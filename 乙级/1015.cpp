#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include <fstream> 
using namespace std;
struct stu
{
  int id;
  int d;
  int c;
};
bool comp(const stu &a, const stu &b)
{
  int az,bz;
  az=(a.d + a.c);
  bz=(b.d + b.c);
  if (az != bz)
    return az > bz;
  if (a.d != b.d)
    return a.d > b.d;
  return a.id < b.id;
}
int main()
{

  vector<stu> L1;
  vector<stu> L2;
  vector<stu> L3;
  vector<stu> L4;
  int N, L, H;
  int c=0;
  cin >> N >> L >> H;
  stu temp = { 0,0,0 };
  for (int i = 0;i < N;i++)
  {
    scanf("%d%d%d",&temp.id,&temp.d,&temp.c);  
    if (temp.d < L || temp.c < L)
      continue;
    c++;
    if (temp.d >= H&&temp.c >= H)
      L1.push_back(temp);
    else if (temp.d >= H)
      L2.push_back(temp);
    else if (temp.d >= temp.c)
      L3.push_back(temp);
    else
      L4.push_back(temp);
  }
  sort(L1.begin(), L1.end(), comp);
  sort(L2.begin(), L2.end(), comp);
  sort(L3.begin(), L3.end(), comp);
  sort(L4.begin(), L4.end(), comp);
  cout << c<<endl;
  for (int i = 0;i < L1.size();i++)
    printf("%d %d %d\n",L1[i].id,L1[i].d,L1[i].c);
  for (int i = 0;i < L2.size();i++)
    printf("%d %d %d\n",L2[i].id,L2[i].d,L2[i].c);
  for (int i = 0;i < L3.size();i++)
    printf("%d %d %d\n",L3[i].id,L3[i].d,L3[i].c);
  for (int i = 0;i < L4.size();i++)
  {
    printf("%d %d %d",L4[i].id,L4[i].d,L4[i].c);
    if (i != L4.size() - 1)
      cout << endl;
  }

}