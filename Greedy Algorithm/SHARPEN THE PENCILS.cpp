#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
cin>>a[i];
float s1 = 0, s2 = 0;
int i = 0, j = n - 1;
while ( i <= j )
{
if ( s1 <= s2 )
s1 += a[i++] / 2.0;
else
s2 += a[j--];
}
cout << i << " " << n-i << endl;
}
return 0;
}
