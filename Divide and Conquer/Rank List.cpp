#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string a[10]; int b[10] , c[10];
for(int i=0; i<n; i++)
cin>>a[i]>>b[i]>>c[i];
for(int i=0; i<n-1; i++)
for(int j=i+1; j<n; j++)
if(c[i] <= c[j])
{
swap(a[i],a[j]);
swap(b[i],b[j]);
swap(c[i],c[j]);
}
for(int i=0; i<n; i++)
cout << a[i] << " " << b[i] << " " << c[i] << endl;
return 0;
}
