#include<bits/stdc++.h>
using namespace std;
int ans;
int dfs(vector<int> arr[1001],int N,int node=1)
{
int total=1;
for(auto it=arr[node].begin();it!=arr[node].end();it++)
{
int nodes_below=dfs(arr,N,*it);
total+=nodes_below;
if(nodes_below%2==0)
ans++;
}
return total;
}
int main()
{
int T;
cin>>T;
while(T--)
{
int N,M;
cin>>N>>M;
ans=0;
vector<int> arr[1001];
for(int i=0;i<M;i++)
{
int x,y;
cin>>x>>y;
arr[y].push_back(x);
}
dfs(arr,N);
cout<<ans<<endl;
}
return 0;
}
