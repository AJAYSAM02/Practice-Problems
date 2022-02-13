#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin >> t;
while(t--)
{
int n;
cin >> n;
int a[n][3], ans;
cin >> a[0][0] >> a[0][1] >> a[0][2];
for(int i=1; i<n; i++)
{
cin >> a[i][0] >> a[i][1] >> a[i][2];
a[i][0] += min(a[i-1][1],a[i-1][2]);
a[i][1] += min(a[i-1][0],a[i-1][2]);
a[i][2] += min(a[i-1][0],a[i-1][1]);
}
ans = min(a[n-1][0],a[n-1][1]);
ans = min(a[n-1][2],ans);
cout << ans << "\n";
}
return 0;
}
