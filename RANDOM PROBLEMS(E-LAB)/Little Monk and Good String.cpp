#include<iostream>
#include<algorithm>
using namespace std;
int isVowel(char c)
{
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
{
return 1;
}
return 0;
}
int findSubstring(string s)
{
int res = 0, tc = 0, len = s.size();
for(int i=0; i<len; i++)
{
if(isVowel(s[i]))
{
tc++;
if(tc > res)
{
res = tc;
}
}
else
{
tc = 0;
}
}
return res;
}
int main()
{
string s;
cin>>s;
cout<<findSubstring(s)<<"\n";
return 0;
}
