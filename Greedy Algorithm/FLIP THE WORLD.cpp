#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,m,i,j;
cin>>n>>m;
string a[n];
for(i=0;i<n;i++)
cin>>a[i];
int ans=0;
for(i=n-1;i>=0;i--)
for(j=m-1;j>=0;j--)
if(a[i][j]=='0')
{
ans++;
for(int k=0;k<=i;k++)
for(int l=0;l<=j;l++)
if(a[k][l]=='1')
a[k][l]='0';
else
a[k][l]='1';
}
cout<<ans<<"\n";
}
return 0;
}
