#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector < pair<string,int> > a;
for(int i=0; i<n; i++)
{
string x;
int y;
cin>>x>>y;
a.push_back(make_pair(x,y));
}
sort(a.begin(),a.end());
cout<<"\nAfter sorting\nName ID\n";
for(int i=0; i<n; i++)
cout<<a[i].first<<" "<<a[i].second<<endl;
return 0;
}
