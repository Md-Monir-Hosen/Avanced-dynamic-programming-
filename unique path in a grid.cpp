#include<bits/stdc++.h>
using namespace std;
int UniquePathHelper(int i,int j,int r,int c,vector<vector<int>>&A,vector<vector<int>>& paths)
{
 if(i==r || j==c)
 {
     return 0;
 }
 if(A[i][j]==1)
 {
     return 0;
 }
 if(i==r-1 || j==c-1)
 {
     return 1;
 }
 if(paths[i][j]!=-1)
 {
     return paths[i][j];
 }
 return paths[i][j]=UniquePathHelper(i+1,j,r,c,A,paths)+UniquePathHelper(i,j+1,r,c,A,paths);
}
int uniquePathwithObstacles(vector<vector<int>>& A)
{
  int r=A.size();
  int c=A[0].size();
  vector<vector<int>>paths(r,vector<int>(c,-1));
  UniquePathHelper(0,0,r,c,A,paths);
}
int main()
{
    vector<vector<int> > A
        = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };

    cout << uniquePathwithObstacles(A) << " \n";
}
