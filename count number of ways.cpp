#include<bits/stdc++.h>
using namespace std;
int countWays(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return countWays(n-1)+countWays(n-2)+countWays(n-3);
}
int main()
{
     int dist = 4;
    cout << countWays(dist);
    return 0;
}
