#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<int> arr[100],bool mark[100],int N,int node,int first_node)
{
if(node!=first_node)
mark[node]=1;
for(auto it=arr[node].begin();it!=arr[node].end();it++)
if(!mark[*it] && dfs(arr,mark,N,*it,-1))
return 1;
for(int i=0;i<N;i++)
if(!mark[i])
{
mark[node]=0;
return 0;
}
mark[node]=0;
return 1;
}
int main()
{
int T;
cin>>T;
while(T--)
{
int N;
cin>>N;
string str[N];
for(int i=0;i<N;i++)
cin>>str[i];
vector<int> arr[100];
for(int i=0;i<N;i++)
{
int l=str[i].size()-1;
for(int j=0;j<N;j++)
if(i!=j && str[i][l]==str[j][0])
arr[i].push_back(j);
}
if(N==1 && str[0][0]==str[0][str[0].size()-1])
{
cout<<"1"<<endl;
goto label;
}
for(int i=0;i<N;i++)
{
bool mark[100]={0};
if(dfs(arr,mark,N,i,i))
{
cout<<"1"<<endl;
goto label;
}
}
cout<<"0"<<endl;
label:;
}
}
