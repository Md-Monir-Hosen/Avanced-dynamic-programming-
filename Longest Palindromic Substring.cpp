#include<bits/stdc++.h>
using namespace std;
void printSubStr(string str,int low,int high)
{
    for(int i=low;i<high;i++)
    {
        cout<<str[i];
    }
}
int logestPalSubstr(string str)
{
    int n=str.size();
    int maxlength=1,start=0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
         int flag=1;
         for(int k=0;k<(j-i+1)/2;k++)
         {
           if(str[i+k]!=str[j-k])
           {
               flag=0;
           }
         }
         if(flag && (j-i+1)>maxlength)
         {
             start=i;
             maxlength=j-i+1;
         }
        }
    }
    cout<<"Longest Palindrome substring is: ";
    printSubStr(str,start,start+maxlength-1);
    return maxlength;
}
int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: " << logestPalSubstr(str);
    return 0;
}
