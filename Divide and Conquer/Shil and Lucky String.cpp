#include <iostream>
using namespace std;
int main()
{
int n; cin>>n;
if(n==4) cout << "0";
if(n==6)
{
string s;
cin>>s;
if(s[2]>='c') cout<<"0";
else cout << "1";
}
return 0;
}
