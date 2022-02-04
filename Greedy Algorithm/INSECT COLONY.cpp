#include <iostream>
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
int n, a, temp = 0;
cin>>n;
while(n--)
{
cin>>a;
temp ^= a;
}
if(temp%2) cout<<"No";
else cout<<"Yes";
cout<<endl;
}
return 0;
}
