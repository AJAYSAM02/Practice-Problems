#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
int t,i,n,m,u,v;
cin>>t;
while(t--)
{
cin>>n>>m;
vector <int>graph[n+1];
for(i=0;i<m;i++)
{
cin>>u>>v;
graph[u].push_back(v);
graph[v].push_back(u);
}
bool visited[n+1];
fill(visited,visited+n+1,false);
int he=0;
for(int i=1;i<=n;i++)
{
if(visited[i]) continue;
int ov=0;
stack<int>st;
st.push(i);
while(!st.empty())
{
int vv=st.top();
st.pop();
if(visited[vv])
continue;
visited[vv]=true;
if(graph[vv].size()%2==1)
{ ++ov;}
for(vector<int>::iterator it=graph[vv].begin();it!=graph[vv].end();++it)
st.push(*it);
}
he=he+ov;
if(ov==0)he=he+2;
}
cout<<he/2<<endl;
}
return 0;
}  
