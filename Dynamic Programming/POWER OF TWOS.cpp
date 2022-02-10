#include<bits/stdc++.h>
using namespace std;
vector<int>vec(1000001,0);
int main()
{
int i,j;
for(i=1;i<1000001;i++)
for(j=i*2;j<1000001;j+=i)
vec[j]++;
for(i=1;i<1000001;i++)
vec[i]+=vec[i-1];
int t;
cin>>t;
while(t--)
{
int n; cin>>n;
cout<<vec[n]<<"\n";
}
return 0;
}
