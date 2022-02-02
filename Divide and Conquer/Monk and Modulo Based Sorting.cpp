#include <bits/stdc++.h>
using namespace std;
bool sorting(pair <int,int> a, pair <int,int> b)
{
if ( a.first == b.first )
return false;
else
return (a.first < b.first);
}
int main()
{
int n,k;
cin>>n>>k;
vector < pair <int,int> > a;
for(int i=0; i<n; i++)
{
int t; cin>>t;
a.push_back(make_pair(t%k,t));
}
sort (a.begin() , a.end() , sorting);
for(int i=0; i<n; i++)
cout << a[i].second << " ";
return 0;
}
