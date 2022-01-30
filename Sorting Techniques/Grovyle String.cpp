#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>> n;
string a[n];
for(int i=0; i<n; i++)
cin >> a[i];
for(int i=0; i<n; i++)
sort ( a[i].begin(), a[i].end() );
for(int i=0; i<n; i++)
{
int res = 1000;
string ans;
do
{
int X = 0;
int mid = a[i].length() / 2;
for(int j=0; j<a[i].length(); j++)
X += abs(mid - j) * (int) a[i][j];
if (X < res) {
res = X;
ans = a[i];
}
} while ( next_permutation (a[i].begin() , a[i].end()) );
cout << ans << endl;
}
return 0;
}
