#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector < pair<int,string> > a;
for(int i=0; i<n; i++)
{
string x;
int y;
cin>>x>>y;
a.push_back(make_pair(y,x));
}
sort(a.begin(),a.end());
cout<<"\nAfter Sorting\nName ID\n";
for(int i=0; i<n; i++)
cout<<a[i].second<<" "<<a[i].first<<endl;
return 0;
}
