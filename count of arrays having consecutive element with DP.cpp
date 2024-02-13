#include<bits/stdc++.h>
#define MAXN 109
using namespace std;
int countarray(int n,int k,int x)
{
  int dp[MAXN]={0};
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<n;i++)
  {
   dp[i]=(k-2)*dp[i-1]+(k-1)*dp[i-2];
  }
  return (x==1) ? (k-1)*dp[n-2] : dp[n-1];
}
int main()
{
     int n = 4, k = 3, x = 2;
    cout << countarray(n, k, x) << endl;
    return 0;
}
