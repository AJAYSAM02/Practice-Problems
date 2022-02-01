#include <iostream>
using namespace std;
int main()
{
string s;
cin >> s;
for(int i=0; i<s.length(); i++)
if(s[i]=='?')
{
if(s[i+1]=='a' || s[i-1]=='a')
s[i] = 'b';
else
s[i] = 'a';
}
cout << s;
return 0;
}
