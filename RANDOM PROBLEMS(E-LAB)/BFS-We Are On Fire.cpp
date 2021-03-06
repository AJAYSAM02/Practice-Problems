#include<bits/stdc++.h>
using namespace std;
int ar[1001][1001];
bool vis[1001][1001];
int n, m;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int dfs(int i , int j )
{
if(i<1|| i>n || j<1 || j>m)
return 0;
if(vis[i][j])
return 0;
if(ar[i][j]==0)
return 0;
int cnt = 1;
vis[i][j] = true;
for(int k=0;k<4;k++)
cnt+=dfs(i+dx[k],j+dy[k]);
return cnt;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int q,x,y;
int cnt = 0;
cin>>n>>m>>q;
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
{
cin>>ar[i][j];
if(ar[i][j]==1)
cnt++;
vis[i][j] = false;
}
for(int i=1;i<=q;i++)
{
cin>>x>>y;
if(ar[x][y]==0 || vis[x][y])
goto p;
cnt-=dfs(x,y);
p:
cout<<cnt<<'\n';
}
}
