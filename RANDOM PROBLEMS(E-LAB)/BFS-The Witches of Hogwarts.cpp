#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
int t;
cin>>t;
while(t--)
{
LL n;
cin>>n;
queue <LL> q;
map <LL,int> mp;
q.push(n);
mp[n]=0;
while(!q.empty())
{
LL tmp=q.front();
q.pop();
if(tmp==1)
{
cout<<mp[tmp]<<endl;
break;
}
if(tmp>1)
{
if(mp.find(tmp-1)==mp.end())
{
mp[tmp-1]=mp[tmp]+1;
q.push(tmp-1);
}
if(tmp%2==0 && mp.find(tmp/2)==mp.end())
{
mp[tmp/2]=mp[tmp]+1;
q.push(tmp/2);
}
if(tmp%3==0 && mp.find(tmp/3)==mp.end())
{
mp[tmp/3]=mp[tmp]+1;
q.push(tmp/3);
}
}
}
}
return 0;
}
