#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{

  int N,D;
  double e;
  int KZ=0, mKZ=0;
  cin >> N >> e >> D;
  if (N == 0)
  {
    cout << "0.0% 0.0%";
    return 0;
  }
  int K,C;
  double inp;
  for (int i = 0;i < N;i++)
  {
    cin >> K;
    C = 0;
    for (int j = 0;j < K;j++)
    {
      cin >> inp;
      if (inp < e)
        C++;
    }
    if (K>D && (double)C / K > 0.5)
      KZ++;
    else if ((double)C / K > 0.5)
      mKZ++;
    
  }
  printf("%.1f%% %.1f%%",(double)mKZ / N*100,(double)KZ / N*100);

}