#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
  int M, N, A, B, P,inp;
  scanf("%d%d%d%d%d", &M, &N, &A, &B, &P);
  for (int i = 0;i < M;i++)
  {
    for (int j = 0;j < N;j++)
    {
      scanf("%d", &inp);
      if (inp >= A && inp <= B)
        inp = P;
      j == 0 ? printf("%03d", inp) : printf(" %03d", inp);
    }
    cout << endl;
  }
  system("pause");
}