#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n] , b[n] , c[n] , d[n];
for (int i=0; i<n; i++)
{
cin >> a[i] >> b[i] >> c[i];
d[i] = a[i] + c[i];
}
sort (a,a+n);
sort (d,d+n);
if (n==2) cout << d[n-1]-a[0];
else cout << d[n-1]-a[0]+1 ;
return 0;
}
