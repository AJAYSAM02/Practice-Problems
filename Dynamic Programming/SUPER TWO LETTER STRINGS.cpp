#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[1000][2];
int solve(int N , int P)
{
dp[1][0] = 1;
dp[1][1] = 0;
for(int i=2; i<=N; i++)
{
dp[i][0] = dp[i][1] = 0;
dp[i][0] = (dp[i-1][1]+dp[i-1][0])%mod;
for(int j=1; j<P; j++)
{
if(i-j<=0) break;
dp[i][1] += dp[i-j][0];
if(dp[i][1] >= mod) dp[i][1] -= mod;
}
}
return ((dp[N][0]+dp[N][1])%mod);
}
int main()
{
int t; cin>>t;
while(t--)
{
int n,p;
cin>>n>>p;
cout<<solve(n,p)<<endl;
}
return 0;
}
