#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
int a[n],b[k];
for(int i=0; i<n; i++)
cin>>a[i];
for(int i=0; i<k; i++)
cin>>b[i];
int max_n = a[0];
for(int i=1; i<n; i++)
if(a[i]>max_n)
max_n = a[i];
int max_k = b[0];
for(int i=1; i<k; i++)
if(b[i]>max_k)
max_k = b[i];
int temp = b[0];
for(int i=1; i<k; i++)
if(b[i]<=max_n && b[i]>temp)
temp = b[i];
int ans = 0;
for(int i=0; i<n; i++)
if(a[i]>=temp)
{
ans = i;
break;
}
cout << ans << endl;
}
return 0;
}
