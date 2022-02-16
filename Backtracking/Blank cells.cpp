#include <bits/stdc++.h>
using namespace std;
struct cell
{
int x,y;
cell(){}
cell(int a,int b)
{x=a,y=b;}
};
int valid(int x,int y,int n)
{
return (x>0 && x<=n && y>0 && y<=n);
}
int bfs(int n)
{
int g[n+1][n+1];
int s[2],d[2],x,y;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
{
cin>>g[i][j];
if(g[i][j]==1)
s[0]=i,s[1]=j;
else if(g[i][j]==2)
d[0]=i,d[1]=j;
}
queue<cell> q;
cell source=cell(s[0],s[1]);
q.push(source);
bool visited[n+1][n+1];
for(int i=1;i<=n;i++)
for(int j=1;j<=1;j++)
visited[i][j]=0;
visited[source.x][source.y]=1;
cell t;
while(!q.empty())
{
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
t=q.front(),q.pop();
if(t.x==d[0] && t.y==d[1])
return 1;
for(int i=0;i<4;i++)
{
x=t.x+dx[i];
y=t.y+dy[i];
if((g[x][y]==3 || g[x][y]==2) && valid(x,y,n) && !visited[x][y])
q.push(cell(x,y)),visited[x][y]=1;
}
}
return 0;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<bfs(n)<<endl;
}
}
