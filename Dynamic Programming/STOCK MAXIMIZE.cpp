#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n, a[10], i, idx, b[10], sum = 0;
scanf("%d",&n);
for(i=1; i<=n; i++)
scanf("%d",&a[i]);
idx = n;
b[n] = n;
for(i=n-1; i>0; i--)
{
if(a[idx]<a[i])
idx = i;
b[i] = idx;
}
for(i=1; i<=n; i++)
if((a[b[i]]-a[i])>=0)
sum += (a[b[i]] - a[i]);
cout << sum << endl;
}
return 0;
}
