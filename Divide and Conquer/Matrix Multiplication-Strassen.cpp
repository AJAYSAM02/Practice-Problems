#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n][n] , b[n][n] , i , j , temp;
for(i=0; i<n; i++)
for(j=0; j<n; j++)
cin >> a[i][j];
for(i=0; i<n; i++)
for(j=0; j<n; j++)
cin >> b[i][j];
temp = (a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
cout << temp << " ";
temp = (a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
cout << temp << " " << endl;
temp = (a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
cout << temp << " ";
temp = (a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
cout << temp << " " << endl;
return 0;
}
