#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2018;
bitset<MAXN> g[MAXN], com;
int n;
int main()
{
scanf("%d", &n);
assert(1 <= n && n <= 2000);
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n; j++) {
int x;
scanf("%d", &x);
//assert(x == 0 || x == 1);
g[i][j] = x;
}
}
long long ans = 0;
for (int i = 1; i <= n; i++) {
for (int j = i + 1; j <= n; j++) {
long long cnt = 0;
//cout<<"g[i] "<<i<<" "<<g[i]<<" g[j]"<<j<<" "<<g[j]<<endl;
cnt = (g[i] & g[j]).count();
//cout<<"cnt "<<cnt<<endl;
ans += cnt*(cnt - 1) / 2;
}
}
cout<<ans/2<<endl;
return 0;
}
