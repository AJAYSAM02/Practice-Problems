#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],i;
for(i=0; i<n; i++)
cin>>a[i];
for(i=n; i>1; i--)
{
int temp=0;
for(int j=2; j<i; j++)
if(i%j==0)
temp=1;
if(temp)
continue;
break;
}
int sum=0;
for(int j=0; j<i; j++)
sum+=a[j];
cout<<sum;
return 0;
}
