#include<bits/stdc++.h>
using namespace std;
bool wordbreak(const vector<string>& wordlist,const string & word)
{
   if(word.empty())
   {
       return true;
   }
   int wordlen= word.length();
   for(int i=1;i<wordlen;i++)
   {
       string prefix=word.substr(0,i);
       if(find(wordlist.begin(),wordlist.end(),prefix)!=wordlist.end() && wordbreak(wordlist,word.substr(i)))
       {
           return true;
       }
   }
   return false;
}
int main()
{
     vector<string> wordList
        = { "mobile", "samsung",  "sam",  "sung", "man",
            "mango",  "icecream", "and",  "go",   "i",
            "like",   "ice",      "cream" };

    bool result = wordbreak(wordList, "ilikesamsung");

    cout << boolalpha << result << endl; // Output: true

    return 0;
}
