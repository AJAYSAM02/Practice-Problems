#include<bits/stdc++.h>
using namespace std;
int n, m;
queue<int> q;
int go_immediately_to[110], dist[110];
bool vis[110];
bool isValid(int node)
{
if(node < 1 || node > 100 || vis[node])
return false;
else
return true;
}
int BFS(int source)
{
memset(vis, 0, sizeof(vis));
while(!q.empty())
q.pop();
vis[source] = 1;
q.push(source);
dist[source] = 0;
while(!q.empty())
{
int current_node = q.front();
q.pop();
for(int i = 1; i<=6; i++)
{
int next_node = go_immediately_to[current_node+i];
if(isValid(next_node))
{
q.push(next_node);
vis[next_node] = 1;
dist[next_node] = dist[current_node]+1;
}
}
}
if(!vis[100])
return -1;
else
return dist[100];
}
int main()
{
int i, j, cs, t, u, v;
cin >> t;
for(cs = 1; cs<=t; cs++)
{
cin >> n;
for(i = 1; i<=100; i++)
go_immediately_to[i] = i;
for(i = 1; i<=n; i++)
{
cin >> u >> v;
go_immediately_to[u] = v;
}
cin >> m;
for(i = 1; i<=m; i++)
{
cin >> u >> v;
go_immediately_to[u] = v;
}
cout << BFS(1) << endl;
}
}
