#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
bool vis[100001];
int c;
stack <int> stck;
void dfs(int s)
{
int p;
stck.push(s);
vis[s]=true;
while(!stck.empty())
{
p=stck.top();
stck.pop();
for(int i=0;i<adj[p].size();i++)
{
if(vis[adj[p][i]]==false)
{
stck.push(adj[p][i]);
vis[adj[p][i]]=true;
if((adj[adj[p][i]].size())-1>adj[p].size())
{
c++;
}
else if((adj[adj[p][i]].size())-1>adj[p].size()-1)
{
c++;
}
}
}
}
}
int main()
{
int n,m,x,y;
scanf("%d %d",&n,&m);
for(int i=1;i<=m;i++)
{
scanf("%d %d",&x,&y);
adj[x].push_back(y);
adj[y].push_back(x);
}
for(int i=1;i<=n;i++)
{
if(vis[i]==false)
dfs(i);
}
cout << c <<"\n";
}  
