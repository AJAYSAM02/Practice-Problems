#include "bits/stdc++.h"
using namespace std;
const int maxn=17;
int n;
int arr[maxn][maxn];
int dp[1<<maxn][maxn];
int HamiltonianCycle(int mask,int pre){
int ans=0;
if(dp[mask][pre]!=-1)return dp[mask][pre];
for(int j=1;j<=n;j++){
if(!(mask&(1<<j))&&arr[pre][j]){
int ret=1+HamiltonianCycle(mask|(1<<j),j);
ans=max(ret,ans);
}
}
return dp[mask][pre]=ans;
}
int main(){
//freopen("t.txt","r",stdin);
int m,u,v,t;
for(scanf("%d",&t);t--;){
scanf("%d%d",&n,&m);
memset(arr,0,sizeof arr);
memset(dp,-1,sizeof dp);
for(int i=1;i<=n;i++)arr[i][i]=1;
for(int i=0;i<m;i++){
scanf("%d%d",&u,&v);
arr[u][v]=1;
arr[v][u]=1;
}
for(int i=1;i<=n;i++){
printf("%d ",HamiltonianCycle(1<<i,i));
}
puts("");
}
}
