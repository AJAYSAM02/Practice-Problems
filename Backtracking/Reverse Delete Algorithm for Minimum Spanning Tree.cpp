#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int root(int a[],int x){
while(a[x]!=x){
a[x]=a[a[x]];
x=a[x];
}
return x;
}
bool f(pair<int,pair<int,int> > p1,pair<int,pair<int,int> > p2){
return p1.first<p2.first;
}
int main()
{
//code
int t;
cin>>t;
while(t--){
int n,e;
cin>>n>>e;
pair<int,pair<int,int> > a[e];
for(int i=0;i<e;i++){
int x,y,d;
cin>>x>>y>>d;
a[i]=make_pair(d,make_pair(x,y));
}
sort(a,a+e,f);
int b[n];
for(int i=0;i<n;i++){
b[i]=i;
}
int ans=0;
for(int i=0;i<e;i++){
pair<int,pair<int,int> > p=a[i];
int d=p.first;
int x=p.second.first,y=p.second.second;
if(root(b,x)!=root(b,y)){
b[root(b,x)]=b[root(b,y)];
ans+=d;
}
}
cout<<ans<<endl;
}
return 0;
}
