#include <bits/stdc++.h>
#include <string.h>
using namespace std;
bool isPalindrome(string s)
{
string r = s;
reverse(r.begin(),r.end());
if(r == s) return true;
else return false;
}
int main()
{
string s;
cin>>s;
int n = s.length(), ans = 0;
for(int i=0; i<n; i++)
{
for(int j=1; j<(n-i+1); j++)
{
string r = s.substr(i,j);
if(isPalindrome(r))
ans += 1;
}
}
cout << ans;
return 0;
}
