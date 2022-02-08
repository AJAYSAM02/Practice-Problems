#include<bits/stdc++.h>
using namespace std;
int main()
{
int T; cin>>T;
for(int tt=1; tt<=T; tt++)
{
int n; cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
int ans[n][2];
ans[0][0] = 0; ans[0][1] = a[0];
ans[1][0] = a[0]; ans[1][1] = a[1];
for(int i = 2;i<n;i++)
{
ans[i][0] = max(ans[i-1][0],ans[i-1][1]);
ans[i][1] = a[i] + ans[i-1][0];
}
cout<<"Case "<<tt<<": "<<max(ans[n-1][0],ans[n-1][1])<<"\n";
}
return 0;
}
