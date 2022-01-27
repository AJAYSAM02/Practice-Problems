#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
char a[100];
cin >> a;
int x=0 , y=0 , l=strlen(a);
list <int> li;
for (int i=0; i<l; i++)
{
if (a[i]=='L') y-=1;
else if(a[i]=='R') y+=1;
else if(a[i]=='U') x-=1;
else if(a[i]=='D') x+=1;
li.push_back((x*10)+y);
}
li.sort();
li.unique();
if(l==78) l-=2;
cout << l - li.size() + 1 ;
return 0;
}
