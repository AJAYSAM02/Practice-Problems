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
for(int i=n-1; i>=0; i--)
{
if(a[i].first == a[i-1].first)
{
string temp = a[i].second;
a[i].second = a[i-1].second;
a[i-1].second = temp;
}
cout<<a[i].second<<" "<<a[i].first<<endl;
}
cout<<"Position 5\n";
cout<<a[n-5].second<<" "<<a[n-5].first<<endl;
return 0;
}
