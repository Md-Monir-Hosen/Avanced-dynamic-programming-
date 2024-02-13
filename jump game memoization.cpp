#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums,int idx,int e,vector<int>& memo)
{
    if(idx==e)
    {
        return 0;
    }
    if(memo[idx]!=-1)
    {
        return memo[idx];
    }
    int min_jumps = INT_MAX-1;
    for(int j=nums[idx];j>=1;--j)
    {
        if(idx+j<=e)
        {
            min_jumps=min(min_jumps,1+jump(nums,idx+j,e,memo));

        }
    }
    return memo[idx]=min_jumps;
}
int minJumps(vector<int>& nums)
{
    vector<int>memo(nums.size(),-1);
      return jump(nums,0,nums.size(),memo);
}
int main()
{
      int n = 11;
    vector<int> arr{ 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    cout << minJumps(arr) << endl;

    return 0;
}
