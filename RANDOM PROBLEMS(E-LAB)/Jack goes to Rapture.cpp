#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> parent(50010);
vector<int> rank1(50010);
vector<pair<int,int> > Edge[50005];
int visited[50005];
int global_var = 0;
void dfs(int x , int value , int target)
{
if(visited[x] ==1 ) return;
if(x==target)
{
cout<<(int)value<<endl;
//global_var = 1;
exit(0);
}
visited[x] = 1;
vector<pair<int,int > > :: iterator it;
for(it = Edge[x].begin() ; it<Edge[x].end() ; it++ )
{
if((*it).second > value)
{
dfs((*it).first ,(*it).second , target);
}
else
{
dfs((*it).first ,value , target);
}
}
}
void initSet(int _size){
int i;
parent.resize(_size);
rank1.resize(_size);
for(i=0;i<_size;i++){
parent[i]=i;
rank1[i]=0;
}
}
int findset(int i){
if(parent[i] !=i){
parent[i]=findset(parent[i]);
}
return parent[i];
}
int union_(int u,int v){
int r1,r2;
r1=findset(u);
r2=findset(v);
if(rank1[r1]>rank1[r2]){
parent[r2]=r1;
}
else if(rank1[r1]<rank1[r2]){
parent[r1]=r2;
}
else{
parent[r2]=r1;
rank1[r1]++;
}
}
bool isSameSet(int u,int v){
return findset(u)==findset(v);
}
class Compare_priority{
public:
bool operator()(const pair<float,pair<int,int> > &p1,const pair<float,pair<int,int> > &p2){
if(p1.first>p2.first) return true;
else
return false;
}
};
int main()
{
int N,edges,i,p,q;
float weight;
cin>>N;
initSet(N);
priority_queue< pair<float,pair<int,int> >, vector< pair<float,pair<int,int> > > ,Compare_priority > Edges;
cin>>edges;
for(i=0;i<edges;i++){
cin>>p>>q>>weight;
Edges.push(make_pair(weight,make_pair(p,q)));
}
for(i=1 ; i<=N ; i++)
visited[i] = 0;
while(!Edges.empty()){
pair<float,pair<int,int> > P=Edges.top();Edges.pop();
if(!isSameSet(P.second.first,P.second.second)){
union_(P.second.first,P.second.second);
Edge[P.second.first].push_back(make_pair(P.second.second, P.first));
Edge[P.second.second].push_back(make_pair(P.second.first,P.first));
// cout<<"("<<P.second.first<<","<<P.second.second<<")"<<endl;
// cost +=P.first;
}
}
dfs(1,-100000,N);
cout<<"NO PATH EXIST"<<endl;
}
