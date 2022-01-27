#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while (t--)
{
int n;
cin >> n;
list <int> li;
while(n--)
{
int a;
cin >> a;
if(a<0) a *= -1;
li.push_back(a);
}
li.unique();
cout<<li.size()<<endl;
}
return 0;
}
