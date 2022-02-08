#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
int a[100];
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int mn=a[0];
int ans=INT_MAX;
for(int j=0;j<n;j++)
{
int kk=mn-j;
int aans=0;
for(int i=0;i<n;i++)
{
int k=a[i]-kk;
aans+=k/5+k%5/2+k%5%2;
}
ans=min(ans,aans);
}
cout<<ans<<"\n";
}
return 0;
}
