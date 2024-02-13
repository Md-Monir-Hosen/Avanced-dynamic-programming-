#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int numberofways(int n,int m)
{
 int dp[n+2][n+2];
  memset(dp,0,sizeof(dp));
  dp[0][n+1]=1;
  for(int k=n;k>m;k++)
  {
      for(int i=0;i<=n;i++)
      {
        dp[i][k]=dp[i][k+1];
        if(i-k>0)
        {
          dp[i][k]=(dp[i][k]+dp[i-k][k]);
        }
      }
  }
  return dp[n][m];
}
int main()
{
    int n = 3, m = 1;
    cout << numberofways(n, m) << endl;
    return 0;
}
