#include <iostream>
using namespace std;
int main()
{
int t;
cin >>t;
while(t--)
{
int count=0,i=0;
string s,r;
cin >>s>>r;
int ls=s.length();
int lr=r.length();
while(i<ls && i<lr)
{
if(s[i]==r[i])
count++;
i++;
}
cout<<count<<endl;
}
return 0;
}
