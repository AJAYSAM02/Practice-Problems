#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, k, a[20], i;
cin>>n>>k;
for(i=0; i<n; i++) cin>>a[i];
sort(a, a+n);
int ans = 1000;
for(i=0; i<n-k; i++)
if((a[i+k-1]-a[i]) < ans)
ans = a[i+k-1]-a[i];
cout << ans;
return 0;
}
