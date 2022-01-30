#include <iostream>
using namespace std;
int main()
{
int n , q;
cin >> n >> q;
int a[n] , i;
for (i=0; i<n; i++)
cin >> a[i];
while (q--)
{
int x , temp = 0;
cin >> x;
for (i=0; i<n; i++)
if (a[i] == x)
temp = 1;
if(temp)
cout << "YES" << endl;
else
cout << "NO" << endl;
}
return 0;
}
