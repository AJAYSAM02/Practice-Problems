#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, a[1000], i;
cin>>n;
for(i=0; i<n; i++) cin>>a[i];
sort(a, a+n);
list <int> temp;
for(i=0; i<n; i++)
if(i%2) temp.push_front(a[i]);
else temp.push_back(a[i]);
int ans = 0;
for(i=0; i<n-1; i++)
{
int e1 = temp.front();
temp.pop_front();
int e2 = temp.front();
if (abs(e1-e2) > ans)
ans = abs(e1-e2);
}
cout << ans;
return 0;
}
