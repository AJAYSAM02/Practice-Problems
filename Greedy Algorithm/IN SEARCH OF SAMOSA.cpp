#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n],i,sum=0;
for(i=0; i<n; i++) cin>>a[i];
sort (a , a+n);
for(i=0; i<n; i++)
{
sum+=a[i];
if(sum>k) break;
}
cout<<i;
return 0;
}
