#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3
int Min(int x,int y,int z)
{
    if(x<y)
    {
        return (x<z) ? x : z ;
    }
    else
    {
        return (y<z) ? y : z ;
    }
}
int minCostMemoized(int cost[R][C],int m,int n,int memo[R][C])
{
    if(n<0 || m<0)
    {
        return INT_MAX;
    }
    else if(m==0 || n==0 )
    {
        return cost[m][n];
    }
    if(memo[m][n]!= -1)
    {
        return memo[m][n];
    }
    else
    {
        return memo[m][n]=cost[m][n]+Min(minCostMemoized(cost,m-1,n-1,memo),minCostMemoized(cost,m-1,n,memo),minCostMemoized(cost,m,n-1,memo));

    }

}
int minCost(int cost[R][C],int m,int n)
{
    int memo[R][C];
    memset(memo,-1,sizeof(memo));
    return minCostMemoized(cost,m,n,memo);
}
int main()
{
    int cost[R][C]
        = { { 1, 2, 3 }, { 4, 8, 2 }, { 1, 5, 3 } };

    cout << minCost(cost, 2, 2) << endl;

    return 0;
}


