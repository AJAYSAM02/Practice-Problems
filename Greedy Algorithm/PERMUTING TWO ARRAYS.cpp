#include <iostream>
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
int n, k, a[10], b[10], i;
cin>>n>>k;
for(i=0; i<n; i++) cin>>a[i];
for(i=0; i<n; i++) cin>>b[i];
for(i=0; i<n-1; i++)
for(int j=i+1; j<n; j++)
{
if(a[i] < a[j])
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
if(b[i] > b[j])
{
int temp = b[i];
b[i] = b[j];
b[j] = temp;
}
}
bool SRM = true;
for(i=0; i<n; i++)
if((a[i]+b[i])<k)
SRM = false;
if(SRM==true)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
