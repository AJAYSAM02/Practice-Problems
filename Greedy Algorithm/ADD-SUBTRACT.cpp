#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define Sort(x) sort(all(x));
using namespace std;
void solve()
{
int n,i,x,k,res=INT_MAX,cost=0,minc=INT_MAX,l,j;
cin>>n>>k;
vi vec;
for(i=0;i<n;i++)
{
cin>>x; vec.pb(x);
}
Sort(vec);
for(i=0;i<=n-k;i++)
{
minc=INT_MAX;
for(j=i;j<i+k;j++)
{
for(l=i;l<i+k;l++)
{
if(vec[l]>vec[j]) cost+=(vec[l]-vec[j])*5;
else if(vec[l]<vec[j]) cost+=(vec[j]-vec[l])*3;
}
minc=min(cost, minc);
cost=0;
}
res=min(res, minc);
minc=INT_MAX;
}
cout<<res<<"\n";
}
int main()
{
int t;
cin>>t;
while(t--)
solve();
}
