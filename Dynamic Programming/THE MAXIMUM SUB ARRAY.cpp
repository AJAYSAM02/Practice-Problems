#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n , a[10] , i , j;
cin>>n;
for(i=0; i<n; i++)
cin>>a[i];
int maxc = 0 , maxn = 0;
for(i=0; i<n-1; i++)
{
int temp = a[i];
for(j=i+1; j<n; j++)
{
temp += a[j];
if ( temp > maxc )
maxc = temp;
}
}
for(i=0; i<n; i++)
if (a[i] > 0)
maxn += a[i];
cout << maxc << " " << maxn << endl;
}
return 0;
}
