#include <iostream>
using namespace std;
int main()
{
int t; cin>>t;
while (t--)
{
int n;
cin >> n;
int a[n],i;
for (i=0; i<n; i++)
cin >> a[i];
int r,j;
for (i=0; i<n; i++)
{
for(j=i+1,r=0; j<n; j++)
if(a[j] < a[i])
r++;
cout << r << " ";
}
}
return 0;
}
