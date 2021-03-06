#include <iostream>
using namespace std;
long long int fact(int n)
{
if(n==0) return 1;
return n*fact(n-1);
}
int isPrime(int n)
{
if(n==1) return 0;
if(n==2) return 1;
for(int i=2; i<n; i++)
if(n%i==0)
return 0;
return 1;
}
int count(int n)
{
int ans = 1;
int iter = n / 4;
int x = n , y = n;
while(iter--)
{
x -= 4;
y -= 3;
ans += fact(y) / ( fact(x) * fact(y-x) );
}
int P = 0;
for(int i=1; i<=ans; i++)
if ( isPrime(i) )
P++;
return P;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
cout << count(n) << endl;
}
return 0;
}
