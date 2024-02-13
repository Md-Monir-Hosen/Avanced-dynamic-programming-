#include<bits/stdc++.h>
using namespace std;
int printcountdp(int dist)
{
    int cnt[dist+1];
    cnt[0]=1;
    if(dist>=1)
    {
        cnt[1]=1;
    }
    if(dist>=2)
    {
        cnt[2]=2;
    }
    for(int i=3;i<dist;i++)
    {
        cnt[i]=cnt[i-1]+cnt[i-2]+cnt[i-3];
    }
return cnt[dist];
}
int main()
{
     int dist = 4;
    cout << printcountdp(dist);
    return 0;
}
