#include<bits/stdc++.h>
using namespace std;
int countWays(int n)
{
    int res[n+1];
    res[0]=1;
    res[1]=1;
    res[2]=1;
    res[3]=2;
    for(int i=4;i<n;i++)
    {
        res[i]=res[i-1]+res[i-3]+res[i-4];
    }
    return res[n];
}
int main()
{
    int n = 10;
    cout << countWays(n);
    return 0;
}
