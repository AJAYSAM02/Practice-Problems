#include<bits/stdc++.h>
using namespace std;
int a;
long int b;
bool vis[1002];
int lucky[1002];
int main()
{cin>>a>>b;
for(int i=0;i<1002;i++)
lucky[i]=-1;
vector<int>g[1002];
int u,v;
for(int i=0;i<b;i++)
{
cin>>u>>v;
g[u].push_back(v);
g[v].push_back(u);
}
lucky[0]=0;
for(int i=0;i<1002;i++)
vis[i]=false;
queue<int>q;
q.push(0);
vis[0]=true;
while(!q.empty())
{
int w=q.front();
q.pop();
for(int i=0;i<g[w].size();i++)
{ if(!vis[g[w][i]])
{ q.push(g[w][i]);
vis[g[w][i]]=true;
lucky[g[w][i]]=lucky[w]+1;
}
}
}
for(int i=1;i<a;i++)
cout<<lucky[i]<<endl;
return 0;
}
